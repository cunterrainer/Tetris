#include <iostream>
#include <array>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>
#include <memory>

#include "SFML/Graphics.hpp"

#include "utility/datatypes.h"

class ViewPort : public sf::RectangleShape
{
public:
    ViewPort() = default;
    ViewPort(const sf::Vector2f& size, const sf::Vector2f& position)
	{
		setSize(size);
		setPosition(position);
		setFillColor(sf::Color::Black);
		setOutlineColor(sf::Color::White);
		setOutlineThickness(5);
	}
};


class Quad : public sf::RectangleShape
{
private:
	bool m_Visible = true;
	sf::Vector2f m_LU; // Left upper corner
	sf::Vector2f m_RU; // Right upper corner
	sf::Vector2f m_LL; // Left lower corner
	sf::Vector2f m_RL; // Right lower corner
public:
	Quad() noexcept { Update(); };
	constexpr void SetVisibility(const bool isVisible) noexcept { m_Visible = isVisible; }
	constexpr bool Visible() const noexcept { return m_Visible; }
	void Update() noexcept
	{
		const sf::Vector2f position = getPosition();
		const sf::Vector2f size = getSize();
		m_LU = position;
		m_RU = position + sf::Vector2f(size.x, 0);
		m_LL = position + sf::Vector2f(0, size.y);
		m_RL = position + size;
	}

	sf::Vector2f GetLU() const noexcept { return m_LU; }
	sf::Vector2f GetRU() const noexcept { return m_RU; }
	sf::Vector2f GetLL() const noexcept { return m_LL; }
	sf::Vector2f GetRL() const noexcept { return m_RL; }

	constexpr float32 GetLUX() const noexcept { return m_LU.x; }
	constexpr float32 GetRUX() const noexcept { return m_RU.x; }
	constexpr float32 GetLLX() const noexcept { return m_LL.x; }
	constexpr float32 GetRLX() const noexcept { return m_RL.x; }
	
	constexpr float32 GetLUY() const noexcept { return m_LU.y; }
	constexpr float32 GetRUY() const noexcept { return m_RU.y; }
	constexpr float32 GetLLY() const noexcept { return m_LL.y; }
	constexpr float32 GetRLY() const noexcept { return m_RL.y; }
};


class Piece
{
public:
	enum class MoveDir
	{
		Left,
		Right,
		Down
	};
	bool m_Placed = false;
public:
	void Move(const float32 x, const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end, const MoveDir mode) noexcept
	{
		if (!CanMove(begin, end, mode))
			return;
		
		for (Quad& rectangle : m_Rectangles)
		{
			const sf::Vector2f currentPos = rectangle.getPosition();
			rectangle.setPosition(sf::Vector2f(currentPos.x + x, currentPos.y + y));
			rectangle.Update();
		}
	}

	bool PiecesTouch(const Quad& rectangle, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end, const MoveDir mode) noexcept
	{
		for (std::vector<std::shared_ptr<Piece>>::const_iterator it = begin; it != end; ++it)
		{
			for (const Quad& otherRectangle : (*it)->m_Rectangles)
			{
				switch (mode)
				{
				case MoveDir::Down:
					if (rectangle.GetLL() == otherRectangle.GetLU())
						return true;
					break;
				case MoveDir::Right:
					if (rectangle.GetRU() == otherRectangle.GetLU())
						return true;
					break;
				case MoveDir::Left:
					if (rectangle.GetLU() == otherRectangle.GetRU())
						return true;
					break;
				}
			}
		}
		return false;
	}

	bool CanMove(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end, const MoveDir mode)
	{
		for (const Quad& rectangle : m_Rectangles)
		{
			// Check if the piece is on the bottom of the screen
			if (rectangle.GetLLY() == Height - YOffset && mode == MoveDir::Down)
			{
				std::cout << "Can't move down" << std::endl;
				m_Placed = true;
				return false;
			}
			// Check if the piece is on the Right side of the screen
			if (mode == MoveDir::Right && rectangle.GetRUX() == Width - (XOffset + PieceSize))
				return false;
			// Check if the piece is on the Left side of the screen
			if (mode == MoveDir::Left && rectangle.GetLUX() == XOffset)
				return false;

			if (PiecesTouch(rectangle, begin, end, mode))
			{
				if (mode == MoveDir::Down)
					m_Placed = true;
				return false;
			}
		}
		return true;
	}
public:
    std::array<Quad, 4> m_Rectangles;
	uint8 m_RotationStatus = 0;
	static constexpr uint8 PieceSize = 50;
	static constexpr uint8 XOffset = 50;
	static constexpr uint8 YOffset = 50;
	static constexpr uint16 Width = 600;
	static constexpr uint16 Height = 900;
	static constexpr uint16 SpawnPointX = ((Width - 150) / 2) - 25;
	static constexpr uint16 SpawnPointY = 50;
	static constexpr uint16 SpawnPointXPiece = SpawnPointX + PieceSize;
	static constexpr uint16 SpawnPointYPiece = SpawnPointY + PieceSize;
public:
	Piece() : Piece(sf::Color::White) {}
	Piece(const sf::Color& color) noexcept
	{
		for (Quad& rectangle : m_Rectangles)
		{
			rectangle.setSize(sf::Vector2f(PieceSize, PieceSize));
			rectangle.setFillColor(color);
			rectangle.setOutlineColor(sf::Color::Black);
			rectangle.setOutlineThickness(1);
		}
	}
	constexpr std::size_t Size() const noexcept { return m_Rectangles.size(); }
	constexpr bool Placed() const noexcept { return m_Placed; }

	void Draw(sf::RenderWindow& window) const noexcept
	{
		for (const Quad& rectangle : m_Rectangles)
		{
			if(rectangle.Visible())
				window.draw(rectangle);
		}
	}


	void MoveDown(const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { Move(0.f, y, begin, end, MoveDir::Down); }
	void MoveRight(const float32 x, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { Move(x, 0.f, begin, end, MoveDir::Right); }
	void MoveLeft(const float32 x, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { Move(-x, 0.f, begin, end, MoveDir::Left); }
	// only for testing
	void MoveUp(const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { Move(0.f, -y, begin, end, MoveDir::Left); }

	virtual void Reset() noexcept {}
	virtual void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { std::cout << "here\n"; }
	void Update() noexcept
	{
		m_Rectangles[0].Update();
		m_Rectangles[1].Update();
		m_Rectangles[2].Update();
		m_Rectangles[3].Update();
	}
};


class OPiece : public Piece
{
public:
	OPiece() : Piece(sf::Color::Yellow) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		Update();
	}
};


class SPiece : public Piece
{
public:
	SPiece() : Piece(sf::Color::Green) { Reset(); }
	void Reset() noexcept final override
	{
		/*
			  0 1
			2 3
		*/
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX + PieceSize *2, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		Update();
	}

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		if (m_RotationStatus == 4)
			m_RotationStatus = 0;

		// current position of the piece with the 0 index
		//const sf::Vector2f currentPosition0 = m_Rectangles[0].getPosition();
		//
		//if (m_RotationStatus == 1)
		//{
		//	// 2
		//	// 3 0
		//	//   1
		//	m_Rectangles[2].setPosition(currentPosition0);
		//	m_Rectangles[0].setPosition(m_Rectangles[3].GetLUX() + PieceSize, m_Rectangles[3].GetLUY());
		//	m_Rectangles[1].setPosition(m_Rectangles[3].GetRL());
		//}
		//else if (m_RotationStatus == 2)
		//{
		//	//  3 2
		//	//1 0
		//	m_Rectangles[2].setPosition(currentPosition0);
		//	m_Rectangles[0].setPosition(m_Rectangles[3].GetLL());
		//	m_Rectangles[1].setPosition(m_Rectangles[3].GetLL().x - 50.f, m_Rectangles[3].GetLL().y);
		//}
		//else if (m_RotationStatus == 3)
		//{
		//	//1 
		//	//0 3
		//	//  2
		//	m_Rectangles[2].setPosition(currentPosition0);
		//	m_Rectangles[0].setPosition(m_Rectangles[3].GetLU().x - 50.f, m_Rectangles[3].GetLU().y);
		//	m_Rectangles[1].setPosition(m_Rectangles[3].GetLU() - sf::Vector2f(50.f, 50.f));
		//}
		//else if (m_RotationStatus == 0)
		//{
		//	//  0 1
		//	//2 3
		//	m_Rectangles[2].setPosition(currentPosition0);
		//	m_Rectangles[0].setPosition(m_Rectangles[3].GetLUX(), m_Rectangles[3].GetLUY() - 50.f);
		//	m_Rectangles[1].setPosition(m_Rectangles[3].GetLUX() + 50.f, m_Rectangles[3].GetLUY() - 50.f);
		//}
		//++m_RotationStatus;
		//Update();
	}
};


class ZPiece : public Piece
{
public:
	ZPiece() : Piece(sf::Color::Red) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize*2, SpawnPointYPiece));
		Update();
	}
};


class TPiece : public Piece
{
public:
	TPiece() : Piece(sf::Color(70, 0, 130)) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}
};


class LPiece : public Piece
{
public:
	LPiece() : Piece(sf::Color(255, 136, 0)) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX + PieceSize*2, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}
};


class JPiece : public Piece
{
public:
	JPiece() : Piece(sf::Color::Blue) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}
};


class IPiece : public Piece
{
public:
	IPiece() : Piece(sf::Color::Cyan) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointX + PieceSize*2, SpawnPointY));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize*3, SpawnPointY));
		Update();
	}
};


std::shared_ptr<Piece> GetNewPiece()
{
	static std::array<uint8, 7> currentOrder = { 0, 1, 2, 3, 4, 5, 6 };
	static std::array<std::unique_ptr<Piece>, 7> pieces =
	{
		std::make_unique<OPiece>(),
		std::make_unique<SPiece>(),
		std::make_unique<ZPiece>(),
		std::make_unique<TPiece>(),
		std::make_unique<LPiece>(),
		std::make_unique<JPiece>(),
		std::make_unique<IPiece>()
	};
	static uint8 usedCounter = 0;
	static bool firstTime = true;

	if (usedCounter < 7 && !firstTime)
	{
		//std::unique_ptr<Piece> temp = std::make_unique<Piece>(*pieces[currentOrder[usedCounter]]);
		//std::unique_ptr<Piece> temp = std::make_unique<Piece>(*pieces[currentOrder[usedCounter]]);
		//std::shared_ptr<Piece> temp = std::make_shared<Piece>(*pieces[currentOrder[usedCounter]]);
		std::shared_ptr<Piece> temp = std::make_shared<SPiece>();
		++usedCounter;
		return temp;
	}
	usedCounter = 0;
	uint32 seed = static_cast<uint32>(std::chrono::system_clock::now().time_since_epoch().count());
	std::shuffle(currentOrder.begin(), currentOrder.end(), std::default_random_engine(seed));
	firstTime = false;
	return GetNewPiece();
}


void HandleUserInput(sf::RenderWindow* window, const std::vector<std::shared_ptr<Piece>>* currentPieces)
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window->close();
			break;
		case sf::Event::Resized: // resize the viewport
			window->setView(sf::View(sf::FloatRect(0.f, 0.f, static_cast<float>(event.size.width), static_cast<float>(event.size.height))));
			break;
		case sf::Event::KeyPressed:
			switch (event.key.code)
			{
			case sf::Keyboard::W:
			case sf::Keyboard::Up:
				currentPieces->at(currentPieces->size() - 1)->Rotate(currentPieces->cbegin(), currentPieces->cend() - 1);
				//currentPieces->at(currentPieces->size() - 1).MoveUp(50.f, currentPieces->cbegin(), currentPieces->cend() - 1);
				break;
			case sf::Keyboard::A:
			case sf::Keyboard::Left:
				currentPieces->at(currentPieces->size() - 1)->MoveLeft(50.f, currentPieces->cbegin(), currentPieces->cend() - 1);
				break;
			case sf::Keyboard::S:
			case sf::Keyboard::Down:
				currentPieces->at(currentPieces->size() - 1)->MoveDown(50.f, currentPieces->cbegin(), currentPieces->cend() - 1);
				break;
			case sf::Keyboard::D:
			case sf::Keyboard::Right:
				currentPieces->at(currentPieces->size() - 1)->MoveRight(50.f, currentPieces->cbegin(), currentPieces->cend() - 1);
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
}


int main()
{
	constexpr int32 width = Piece::Width;
	constexpr int32 height = Piece::Height;
    sf::RenderWindow window(sf::VideoMode(width, height), "Tetris");
	window.setFramerateLimit(10);
	
	ViewPort playView(sf::Vector2f(width - 150, height - 100), sf::Vector2f(50, 50));
	
	std::vector<std::shared_ptr<Piece>> currentPieces;
	currentPieces.push_back(GetNewPiece());
	
    while (window.isOpen())
    {
		HandleUserInput(&window, &currentPieces);
		
        window.clear();
		window.draw(playView);
		for (const std::shared_ptr<Piece> i : currentPieces)
			i->Draw(window);
        window.display();
	
		if (currentPieces.at(currentPieces.size() - 1)->Placed())
			currentPieces.push_back(GetNewPiece());
    }

    return 0;
}
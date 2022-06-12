#include <iostream>
#include <array>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

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
public:
	constexpr void SetVisibility(const bool isVisible) noexcept { m_Visible = isVisible; }
	constexpr bool Visible() const noexcept { return m_Visible; }
};


class Piece
{
public:
    std::array<Quad, 4> m_Rectangles;
	static constexpr uint8 PieceSize = 50;
	static constexpr uint8 XOffset = 50;
	static constexpr uint8 YOffset = 50;
	static constexpr uint16 Width = 600;
	static constexpr uint16 Height = 900;
	static constexpr uint16 SpawnPointX = ((Width - 150) / 2) - 25;
	static constexpr uint16 SpawnPointY = 50;
	static constexpr uint16 SpawnPointXPiece = SpawnPointX + PieceSize;
	static constexpr uint16 SpawnPointYPiece = SpawnPointY + PieceSize;
	bool m_Placed = false;
public:
	Piece() : Piece(sf::Color::White) {}
	Piece(const sf::Color& color) noexcept
	{
		for (auto& rectangle : m_Rectangles)
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
		for (const auto& rectangle : m_Rectangles)
		{
			if(rectangle.Visible())
				window.draw(rectangle);
		}
	}

	void Move(const float32 x, const float32 y)
	{
		float mostLeft = static_cast<float>(Width);
		float mostRight = 0.f;
		for (auto& rectangle : m_Rectangles)
		{
			if (!rectangle.Visible())
				continue;

			const sf::Vector2f currentPos = rectangle.getPosition();
			if (currentPos.x < mostLeft)
				mostLeft = currentPos.x;
			if (currentPos.x > mostRight)
				mostRight = currentPos.x;

			if (currentPos.y == Height - (YOffset + PieceSize))
			{
				m_Placed = true;
				return;
			}

			if (mostLeft == XOffset && x < 0.f || mostRight == 600.f - 150.f && x > 0.f)
				return;
		}
		for (auto& rectangle : m_Rectangles)
		{
			const sf::Vector2f currentPos = rectangle.getPosition();
			rectangle.setPosition(sf::Vector2f(currentPos.x + x, currentPos.y + y));
		}
	}

	virtual void Reset() noexcept {}
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
	}
};


class SPiece : public Piece
{
public:
	SPiece() : Piece(sf::Color::Green) { Reset(); }
	void Reset() noexcept final override
	{
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX + PieceSize *2, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
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
	}
};


uint8 GetNewIndex()
{
	static std::array<uint8, 7> currentOrder = { 0, 1, 2, 3, 4, 5, 6 };
	static uint8 usedCounter = 0;
	static bool firstTime = true;

	if (usedCounter < 7 && !firstTime)
	{
		uint8 temp = currentOrder[usedCounter];
		++usedCounter;
		return temp;
	}
	usedCounter = 0;
	uint32 seed = static_cast<uint32>(std::chrono::system_clock::now().time_since_epoch().count());
	std::shuffle(currentOrder.begin(), currentOrder.end(), std::default_random_engine(seed));
	firstTime = false;
	return GetNewIndex();
}


int main()
{
	constexpr int32 width = Piece::Width;
	constexpr int32 height = Piece::Height;
    sf::RenderWindow window(sf::VideoMode(width, height), "Tetris");
	window.setFramerateLimit(10);
	
	ViewPort playView(sf::Vector2f(width - 150, height - 100), sf::Vector2f(50, 50));
	Piece* pieces = new Piece[7];
	pieces[0] = OPiece();
	pieces[1] = SPiece();
	pieces[2] = ZPiece();
	pieces[3] = TPiece();
	pieces[4] = LPiece();
	pieces[5] = JPiece();
	pieces[6] = IPiece();

	std::vector<Piece> currentPieces;
	currentPieces.push_back(pieces[GetNewIndex()]);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
			if (event.type == sf::Event::Resized)
				window.setView(sf::View(sf::FloatRect(0.f, 0.f, static_cast<float>(event.size.width), static_cast<float>(event.size.height))));
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D)
			{
				currentPieces[currentPieces.size() - 1].Move(50.f, 0.f);
			}
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A)
			{
				currentPieces[currentPieces.size() - 1].Move(-50.f, 0.f);
			}
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
			{
				currentPieces[currentPieces.size() - 1].Move(0.f, -50.f);
			}
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
			{
				currentPieces[currentPieces.size() - 1].Move(0.f, 50.f);
			}
        }

        window.clear();
		window.draw(playView);
		for (const auto& i : currentPieces)
			i.Draw(window);
        window.display();

		if (currentPieces[currentPieces.size() - 1].Placed())
			currentPieces.push_back(pieces[GetNewIndex()]);
    }

	delete[] pieces;
    return 0;
}
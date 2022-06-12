#include <iostream>
#include <array>
#include <algorithm>
#include <chrono>
#include <random>
#include <vector>
#include <memory>
#include <unordered_map>

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
	bool m_Placed = false;
	sf::Vector2f m_LU; // Left upper corner
	sf::Vector2f m_RU; // Right upper corner
	sf::Vector2f m_LL; // Left lower corner
	sf::Vector2f m_RL; // Right lower corner
public:
	Quad() noexcept { Update(); };
	constexpr void SetVisibility(const bool isVisible) noexcept { m_Visible = isVisible; }
	constexpr bool Visible() const noexcept { return m_Visible; }
	constexpr void SetPlaced(const bool isPlaced) noexcept { m_Placed = isPlaced; }
	constexpr bool Placed() const noexcept { return m_Placed; }
	void Update() noexcept
	{
		const sf::Vector2f position = getPosition();
		const sf::Vector2f size = getSize();
		m_LU = position;
		m_RU = position + sf::Vector2f(size.x, 0);
		m_LL = position + sf::Vector2f(0, size.y);
		m_RL = position + size;
	}

	void setPosition(float x, float y) noexcept
	{
		sf::RectangleShape::setPosition(x, y);
		Update();
	}

	void setPosition(const sf::Vector2f& vec) noexcept
	{
		sf::RectangleShape::setPosition(vec);
		Update();
	}

	bool IsOutOfSideBoarder(const uint16 width, const float32 xoffset) const noexcept
	{
		// Right side of the screen || Left side of the screen
		return GetRUX() == width - (xoffset) || GetRUX() == xoffset;
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
private:
	enum class MoveDir
	{
		Left,
		Right,
		Down,
		Replace
	};
	bool m_Placed = false;
private:
	void UpdateRows(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept
	{
		std::unordered_map<float32, uint16> rows;
		
		for (auto it = begin; it != end; ++it) // iterate pieces
		{
			for (size_t i = 0; i < (*it)->m_Rectangles.size(); ++i)
			{
				(*it)->m_Rectangles[i].Update();
				if((*it)->m_Rectangles[i].Visible() && (*it)->m_Rectangles[i].Placed())
					rows[(*it)->m_Rectangles[i].GetLUY()]++;
			}
		}

		for (auto it = rows.begin(); it != rows.end(); ++it)
		{
			if (it->second == 9)
			{
				for (auto itp = begin; itp != end; ++itp) // iterate pieces
				{
					for (size_t i = 0; i < (*itp)->m_Rectangles.size(); ++i)
					{
						if ((*itp)->m_Rectangles[i].GetLUY() == it->first )//&& (*itp)->m_Rectangles[i].Placed())
							(*itp)->m_Rectangles[i].SetVisibility(false);
					}
				}
			}
		}
	}

	bool QuadHasNeighbour(const Quad& quad)
	{
		for (Quad& quad2 : m_PreviewRectangles)
		{
			if(&quad == &quad2)
				continue;
			quad2.Update();

			if(!quad2.Visible())
				continue;

			Quad temp = quad;
			temp.setPosition(quad.GetLUX(), quad.GetLUY() - 50.f);
			temp.Update();
			
			if (temp.GetLL() == quad2.GetLU() || temp.GetLL() == quad2.GetLL() || temp.GetLL() == quad2.GetRL() || temp.GetLL() == quad2.GetRU())
				return true;
			if (temp.GetLU() == quad2.GetLU() || temp.GetLU() == quad2.GetLL() || temp.GetLU() == quad2.GetRL() || temp.GetLU() == quad2.GetRU())
				return true;
			if (temp.GetRU() == quad2.GetLU() || temp.GetRU() == quad2.GetLL() || temp.GetRU() == quad2.GetRL() || temp.GetRU() == quad2.GetRU())
				return true;
			if (temp.GetRL() == quad2.GetLU() || temp.GetRL() == quad2.GetLL() || temp.GetRL() == quad2.GetRL() || temp.GetRL() == quad2.GetRU())
				return true;

			//if(quad.GetLL() == quad2.GetLU() || quad.GetLL() == quad2.GetLL() || quad.GetLL() == quad2.GetRL() || quad.GetLL() == quad2.GetRU())
			//	return true;
			//if (quad.GetLU() == quad2.GetLU() || quad.GetLU() == quad2.GetLL() || quad.GetLU() == quad2.GetRL() || quad.GetLU() == quad2.GetRU())
			//	return true;
			//if (quad.GetRU() == quad2.GetLU() || quad.GetRU() == quad2.GetLL() || quad.GetRU() == quad2.GetRL() || quad.GetRU() == quad2.GetRU())
			//	return true;
			//if (quad.GetRL() == quad2.GetLU() || quad.GetRL() == quad2.GetLL() || quad.GetRL() == quad2.GetRL() || quad.GetRL() == quad2.GetRU())
			//	return true;
		}
		return false;
	}

	bool SingleQuadCanMove(Quad& quad, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept
	{
		//for (Quad& quad : m_PreviewRectangles)
		
		quad.Update();
		if (!quad.Visible())
			return false;

		if (!QuadHasNeighbour(quad))
		{
			//// Check if the piece is at the bottom of the screen
			if (quad.GetLLY() == Height)
			{
				quad.SetPlaced(true);
				return false;
			}
			//
			for (std::vector<std::shared_ptr<Piece>>::const_iterator it = begin; it != end; ++it)
			{
				//if (this == it->get()) continue;
				for (Quad& otherRectangle : (*it)->m_PreviewRectangles)
				{
					if(&quad == &otherRectangle)
						continue;
					//if(&m_Rectangles[0] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[1] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[2] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[3] == &otherRectangle)
					//	continue;
				
					otherRectangle.Update();
					if (!otherRectangle.Visible())
						continue;
					if (quad.GetLU() == otherRectangle.GetLU())
						return false;
				}
			}
			//quad.setPosition(quad.GetLUX(), quad.GetLUY());
			return true;
			//quad.Update();
		}
		return false;
	}

	bool Move(const float32 x, const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end, const MoveDir mode) noexcept
	{
		CopyToPreview();
		if (mode == MoveDir::Replace)
		{
			bool canMove = false;
			for (uint8 i = 0; i < m_PreviewRectangles.size()*2; ++i)
			{
				for(Quad& quad : m_PreviewRectangles)
				{
					while (true)
					{
						quad.Update();
						if (!quad.Visible())
							break;

						Quad temp = quad;
						quad.setPosition(quad.GetLUX(), quad.GetLUY() + 50.f);

						if (SingleQuadCanMove(quad, begin, end))
						{
							canMove = true;
							//quad.setPosition(quad.GetLUX(), quad.GetLUY() + 50.f);
							quad.Update();
						}
						else
						{
							quad.SetPlaced(true);
							quad.setPosition(temp.getPosition());
							quad.Update();
							break;
						}
					}
				}	
			}
			CopyFromPreview();
			UpdateRows(begin, end);
			return canMove;
		}


		for (Quad& rectangle : m_PreviewRectangles)
		{
			const sf::Vector2f currentPos = rectangle.getPosition();
			rectangle.setPosition(sf::Vector2f(currentPos.x + x, currentPos.y + y));
		}


		if (!CanMove(m_PreviewRectangles, begin, end))
		{
			if (mode == MoveDir::Down)
			{
				m_Placed = true;
				SetPlaced(true);
				UpdateRows(begin, end);
			}
			return false;
		}
		
		CopyFromPreview();
		return true;
	}

	void SetPlaced(bool placed) noexcept
	{
		m_Rectangles[0].SetPlaced(placed);
		m_Rectangles[1].SetPlaced(placed);
		m_Rectangles[2].SetPlaced(placed);
		m_Rectangles[3].SetPlaced(placed);
	}
public:
    std::array<Quad, 4> m_Rectangles;
	std::array<Quad, 4> m_PreviewRectangles;
	uint8 m_RotationStatus = 255; // 255 indicates that the piece hasn't been rotated yet
	//uint
	static uint64 m_PieceCount;
	static constexpr uint16 Width = 600;
	static constexpr uint16 Height = 900;
	static constexpr float32 SpawnPointX = static_cast<uint16>(((Width - 150) / 2.f)) - 25.f;
	static constexpr float32 SpawnPointY = 50.f;
	static constexpr float32 PieceSize = 50.f;
	static constexpr float32 XOffset = 50.f;
	static constexpr float32 YOffset = 50.f;
	static constexpr float32 SpawnPointXPiece = SpawnPointX + PieceSize;
	static constexpr float32 SpawnPointYPiece = SpawnPointY + PieceSize;
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
	constexpr bool CompletelyVisible() const noexcept { return m_Rectangles[0].Visible() && m_Rectangles[1].Visible() && m_Rectangles[2].Visible() && m_Rectangles[3].Visible(); }
	constexpr bool Visible() const noexcept { return m_Rectangles[0].Visible() || m_Rectangles[1].Visible() || m_Rectangles[2].Visible() || m_Rectangles[3].Visible(); }

	bool CanMove(std::array<Quad, 4>& quads, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept
	{
		for (Quad& quad : quads)
		{
			if (!quad.Visible())
			{
				continue;
			}

			quad.Update();
			// Check if the piece is at the bottom of the screen
			if (quad.GetLLY() == Height)
			{
				m_Placed = true;
				return false;
			}
			// Check if the piece is at the top of the screen
			if (quad.GetLLY() == YOffset)
				return false;
			if(quad.IsOutOfSideBoarder(Width, XOffset))
				return false;

			for (std::vector<std::shared_ptr<Piece>>::const_iterator it = begin; it != end; ++it)
			{
				for (const Quad& otherRectangle : (*it)->m_Rectangles)
				{
					if(this == it->get())
						continue;
					//if(&m_Rectangles[0] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[1] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[2] == &otherRectangle)
					//	continue;
					//if (&m_Rectangles[3] == &otherRectangle)
					//	continue;

					if (!otherRectangle.Visible())
						continue;
					if (quad.GetLU() == otherRectangle.GetLU())
						return false;
				}
			}
		}
		return true;
	}

	bool StateIsValid(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept
	{
		return CanMove(m_Rectangles, begin, end);
	}

	void Draw(sf::RenderWindow& window) const noexcept
	{
		for (const Quad& rectangle : m_Rectangles)
		{
			if(rectangle.Visible())
				window.draw(rectangle);
		}
	}

	void CopyToPreview() noexcept
	{
		Update();
		m_PreviewRectangles[0] = m_Rectangles[0];
		m_PreviewRectangles[1] = m_Rectangles[1];
		m_PreviewRectangles[2] = m_Rectangles[2];
		m_PreviewRectangles[3] = m_Rectangles[3];
	}

	void CopyFromPreview() noexcept
	{
		m_Rectangles[0] = m_PreviewRectangles[0];
		m_Rectangles[1] = m_PreviewRectangles[1];
		m_Rectangles[2] = m_PreviewRectangles[2];
		m_Rectangles[3] = m_PreviewRectangles[3];
		Update();
	}


	bool MoveDown(const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept  { return Move(0.f, y, begin, end, MoveDir::Down); }
	bool MoveRight(const float32 x, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { return Move(x, 0.f, begin, end, MoveDir::Right); }
	bool MoveLeft(const float32 x, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept  { return Move(-x, 0.f, begin, end, MoveDir::Left); }
	bool MoveReplace(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { return Move(0.f, PieceSize, begin, end, MoveDir::Replace); }
	// only for testing
	void MoveUp(const float32 y, const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept { Move(0.f, -y, begin, end, MoveDir::Left); }

	void SetUpRotation() noexcept
	{
		CopyToPreview();
		switch (m_RotationStatus)
		{
		case 4:
			m_RotationStatus = 0;
			break;
		case 255:
			m_RotationStatus = 1;
			break;
		default:
			break;
		}
	}

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
		// 3 is the constant piece
		SetUpRotation();

		// current position of the piece with the 0 index
		const sf::Vector2f currentPosition0 = m_PreviewRectangles[0].getPosition();
		
		if (m_RotationStatus == 1)
		{
			// 2
			// 3 0
			//   1
			m_PreviewRectangles[2].setPosition(currentPosition0);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[3].GetLUX() + PieceSize, m_PreviewRectangles[3].GetLUY());
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[3].GetRL());
		}
		else if (m_RotationStatus == 2)
		{
			//  3 2
			//1 0
			m_PreviewRectangles[2].setPosition(currentPosition0);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[3].GetLL());
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[3].GetLL().x - PieceSize, m_PreviewRectangles[3].GetLL().y);
		}
		else if (m_RotationStatus == 3)
		{
			//1 
			//0 3
			//  2
			m_PreviewRectangles[2].setPosition(currentPosition0);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[3].GetLU().x - PieceSize, m_PreviewRectangles[3].GetLU().y);
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[3].GetLU() - sf::Vector2f(PieceSize, PieceSize));
		}
		else if (m_RotationStatus == 0)
		{
			//  0 1
			//2 3
			m_PreviewRectangles[2].setPosition(currentPosition0);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[3].GetLUX(), m_PreviewRectangles[3].GetLUY() - PieceSize);
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[3].GetLUX() + PieceSize, m_PreviewRectangles[3].GetLUY() - PieceSize);
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
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

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		// 2 is the constant piece
		SetUpRotation();

		// current position of the piece with the 0 index
		const sf::Vector2f currentPosition3 = m_PreviewRectangles[3].getPosition();

		if (m_RotationStatus == 1)
		{
			//   0
			// 2 1
			// 3
			m_PreviewRectangles[1].setPosition(currentPosition3);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetRUX(), m_PreviewRectangles[2].GetRUY() - PieceSize);
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLL());
		}
		else if (m_RotationStatus == 2)
		{
			// 3 2 
			//   1 0
			m_PreviewRectangles[1].setPosition(currentPosition3);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetRL());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
		}
		else if (m_RotationStatus == 3)
		{
			//   3 
			// 1 2
			// 0  
			m_PreviewRectangles[1].setPosition(currentPosition3);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLLX() - PieceSize, m_PreviewRectangles[2].GetLLY());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
		}
		else if (m_RotationStatus == 0)
		{
			// 0 1
			//   2 3
			m_PreviewRectangles[1].setPosition(currentPosition3);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLU() - sf::Vector2f(PieceSize, PieceSize));
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetRU());
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
	}
};


class TPiece : public Piece
{
public:
	TPiece() : Piece(sf::Color(70, 0, 130)) { Reset(); }
	void Reset() noexcept final override
	{
		//   0
		// 1 2 3
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		// 2 is the constant piece
		SetUpRotation();

		// current position of the piece with the 0 index
		const sf::Vector2f currentPosition0 = m_PreviewRectangles[0].getPosition();
		const sf::Vector2f currentPosition3 = m_PreviewRectangles[3].getPosition();

		m_PreviewRectangles[1].setPosition(currentPosition0);
		m_PreviewRectangles[0].setPosition(currentPosition3);
		if (m_RotationStatus == 1)
		{
			// 1
			// 2 0
			// 3
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLL());
		}
		else if (m_RotationStatus == 2)
		{
			// 3 2 1 
			//   0
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
		}
		else if (m_RotationStatus == 3)
		{
			//   3 
			// 0 2
			//   1
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
		}
		else if (m_RotationStatus == 0)
		{
			//   0
			// 1 2 3
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetRU());
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
	}
};


class LPiece : public Piece
{
public:
	LPiece() : Piece(sf::Color(255, 136, 0)) { Reset(); }
	void Reset() noexcept final override
	{
		//     0
		// 1 2 3
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX + PieceSize*2, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		// 2 is the constant piece
		SetUpRotation();

		if (m_RotationStatus == 1)
		{
			// 1
			// 2
			// 3 0
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetRL());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLL());
		}
		else if (m_RotationStatus == 2)
		{
			// 3 2 1
			// 0 
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetRU());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLLX() - PieceSize, m_PreviewRectangles[2].GetLLY());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
		}
		else if (m_RotationStatus == 3)
		{
			// 0 3 
			//   2
			//   1
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLL());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLU() - sf::Vector2f(PieceSize, PieceSize));
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
		}
		else if (m_RotationStatus == 0)
		{
			//     0
			// 1 2 3
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLUX() + PieceSize, m_PreviewRectangles[2].GetLUY() - PieceSize);
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetRU());
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
	}
};


class JPiece : public Piece
{
public:
	JPiece() : Piece(sf::Color::Blue) { Reset(); }
	void Reset() noexcept final override
	{
		// 0
		// 1 2 3
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointX, SpawnPointYPiece));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointYPiece));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize * 2, SpawnPointYPiece));
		Update();
	}

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		// 2 is the constant piece
		SetUpRotation();

		if (m_RotationStatus == 1)
		{
			// 1 0
			// 2
			// 3
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetRUX(), m_PreviewRectangles[2].GetRUY() - PieceSize);
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLL());
		}
		else if (m_RotationStatus == 2)
		{
			// 3 2 1
			//     0
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetRU());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetRL());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
		}
		else if (m_RotationStatus == 3)
		{
			//   3 
			//   2
			// 0 1
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLL());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLLX() - PieceSize, m_PreviewRectangles[2].GetLLY());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLUX(), m_PreviewRectangles[2].GetLUY() - PieceSize);
		}
		else if (m_RotationStatus == 0)
		{
			// 0
			// 1 2 3
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLUX() - PieceSize, m_PreviewRectangles[2].GetLUY());
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[2].GetLU() - sf::Vector2f(PieceSize, PieceSize));
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetRU());
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
	}
};


class IPiece : public Piece
{
public:
	IPiece() : Piece(sf::Color::Cyan) { Reset(); }
	void Reset() noexcept final override
	{
		// 0 1 2 3
		m_Rectangles[0].setPosition(sf::Vector2f(SpawnPointX, SpawnPointY));
		m_Rectangles[1].setPosition(sf::Vector2f(SpawnPointXPiece, SpawnPointY));
		m_Rectangles[2].setPosition(sf::Vector2f(SpawnPointX + PieceSize*2, SpawnPointY));
		m_Rectangles[3].setPosition(sf::Vector2f(SpawnPointX + PieceSize*3, SpawnPointY));
		Update();
	}

	void Rotate(const std::vector<std::shared_ptr<Piece>>::const_iterator& begin, const std::vector<std::shared_ptr<Piece>>::const_iterator& end) noexcept final override
	{
		// the constant point is between 1 and 2
		// either the lower right corner from 1 or the lower left corner from 2
		SetUpRotation();

		if (m_RotationStatus == 1)
		{
			// 0
			// 1
			// 2
			// 3
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[1].GetRLX(), m_PreviewRectangles[1].GetRUY());
			m_PreviewRectangles[1].Update();
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[1].GetLUX(), m_PreviewRectangles[1].GetLUY() - PieceSize);
			m_PreviewRectangles[2].setPosition(m_PreviewRectangles[1].GetLL());
			m_PreviewRectangles[2].Update();
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetLL());
		}
		else if (m_RotationStatus == 2)
		{
			// 3 2 1 0
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[1].GetLL());
			m_PreviewRectangles[1].Update();
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[1].GetRU());
			m_PreviewRectangles[2].setPosition(m_PreviewRectangles[1].GetLUX() - PieceSize, m_PreviewRectangles[1].GetLUY());
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[1].GetLUX() - PieceSize*2, m_PreviewRectangles[1].GetLUY());
		}
		else if (m_RotationStatus == 3)
		{
			// 3 
			// 2
			// 1
			// 0
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLU());
			m_PreviewRectangles[1].Update();
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[1].GetLL());
			m_PreviewRectangles[2].setPosition(m_PreviewRectangles[1].GetLUX(), m_PreviewRectangles[1].GetLUY() - PieceSize);
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[1].GetLUX(), m_PreviewRectangles[1].GetLUY() - PieceSize*2);
		}
		else if (m_RotationStatus == 0)
		{
			// 0 1 2 3
			m_PreviewRectangles[1].setPosition(m_PreviewRectangles[2].GetLU());
			m_PreviewRectangles[1].Update();
			m_PreviewRectangles[0].setPosition(m_PreviewRectangles[1].GetLUX() - PieceSize, m_PreviewRectangles[1].GetLUY());
			m_PreviewRectangles[2].setPosition(m_PreviewRectangles[1].GetRU());
			m_PreviewRectangles[2].Update();
			m_PreviewRectangles[3].setPosition(m_PreviewRectangles[2].GetRU());
		}
		if (CanMove(m_PreviewRectangles, begin, end))
		{
			CopyFromPreview();
			++m_RotationStatus;
		}
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
		switch (usedCounter)
		{
		case 0:
			++usedCounter;
			return std::make_shared<OPiece>();
		case 1:
			++usedCounter;
			return std::make_shared<SPiece>();
		case 2:
			++usedCounter;
			return std::make_shared<ZPiece>();
		case 3:
			++usedCounter;
			return std::make_shared<TPiece>();
		case 4:
			++usedCounter;
			return std::make_shared<LPiece>();
		case 5:
			++usedCounter;
			return std::make_shared<JPiece>();
		case 6:
			++usedCounter;
			return std::make_shared<IPiece>();
		default:
			break;
		}
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
				break;
			case sf::Keyboard::A:
			case sf::Keyboard::Left:
				currentPieces->at(currentPieces->size() - 1)->MoveLeft(Piece::PieceSize, currentPieces->cbegin(), currentPieces->cend() - 1);
				break;
			case sf::Keyboard::S:
			case sf::Keyboard::Down:
				currentPieces->at(currentPieces->size() - 1)->MoveDown(Piece::PieceSize, currentPieces->cbegin(), currentPieces->cend());
				break;
			case sf::Keyboard::D:
			case sf::Keyboard::Right:
				currentPieces->at(currentPieces->size() - 1)->MoveRight(Piece::PieceSize, currentPieces->cbegin(), currentPieces->cend() - 1);
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


void RemoveDeadPieces(std::vector<std::shared_ptr<Piece>>& pieces)
{
	size_t size = 1;
	while (size > 0)
	{
		size = 0;
		for (size_t i = 0; i < pieces.size(); ++i)
		{
			if (!pieces[i]->Visible())
			{
				pieces.erase(pieces.begin() + i);
				++size;
			}
		}
	}
}


void MovePiecesDown(const std::vector<std::shared_ptr<Piece>>& pieces)
{
	size_t size = 1;
	while (size > 0)
	{
		size = 0;
		for (size_t i = 0; i < pieces.size(); ++i)
		{
			if (!pieces[i]->Visible())
				continue;

			if(pieces[i]->MoveDown(Piece::PieceSize, pieces.cbegin(), pieces.cend()))
				++size;
			else if(!pieces[i]->CompletelyVisible())
			{
				if (pieces[i]->MoveReplace(pieces.cbegin(), pieces.cend()))
					++size;
			}
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
		{
			// remove dead pieces
			RemoveDeadPieces(currentPieces);
			MovePiecesDown(currentPieces);

			std::shared_ptr<Piece> temp = GetNewPiece();
			if(temp->StateIsValid(currentPieces.cbegin(), currentPieces.cend()))
				currentPieces.push_back(temp);
			else
			{
				std::cout << "Game Over" << std::endl;
				window.close();
			}
		}
		//currentPieces.at(currentPieces.size() - 1)->MoveDown(Piece::PieceSize, currentPieces.cbegin(), currentPieces.cend() - 1);
    }
	
    return 0;
}
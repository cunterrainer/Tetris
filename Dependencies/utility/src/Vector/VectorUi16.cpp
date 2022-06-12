#include "VectorUi16.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::uint16_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	// Vector2ui16
	Vector2ui16::Vector2ui16(const std::uint16_t x, const std::uint16_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2ui16::Vector2ui16(const Vector2ui16& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui16& Vector2ui16::operator=(const Vector2ui16& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2ui16::Vector2ui16(Vector2ui16&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui16& Vector2ui16::operator=(Vector2ui16&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2ui16& Vector2ui16::operator=(const std::uint16_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2ui16 Vector2ui16::operator+(const Vector2ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x + v.x), static_cast<std::uint16_t>(y + v.y) };
	}

	Vector2ui16 Vector2ui16::operator-(const Vector2ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x - v.x), static_cast<std::uint16_t>(y - v.y) };
	}

	Vector2ui16 Vector2ui16::operator*(const Vector2ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x * v.x), static_cast<std::uint16_t>(y * v.y) };
	}

	Vector2ui16 Vector2ui16::operator/(const Vector2ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x / v.x), static_cast<std::uint16_t>(y / v.y) };
	}


	Vector2ui16 Vector2ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x + number), static_cast<std::uint16_t>(y + number) };
	}

	Vector2ui16 Vector2ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x - number), static_cast<std::uint16_t>(y - number) };
	}

	Vector2ui16 Vector2ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x * number), static_cast<std::uint16_t>(y * number) };
	}

	Vector2ui16 Vector2ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x / number), static_cast<std::uint16_t>(y / number) };
	}


	// increment / decrement
	Vector2ui16& Vector2ui16::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2ui16& Vector2ui16::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2ui16 Vector2ui16::operator++ (int) noexcept {
		Vector2ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector2ui16 Vector2ui16::operator-- (int) noexcept {
		Vector2ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2ui16& Vector2ui16::operator+= (const Vector2ui16& right) noexcept {
		static_cast<std::uint16_t>(x += right.x); static_cast<std::uint16_t>(y += right.y);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator-= (const Vector2ui16& right) noexcept {
		static_cast<std::uint16_t>(x -= right.x); static_cast<std::uint16_t>(y -= right.y);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator*= (const Vector2ui16& right) noexcept {
		static_cast<std::uint16_t>(x *= right.x); static_cast<std::uint16_t>(y *= right.y);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator/= (const Vector2ui16& right) noexcept {
		static_cast<std::uint16_t>(x /= right.x); static_cast<std::uint16_t>(y /= right.y);
		return *this;
	}


	Vector2ui16& Vector2ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x += number); static_cast<std::uint16_t>(y += number);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x -= number); static_cast<std::uint16_t>(y -= number);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x *= number); static_cast<std::uint16_t>(y *= number);
		return *this;
	}

	Vector2ui16& Vector2ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x /= number); static_cast<std::uint16_t>(y /= number);
		return *this;
	}


	// less than / greater than
	bool Vector2ui16::operator< (const Vector2ui16& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2ui16::operator<= (const Vector2ui16& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2ui16::operator>  (const Vector2ui16& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2ui16::operator>= (const Vector2ui16& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2ui16::operator<  (const std::uint16_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2ui16::operator<= (const std::uint16_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2ui16::operator>  (const std::uint16_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2ui16::operator>= (const std::uint16_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2ui16::operator==(const Vector2ui16& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2ui16::operator!=(const Vector2ui16& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2ui16::operator==(const std::uint16_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2ui16::operator!=(const std::uint16_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2ui16::size() const noexcept { return 2; }
	void Vector2ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector2ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector2ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3ui16
	Vector3ui16::Vector3ui16(const std::uint16_t x, const std::uint16_t y, const std::uint16_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3ui16::Vector3ui16(const Vector3ui16& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui16& Vector3ui16::operator=(const Vector3ui16& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3ui16::Vector3ui16(Vector3ui16&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui16& Vector3ui16::operator=(Vector3ui16&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3ui16& Vector3ui16::operator=(const std::uint16_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3ui16 Vector3ui16::operator+(const Vector3ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x + v.x), static_cast<std::uint16_t>(y + v.y), static_cast<std::uint16_t>(z + v.z) };
	}

	Vector3ui16 Vector3ui16::operator-(const Vector3ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x - v.x), static_cast<std::uint16_t>(y - v.y), static_cast<std::uint16_t>(z - v.z) };
	}

	Vector3ui16 Vector3ui16::operator*(const Vector3ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x * v.x), static_cast<std::uint16_t>(y * v.y), static_cast<std::uint16_t>(z * v.z) };
	}

	Vector3ui16 Vector3ui16::operator/(const Vector3ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(x / v.x), static_cast<std::uint16_t>(y / v.y), static_cast<std::uint16_t>(z / v.z) };
	}

 
	Vector3ui16 Vector3ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x + number), static_cast<std::uint16_t>(y + number), static_cast<std::uint16_t>(z + number) };
	}

	Vector3ui16 Vector3ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x - number), static_cast<std::uint16_t>(y - number), static_cast<std::uint16_t>(z - number) };
	}

	Vector3ui16 Vector3ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x * number), static_cast<std::uint16_t>(y * number), static_cast<std::uint16_t>(z * number) };
	}

	Vector3ui16 Vector3ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(x / number), static_cast<std::uint16_t>(y / number), static_cast<std::uint16_t>(z / number) };
	}


	// increment / decrement
	Vector3ui16& Vector3ui16::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3ui16& Vector3ui16::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3ui16 Vector3ui16::operator++ (int) noexcept {
		Vector3ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector3ui16 Vector3ui16::operator-- (int) noexcept {
		Vector3ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3ui16& Vector3ui16::operator+= (const Vector3ui16& right) noexcept {
		static_cast<std::uint16_t>(x += right.x); static_cast<std::uint16_t>(y += right.y); static_cast<std::uint16_t>(z += right.z);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator-= (const Vector3ui16& right) noexcept {
		static_cast<std::uint16_t>(x -= right.x); static_cast<std::uint16_t>(y -= right.y); static_cast<std::uint16_t>(z -= right.z);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator*= (const Vector3ui16& right) noexcept {
		static_cast<std::uint16_t>(x *= right.x); static_cast<std::uint16_t>(y *= right.y); static_cast<std::uint16_t>(z *= right.z);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator/= (const Vector3ui16& right) noexcept {
		static_cast<std::uint16_t>(x /= right.x); static_cast<std::uint16_t>(y /= right.y); static_cast<std::uint16_t>(z /= right.z);
		return *this;
	}


	Vector3ui16& Vector3ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x += number); static_cast<std::uint16_t>(y += number); static_cast<std::uint16_t>(z += number);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x -= number); static_cast<std::uint16_t>(y -= number); static_cast<std::uint16_t>(z -= number);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x *= number); static_cast<std::uint16_t>(y *= number); static_cast<std::uint16_t>(z *= number);
		return *this;
	}

	Vector3ui16& Vector3ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(x /= number); static_cast<std::uint16_t>(y /= number); static_cast<std::uint16_t>(z /= number);
		return *this;
	}


	// less than / greater than
	bool Vector3ui16::operator< (const Vector3ui16& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3ui16::operator<= (const Vector3ui16& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3ui16::operator>  (const Vector3ui16& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3ui16::operator>= (const Vector3ui16& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3ui16::operator<  (const std::uint16_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3ui16::operator<= (const std::uint16_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3ui16::operator>  (const std::uint16_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3ui16::operator>= (const std::uint16_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3ui16::operator==(const Vector3ui16& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3ui16::operator!=(const Vector3ui16& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3ui16::operator==(const std::uint16_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3ui16::operator!=(const std::uint16_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3ui16::size() const noexcept { return 3; }
	void Vector3ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector3ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector3ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4ui16
	Vector4ui16::Vector4ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4ui16::Vector4ui16(const Vector4ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui16& Vector4ui16::operator=(const Vector4ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4ui16::Vector4ui16(Vector4ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui16& Vector4ui16::operator=(Vector4ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4ui16& Vector4ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4ui16 Vector4ui16::operator+(const Vector4ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d) };
	}

	Vector4ui16 Vector4ui16::operator-(const Vector4ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d) };
	}

	Vector4ui16 Vector4ui16::operator*(const Vector4ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d) };
	}

	Vector4ui16 Vector4ui16::operator/(const Vector4ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d) };
	}


	Vector4ui16 Vector4ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number) };
	}

	Vector4ui16 Vector4ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number) };
	}

	Vector4ui16 Vector4ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number) };
	}

	Vector4ui16 Vector4ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number) };
	}


	// increment / decrement
	Vector4ui16& Vector4ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4ui16& Vector4ui16::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4ui16 Vector4ui16::operator++ (int) noexcept {
		Vector4ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector4ui16 Vector4ui16::operator-- (int) noexcept {
		Vector4ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4ui16& Vector4ui16::operator+= (const Vector4ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator-= (const Vector4ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator*= (const Vector4ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator/= (const Vector4ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d);
		return *this;
	}


	Vector4ui16& Vector4ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number);
		return *this;
	}

	Vector4ui16& Vector4ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number);
		return *this;
	}


	// less than / greater than
	bool Vector4ui16::operator< (const Vector4ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4ui16::operator<= (const Vector4ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4ui16::operator>  (const Vector4ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4ui16::operator>= (const Vector4ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4ui16::operator==(const Vector4ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4ui16::operator!=(const Vector4ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4ui16::size() const noexcept { return 4; }
	void Vector4ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector4ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector4ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5ui16
	Vector5ui16::Vector5ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5ui16::Vector5ui16(const Vector5ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui16& Vector5ui16::operator=(const Vector5ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5ui16::Vector5ui16(Vector5ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui16& Vector5ui16::operator=(Vector5ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5ui16& Vector5ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5ui16 Vector5ui16::operator+(const Vector5ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e) };
	}

	Vector5ui16 Vector5ui16::operator-(const Vector5ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e) };
	}

	Vector5ui16 Vector5ui16::operator*(const Vector5ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e) };
	}

	Vector5ui16 Vector5ui16::operator/(const Vector5ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e) };
	}


	Vector5ui16 Vector5ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number) };
	}

	Vector5ui16 Vector5ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number) };
	}

	Vector5ui16 Vector5ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number) };
	}

	Vector5ui16 Vector5ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number) };
	}


	// increment / decrement
	Vector5ui16& Vector5ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5ui16& Vector5ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5ui16 Vector5ui16::operator++ (int) noexcept {
		Vector5ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector5ui16 Vector5ui16::operator-- (int) noexcept {
		Vector5ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5ui16& Vector5ui16::operator+= (const Vector5ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator-= (const Vector5ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator*= (const Vector5ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator/= (const Vector5ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e);
		return *this;
	}


	Vector5ui16& Vector5ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number);
		return *this;
	}

	Vector5ui16& Vector5ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number);
		return *this;
	}


	// less than / greater than
	bool Vector5ui16::operator< (const Vector5ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5ui16::operator<= (const Vector5ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5ui16::operator>  (const Vector5ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5ui16::operator>= (const Vector5ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5ui16::operator==(const Vector5ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5ui16::operator!=(const Vector5ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5ui16::size() const noexcept { return 5; }
	void Vector5ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector5ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector5ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6ui16
	Vector6ui16::Vector6ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e, const std::uint16_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6ui16::Vector6ui16(const Vector6ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui16& Vector6ui16::operator=(const Vector6ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6ui16::Vector6ui16(Vector6ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui16& Vector6ui16::operator=(Vector6ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6ui16& Vector6ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6ui16 Vector6ui16::operator+(const Vector6ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f) };
	}

	Vector6ui16 Vector6ui16::operator-(const Vector6ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f) };
	}

	Vector6ui16 Vector6ui16::operator*(const Vector6ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f) };
	}

	Vector6ui16 Vector6ui16::operator/(const Vector6ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f) };
	}


	Vector6ui16 Vector6ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number) };
	}

	Vector6ui16 Vector6ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number) };
	}

	Vector6ui16 Vector6ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number) };
	}

	Vector6ui16 Vector6ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number) };
	}


	// increment / decrement
	Vector6ui16& Vector6ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6ui16& Vector6ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6ui16 Vector6ui16::operator++ (int) noexcept {
		Vector6ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector6ui16 Vector6ui16::operator-- (int) noexcept {
		Vector6ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6ui16& Vector6ui16::operator+= (const Vector6ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator-= (const Vector6ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator*= (const Vector6ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator/= (const Vector6ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f);
		return *this;
	}


	Vector6ui16& Vector6ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number);
		return *this;
	}

	Vector6ui16& Vector6ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number);
		return *this;
	}


	// less than / greater than
	bool Vector6ui16::operator< (const Vector6ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6ui16::operator<= (const Vector6ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6ui16::operator>  (const Vector6ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6ui16::operator>= (const Vector6ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6ui16::operator==(const Vector6ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6ui16::operator!=(const Vector6ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6ui16::size() const noexcept { return 6; }
	void Vector6ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector6ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector6ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7ui16
	Vector7ui16::Vector7ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e, const std::uint16_t f, const std::uint16_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7ui16::Vector7ui16(const Vector7ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui16& Vector7ui16::operator=(const Vector7ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7ui16::Vector7ui16(Vector7ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui16& Vector7ui16::operator=(Vector7ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7ui16& Vector7ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7ui16 Vector7ui16::operator+(const Vector7ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g) };
	}

	Vector7ui16 Vector7ui16::operator-(const Vector7ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g) };
	}

	Vector7ui16 Vector7ui16::operator*(const Vector7ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g) };
	}

	Vector7ui16 Vector7ui16::operator/(const Vector7ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g) };
	}


	Vector7ui16 Vector7ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number) };
	}

	Vector7ui16 Vector7ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number) };
	}

	Vector7ui16 Vector7ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number) };
	}

	Vector7ui16 Vector7ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number) };
	}


	// increment / decrement
	Vector7ui16& Vector7ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7ui16& Vector7ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7ui16 Vector7ui16::operator++ (int) noexcept {
		Vector7ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector7ui16 Vector7ui16::operator-- (int) noexcept {
		Vector7ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7ui16& Vector7ui16::operator+= (const Vector7ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator-= (const Vector7ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator*= (const Vector7ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator/= (const Vector7ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g);
		return *this;
	}


	Vector7ui16& Vector7ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number);
		return *this;
	}

	Vector7ui16& Vector7ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number);
		return *this;
	}


	// less than / greater than
	bool Vector7ui16::operator< (const Vector7ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7ui16::operator<= (const Vector7ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7ui16::operator>  (const Vector7ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7ui16::operator>= (const Vector7ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7ui16::operator==(const Vector7ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7ui16::operator!=(const Vector7ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7ui16::size() const noexcept { return 7; }
	void Vector7ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector7ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector7ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8ui16
	Vector8ui16::Vector8ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8ui16::Vector8ui16(const Vector8ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui16& Vector8ui16::operator=(const Vector8ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8ui16::Vector8ui16(Vector8ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui16& Vector8ui16::operator=(Vector8ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8ui16& Vector8ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8ui16 Vector8ui16::operator+(const Vector8ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h) };
	}

	Vector8ui16 Vector8ui16::operator-(const Vector8ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h) };
	}

	Vector8ui16 Vector8ui16::operator*(const Vector8ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h) };
	}

	Vector8ui16 Vector8ui16::operator/(const Vector8ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h) };
	}


	Vector8ui16 Vector8ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number) };
	}

	Vector8ui16 Vector8ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number) };
	}

	Vector8ui16 Vector8ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number) };
	}

	Vector8ui16 Vector8ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number) };
	}


	// increment / decrement
	Vector8ui16& Vector8ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8ui16& Vector8ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8ui16 Vector8ui16::operator++ (int) noexcept {
		Vector8ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector8ui16 Vector8ui16::operator-- (int) noexcept {
		Vector8ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8ui16& Vector8ui16::operator+= (const Vector8ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator-= (const Vector8ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator*= (const Vector8ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator/= (const Vector8ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h);
		return *this;
	}


	Vector8ui16& Vector8ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number);
		return *this;
	}

	Vector8ui16& Vector8ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number);
		return *this;
	}


	// less than / greater than
	bool Vector8ui16::operator< (const Vector8ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8ui16::operator<= (const Vector8ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8ui16::operator>  (const Vector8ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8ui16::operator>= (const Vector8ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8ui16::operator==(const Vector8ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8ui16::operator!=(const Vector8ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8ui16::size() const noexcept { return 8; }
	void Vector8ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector8ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector8ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9ui16
	Vector9ui16::Vector9ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
		const std::uint16_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9ui16::Vector9ui16(const Vector9ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui16& Vector9ui16::operator=(const Vector9ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9ui16::Vector9ui16(Vector9ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui16& Vector9ui16::operator=(Vector9ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9ui16& Vector9ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9ui16 Vector9ui16::operator+(const Vector9ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h), static_cast<std::uint16_t>(i + v.i) };
	}

	Vector9ui16 Vector9ui16::operator-(const Vector9ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h), static_cast<std::uint16_t>(i - v.i) };
	}

	Vector9ui16 Vector9ui16::operator*(const Vector9ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h), static_cast<std::uint16_t>(i * v.i) };
	}

	Vector9ui16 Vector9ui16::operator/(const Vector9ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h), static_cast<std::uint16_t>(i / v.i) };
	}


	Vector9ui16 Vector9ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number), static_cast<std::uint16_t>(i + number) };
	}

	Vector9ui16 Vector9ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number), static_cast<std::uint16_t>(i - number) };
	}

	Vector9ui16 Vector9ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number), static_cast<std::uint16_t>(i * number) };
	}

	Vector9ui16 Vector9ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number), static_cast<std::uint16_t>(i / number) };
	}


	// increment / decrement
	Vector9ui16& Vector9ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9ui16& Vector9ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9ui16 Vector9ui16::operator++ (int) noexcept {
		Vector9ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector9ui16 Vector9ui16::operator-- (int) noexcept {
		Vector9ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9ui16& Vector9ui16::operator+= (const Vector9ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h); static_cast<std::uint16_t>(i += right.i);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator-= (const Vector9ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h); static_cast<std::uint16_t>(i -= right.i);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator*= (const Vector9ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h); static_cast<std::uint16_t>(i *= right.i);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator/= (const Vector9ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h); static_cast<std::uint16_t>(i /= right.i);
		return *this;
	}


	Vector9ui16& Vector9ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number); static_cast<std::uint16_t>(i += number);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number); static_cast<std::uint16_t>(i -= number);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number); static_cast<std::uint16_t>(i *= number);
		return *this;
	}

	Vector9ui16& Vector9ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number); static_cast<std::uint16_t>(i /= number);
		return *this;
	}


	// less than / greater than
	bool Vector9ui16::operator< (const Vector9ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9ui16::operator<= (const Vector9ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9ui16::operator>  (const Vector9ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9ui16::operator>= (const Vector9ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9ui16::operator==(const Vector9ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9ui16::operator!=(const Vector9ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9ui16::size() const noexcept { return 9; }
	void Vector9ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector9ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector9ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10ui16
	Vector10ui16::Vector10ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
		const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
		const std::uint16_t i, const std::uint16_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10ui16::Vector10ui16(const Vector10ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui16& Vector10ui16::operator=(const Vector10ui16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10ui16::Vector10ui16(Vector10ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui16& Vector10ui16::operator=(Vector10ui16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10ui16& Vector10ui16::operator=(const std::uint16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10ui16 Vector10ui16::operator+(const Vector10ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h), static_cast<std::uint16_t>(i + v.i), static_cast<std::uint16_t>(j + v.j) };
	}

	Vector10ui16 Vector10ui16::operator-(const Vector10ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h), static_cast<std::uint16_t>(i - v.i), static_cast<std::uint16_t>(j - v.j) };
	}

	Vector10ui16 Vector10ui16::operator*(const Vector10ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h), static_cast<std::uint16_t>(i * v.i), static_cast<std::uint16_t>(j * v.j) };
	}

	Vector10ui16 Vector10ui16::operator/(const Vector10ui16& v) const noexcept {
		return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h), static_cast<std::uint16_t>(i / v.i), static_cast<std::uint16_t>(j / v.j) };
	}


	Vector10ui16 Vector10ui16::operator+(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number), static_cast<std::uint16_t>(i + number), static_cast<std::uint16_t>(j + number) };
	}

	Vector10ui16 Vector10ui16::operator-(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number), static_cast<std::uint16_t>(i - number), static_cast<std::uint16_t>(j - number) };
	}

	Vector10ui16 Vector10ui16::operator*(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number), static_cast<std::uint16_t>(i * number), static_cast<std::uint16_t>(j * number) };
	}

	Vector10ui16 Vector10ui16::operator/(const std::uint16_t number) const noexcept {
		return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number), static_cast<std::uint16_t>(i / number), static_cast<std::uint16_t>(j / number) };
	}


	// increment / decrement
	Vector10ui16& Vector10ui16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10ui16& Vector10ui16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10ui16 Vector10ui16::operator++ (int) noexcept {
		Vector10ui16 temp = *this;
		++* this;
		return temp;
	}

	Vector10ui16 Vector10ui16::operator-- (int) noexcept {
		Vector10ui16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10ui16& Vector10ui16::operator+= (const Vector10ui16& right) noexcept {
		static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h); static_cast<std::uint16_t>(i += right.i); static_cast<std::uint16_t>(j += right.j);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator-= (const Vector10ui16& right) noexcept {
		static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h); static_cast<std::uint16_t>(i -= right.i); static_cast<std::uint16_t>(j -= right.j);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator*= (const Vector10ui16& right) noexcept {
		static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h); static_cast<std::uint16_t>(i *= right.i); static_cast<std::uint16_t>(j *= right.j);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator/= (const Vector10ui16& right) noexcept {
		static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h); static_cast<std::uint16_t>(i /= right.i); static_cast<std::uint16_t>(j /= right.j);
		return *this;
	}


	Vector10ui16& Vector10ui16::operator+= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number); static_cast<std::uint16_t>(i += number); static_cast<std::uint16_t>(j += number);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator-= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number); static_cast<std::uint16_t>(i -= number); static_cast<std::uint16_t>(j -= number);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator*= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number); static_cast<std::uint16_t>(i *= number); static_cast<std::uint16_t>(j *= number);
		return *this;
	}

	Vector10ui16& Vector10ui16::operator/= (const std::uint16_t number) noexcept {
		static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number); static_cast<std::uint16_t>(i /= number); static_cast<std::uint16_t>(j /= number);
		return *this;
	}


	// less than / greater than
	bool Vector10ui16::operator< (const Vector10ui16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10ui16::operator<= (const Vector10ui16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10ui16::operator>  (const Vector10ui16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10ui16::operator>= (const Vector10ui16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10ui16::operator<  (const std::uint16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10ui16::operator<= (const std::uint16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10ui16::operator>  (const std::uint16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10ui16::operator>= (const std::uint16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10ui16::operator==(const Vector10ui16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10ui16::operator!=(const Vector10ui16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10ui16::operator==(const std::uint16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10ui16::operator!=(const std::uint16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10ui16::size() const noexcept { return 10; }
	void Vector10ui16::reset(const std::uint16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint16_t& Vector10ui16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint16_t& Vector10ui16::at(const std::uint8_t index) noexcept
	{
		std::uint16_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
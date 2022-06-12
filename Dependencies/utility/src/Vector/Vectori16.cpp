#include "Vectori16.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::int16_t
		Bytes: 2
		Range: -32.768 to 32.767
	*/

	// Vector2i16
	Vector2i16::Vector2i16(const std::int16_t x, const std::int16_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2i16::Vector2i16(const Vector2i16& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i16& Vector2i16::operator=(const Vector2i16& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2i16::Vector2i16(Vector2i16&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i16& Vector2i16::operator=(Vector2i16&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2i16& Vector2i16::operator=(const std::int16_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2i16 Vector2i16::operator+(const Vector2i16& v) const noexcept {
		return { static_cast<std::int16_t>(x + v.x), static_cast<std::int16_t>(y + v.y) };
	}

	Vector2i16 Vector2i16::operator-(const Vector2i16& v) const noexcept {
		return { static_cast<std::int16_t>(x - v.x), static_cast<std::int16_t>(y - v.y) };
	}

	Vector2i16 Vector2i16::operator*(const Vector2i16& v) const noexcept {
		return { static_cast<std::int16_t>(x * v.x), static_cast<std::int16_t>(y * v.y) };
	}

	Vector2i16 Vector2i16::operator/(const Vector2i16& v) const noexcept {
		return { static_cast<std::int16_t>(x / v.x), static_cast<std::int16_t>(y / v.y) };
	}


	Vector2i16 Vector2i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x + number), static_cast<std::int16_t>(y + number) };
	}

	Vector2i16 Vector2i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x - number), static_cast<std::int16_t>(y - number) };
	}

	Vector2i16 Vector2i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x * number), static_cast<std::int16_t>(y * number) };
	}

	Vector2i16 Vector2i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x / number), static_cast<std::int16_t>(y / number) };
	}


	// increment / decrement
	Vector2i16& Vector2i16::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2i16& Vector2i16::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2i16 Vector2i16::operator++ (int) noexcept {
		Vector2i16 temp = *this;
		++* this;
		return temp;
	}

	Vector2i16 Vector2i16::operator-- (int) noexcept {
		Vector2i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2i16& Vector2i16::operator+= (const Vector2i16& right) noexcept {
		static_cast<std::int16_t>(x += right.x); static_cast<std::int16_t>(y += right.y);
		return *this;
	}

	Vector2i16& Vector2i16::operator-= (const Vector2i16& right) noexcept {
		static_cast<std::int16_t>(x -= right.x); static_cast<std::int16_t>(y -= right.y);
		return *this;
	}

	Vector2i16& Vector2i16::operator*= (const Vector2i16& right) noexcept {
		static_cast<std::int16_t>(x *= right.x); static_cast<std::int16_t>(y *= right.y);
		return *this;
	}

	Vector2i16& Vector2i16::operator/= (const Vector2i16& right) noexcept {
		static_cast<std::int16_t>(x /= right.x); static_cast<std::int16_t>(y /= right.y);
		return *this;
	}


	Vector2i16& Vector2i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x += number); static_cast<std::int16_t>(y += number);
		return *this;
	}

	Vector2i16& Vector2i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x -= number); static_cast<std::int16_t>(y -= number);
		return *this;
	}

	Vector2i16& Vector2i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x *= number); static_cast<std::int16_t>(y *= number);
		return *this;
	}

	Vector2i16& Vector2i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x /= number); static_cast<std::int16_t>(y /= number);
		return *this;
	}


	// less than / greater than
	bool Vector2i16::operator< (const Vector2i16& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2i16::operator<= (const Vector2i16& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2i16::operator>  (const Vector2i16& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2i16::operator>= (const Vector2i16& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2i16::operator<  (const std::int16_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2i16::operator<= (const std::int16_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2i16::operator>  (const std::int16_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2i16::operator>= (const std::int16_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2i16::operator==(const Vector2i16& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2i16::operator!=(const Vector2i16& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2i16::operator==(const std::int16_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2i16::operator!=(const std::int16_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2i16::size() const noexcept { return 2; }
	void Vector2i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector2i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector2i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3i16
	Vector3i16::Vector3i16(const std::int16_t x, const std::int16_t y, const std::int16_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3i16::Vector3i16(const Vector3i16& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i16& Vector3i16::operator=(const Vector3i16& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3i16::Vector3i16(Vector3i16&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i16& Vector3i16::operator=(Vector3i16&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3i16& Vector3i16::operator=(const std::int16_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3i16 Vector3i16::operator+(const Vector3i16& v) const noexcept {
		return { static_cast<std::int16_t>(x + v.x), static_cast<std::int16_t>(y + v.y), static_cast<std::int16_t>(z + v.z) };
	}

	Vector3i16 Vector3i16::operator-(const Vector3i16& v) const noexcept {
		return { static_cast<std::int16_t>(x - v.x), static_cast<std::int16_t>(y - v.y), static_cast<std::int16_t>(z - v.z) };
	}

	Vector3i16 Vector3i16::operator*(const Vector3i16& v) const noexcept {
		return { static_cast<std::int16_t>(x * v.x), static_cast<std::int16_t>(y * v.y), static_cast<std::int16_t>(z * v.z) };
	}

	Vector3i16 Vector3i16::operator/(const Vector3i16& v) const noexcept {
		return { static_cast<std::int16_t>(x / v.x), static_cast<std::int16_t>(y / v.y), static_cast<std::int16_t>(z / v.z) };
	}

 
	Vector3i16 Vector3i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x + number), static_cast<std::int16_t>(y + number), static_cast<std::int16_t>(z + number) };
	}

	Vector3i16 Vector3i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x - number), static_cast<std::int16_t>(y - number), static_cast<std::int16_t>(z - number) };
	}

	Vector3i16 Vector3i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x * number), static_cast<std::int16_t>(y * number), static_cast<std::int16_t>(z * number) };
	}

	Vector3i16 Vector3i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(x / number), static_cast<std::int16_t>(y / number), static_cast<std::int16_t>(z / number) };
	}


	// increment / decrement
	Vector3i16& Vector3i16::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3i16& Vector3i16::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3i16 Vector3i16::operator++ (int) noexcept {
		Vector3i16 temp = *this;
		++* this;
		return temp;
	}

	Vector3i16 Vector3i16::operator-- (int) noexcept {
		Vector3i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3i16& Vector3i16::operator+= (const Vector3i16& right) noexcept {
		static_cast<std::int16_t>(x += right.x); static_cast<std::int16_t>(y += right.y); static_cast<std::int16_t>(z += right.z);
		return *this;
	}

	Vector3i16& Vector3i16::operator-= (const Vector3i16& right) noexcept {
		static_cast<std::int16_t>(x -= right.x); static_cast<std::int16_t>(y -= right.y); static_cast<std::int16_t>(z -= right.z);
		return *this;
	}

	Vector3i16& Vector3i16::operator*= (const Vector3i16& right) noexcept {
		static_cast<std::int16_t>(x *= right.x); static_cast<std::int16_t>(y *= right.y); static_cast<std::int16_t>(z *= right.z);
		return *this;
	}

	Vector3i16& Vector3i16::operator/= (const Vector3i16& right) noexcept {
		static_cast<std::int16_t>(x /= right.x); static_cast<std::int16_t>(y /= right.y); static_cast<std::int16_t>(z /= right.z);
		return *this;
	}


	Vector3i16& Vector3i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x += number); static_cast<std::int16_t>(y += number); static_cast<std::int16_t>(z += number);
		return *this;
	}

	Vector3i16& Vector3i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x -= number); static_cast<std::int16_t>(y -= number); static_cast<std::int16_t>(z -= number);
		return *this;
	}

	Vector3i16& Vector3i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x *= number); static_cast<std::int16_t>(y *= number); static_cast<std::int16_t>(z *= number);
		return *this;
	}

	Vector3i16& Vector3i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(x /= number); static_cast<std::int16_t>(y /= number); static_cast<std::int16_t>(z /= number);
		return *this;
	}


	// less than / greater than
	bool Vector3i16::operator< (const Vector3i16& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3i16::operator<= (const Vector3i16& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3i16::operator>  (const Vector3i16& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3i16::operator>= (const Vector3i16& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3i16::operator<  (const std::int16_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3i16::operator<= (const std::int16_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3i16::operator>  (const std::int16_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3i16::operator>= (const std::int16_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3i16::operator==(const Vector3i16& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3i16::operator!=(const Vector3i16& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3i16::operator==(const std::int16_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3i16::operator!=(const std::int16_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3i16::size() const noexcept { return 3; }
	void Vector3i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector3i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector3i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4i16
	Vector4i16::Vector4i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4i16::Vector4i16(const Vector4i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i16& Vector4i16::operator=(const Vector4i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4i16::Vector4i16(Vector4i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i16& Vector4i16::operator=(Vector4i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4i16& Vector4i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4i16 Vector4i16::operator+(const Vector4i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d) };
	}

	Vector4i16 Vector4i16::operator-(const Vector4i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d) };
	}

	Vector4i16 Vector4i16::operator*(const Vector4i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d) };
	}

	Vector4i16 Vector4i16::operator/(const Vector4i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d) };
	}


	Vector4i16 Vector4i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number) };
	}

	Vector4i16 Vector4i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number) };
	}

	Vector4i16 Vector4i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number) };
	}

	Vector4i16 Vector4i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number) };
	}


	// increment / decrement
	Vector4i16& Vector4i16::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4i16& Vector4i16::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4i16 Vector4i16::operator++ (int) noexcept {
		Vector4i16 temp = *this;
		++* this;
		return temp;
	}

	Vector4i16 Vector4i16::operator-- (int) noexcept {
		Vector4i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4i16& Vector4i16::operator+= (const Vector4i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d);
		return *this;
	}

	Vector4i16& Vector4i16::operator-= (const Vector4i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d);
		return *this;
	}

	Vector4i16& Vector4i16::operator*= (const Vector4i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d);
		return *this;
	}

	Vector4i16& Vector4i16::operator/= (const Vector4i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d);
		return *this;
	}


	Vector4i16& Vector4i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number);
		return *this;
	}

	Vector4i16& Vector4i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number);
		return *this;
	}

	Vector4i16& Vector4i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number);
		return *this;
	}

	Vector4i16& Vector4i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number);
		return *this;
	}


	// less than / greater than
	bool Vector4i16::operator< (const Vector4i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4i16::operator<= (const Vector4i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4i16::operator>  (const Vector4i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4i16::operator>= (const Vector4i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4i16::operator==(const Vector4i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4i16::operator!=(const Vector4i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4i16::size() const noexcept { return 4; }
	void Vector4i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector4i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector4i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5i16
	Vector5i16::Vector5i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5i16::Vector5i16(const Vector5i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i16& Vector5i16::operator=(const Vector5i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5i16::Vector5i16(Vector5i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i16& Vector5i16::operator=(Vector5i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5i16& Vector5i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5i16 Vector5i16::operator+(const Vector5i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e) };
	}

	Vector5i16 Vector5i16::operator-(const Vector5i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e) };
	}

	Vector5i16 Vector5i16::operator*(const Vector5i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e) };
	}

	Vector5i16 Vector5i16::operator/(const Vector5i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e) };
	}


	Vector5i16 Vector5i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number) };
	}

	Vector5i16 Vector5i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number) };
	}

	Vector5i16 Vector5i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number) };
	}

	Vector5i16 Vector5i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number) };
	}


	// increment / decrement
	Vector5i16& Vector5i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5i16& Vector5i16::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5i16 Vector5i16::operator++ (int) noexcept {
		Vector5i16 temp = *this;
		++* this;
		return temp;
	}

	Vector5i16 Vector5i16::operator-- (int) noexcept {
		Vector5i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5i16& Vector5i16::operator+= (const Vector5i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e);
		return *this;
	}

	Vector5i16& Vector5i16::operator-= (const Vector5i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e);
		return *this;
	}

	Vector5i16& Vector5i16::operator*= (const Vector5i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e);
		return *this;
	}

	Vector5i16& Vector5i16::operator/= (const Vector5i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e);
		return *this;
	}


	Vector5i16& Vector5i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number);
		return *this;
	}

	Vector5i16& Vector5i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number);
		return *this;
	}

	Vector5i16& Vector5i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number);
		return *this;
	}

	Vector5i16& Vector5i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number);
		return *this;
	}


	// less than / greater than
	bool Vector5i16::operator< (const Vector5i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5i16::operator<= (const Vector5i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5i16::operator>  (const Vector5i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5i16::operator>= (const Vector5i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5i16::operator==(const Vector5i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5i16::operator!=(const Vector5i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5i16::size() const noexcept { return 5; }
	void Vector5i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector5i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector5i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6i16
	Vector6i16::Vector6i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e, const std::int16_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6i16::Vector6i16(const Vector6i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i16& Vector6i16::operator=(const Vector6i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6i16::Vector6i16(Vector6i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i16& Vector6i16::operator=(Vector6i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6i16& Vector6i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6i16 Vector6i16::operator+(const Vector6i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f) };
	}

	Vector6i16 Vector6i16::operator-(const Vector6i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f) };
	}

	Vector6i16 Vector6i16::operator*(const Vector6i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f) };
	}

	Vector6i16 Vector6i16::operator/(const Vector6i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f) };
	}


	Vector6i16 Vector6i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number) };
	}

	Vector6i16 Vector6i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number) };
	}

	Vector6i16 Vector6i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number) };
	}

	Vector6i16 Vector6i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number) };
	}


	// increment / decrement
	Vector6i16& Vector6i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6i16& Vector6i16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6i16 Vector6i16::operator++ (int) noexcept {
		Vector6i16 temp = *this;
		++* this;
		return temp;
	}

	Vector6i16 Vector6i16::operator-- (int) noexcept {
		Vector6i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6i16& Vector6i16::operator+= (const Vector6i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f);
		return *this;
	}

	Vector6i16& Vector6i16::operator-= (const Vector6i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f);
		return *this;
	}

	Vector6i16& Vector6i16::operator*= (const Vector6i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f);
		return *this;
	}

	Vector6i16& Vector6i16::operator/= (const Vector6i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f);
		return *this;
	}


	Vector6i16& Vector6i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number);
		return *this;
	}

	Vector6i16& Vector6i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number);
		return *this;
	}

	Vector6i16& Vector6i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number);
		return *this;
	}

	Vector6i16& Vector6i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number);
		return *this;
	}


	// less than / greater than
	bool Vector6i16::operator< (const Vector6i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6i16::operator<= (const Vector6i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6i16::operator>  (const Vector6i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6i16::operator>= (const Vector6i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6i16::operator==(const Vector6i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6i16::operator!=(const Vector6i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6i16::size() const noexcept { return 6; }
	void Vector6i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector6i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector6i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7i16
	Vector7i16::Vector7i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e, const std::int16_t f, const std::int16_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7i16::Vector7i16(const Vector7i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i16& Vector7i16::operator=(const Vector7i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7i16::Vector7i16(Vector7i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i16& Vector7i16::operator=(Vector7i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7i16& Vector7i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7i16 Vector7i16::operator+(const Vector7i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g) };
	}

	Vector7i16 Vector7i16::operator-(const Vector7i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g) };
	}

	Vector7i16 Vector7i16::operator*(const Vector7i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g) };
	}

	Vector7i16 Vector7i16::operator/(const Vector7i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g) };
	}


	Vector7i16 Vector7i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number) };
	}

	Vector7i16 Vector7i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number) };
	}

	Vector7i16 Vector7i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number) };
	}

	Vector7i16 Vector7i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number) };
	}


	// increment / decrement
	Vector7i16& Vector7i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7i16& Vector7i16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7i16 Vector7i16::operator++ (int) noexcept {
		Vector7i16 temp = *this;
		++* this;
		return temp;
	}

	Vector7i16 Vector7i16::operator-- (int) noexcept {
		Vector7i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7i16& Vector7i16::operator+= (const Vector7i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g);
		return *this;
	}

	Vector7i16& Vector7i16::operator-= (const Vector7i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g);
		return *this;
	}

	Vector7i16& Vector7i16::operator*= (const Vector7i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g);
		return *this;
	}

	Vector7i16& Vector7i16::operator/= (const Vector7i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g);
		return *this;
	}


	Vector7i16& Vector7i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number);
		return *this;
	}

	Vector7i16& Vector7i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number);
		return *this;
	}

	Vector7i16& Vector7i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number);
		return *this;
	}

	Vector7i16& Vector7i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number);
		return *this;
	}


	// less than / greater than
	bool Vector7i16::operator< (const Vector7i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7i16::operator<= (const Vector7i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7i16::operator>  (const Vector7i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7i16::operator>= (const Vector7i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7i16::operator==(const Vector7i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7i16::operator!=(const Vector7i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7i16::size() const noexcept { return 7; }
	void Vector7i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector7i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector7i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8i16
	Vector8i16::Vector8i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8i16::Vector8i16(const Vector8i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i16& Vector8i16::operator=(const Vector8i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8i16::Vector8i16(Vector8i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i16& Vector8i16::operator=(Vector8i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8i16& Vector8i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8i16 Vector8i16::operator+(const Vector8i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h) };
	}

	Vector8i16 Vector8i16::operator-(const Vector8i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h) };
	}

	Vector8i16 Vector8i16::operator*(const Vector8i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h) };
	}

	Vector8i16 Vector8i16::operator/(const Vector8i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h) };
	}


	Vector8i16 Vector8i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number) };
	}

	Vector8i16 Vector8i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number) };
	}

	Vector8i16 Vector8i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number) };
	}

	Vector8i16 Vector8i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number) };
	}


	// increment / decrement
	Vector8i16& Vector8i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8i16& Vector8i16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8i16 Vector8i16::operator++ (int) noexcept {
		Vector8i16 temp = *this;
		++* this;
		return temp;
	}

	Vector8i16 Vector8i16::operator-- (int) noexcept {
		Vector8i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8i16& Vector8i16::operator+= (const Vector8i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h);
		return *this;
	}

	Vector8i16& Vector8i16::operator-= (const Vector8i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h);
		return *this;
	}

	Vector8i16& Vector8i16::operator*= (const Vector8i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h);
		return *this;
	}

	Vector8i16& Vector8i16::operator/= (const Vector8i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h);
		return *this;
	}


	Vector8i16& Vector8i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number);
		return *this;
	}

	Vector8i16& Vector8i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number);
		return *this;
	}

	Vector8i16& Vector8i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number);
		return *this;
	}

	Vector8i16& Vector8i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number);
		return *this;
	}


	// less than / greater than
	bool Vector8i16::operator< (const Vector8i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8i16::operator<= (const Vector8i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8i16::operator>  (const Vector8i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8i16::operator>= (const Vector8i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8i16::operator==(const Vector8i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8i16::operator!=(const Vector8i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8i16::size() const noexcept { return 8; }
	void Vector8i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector8i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector8i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9i16
	Vector9i16::Vector9i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
		const std::int16_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9i16::Vector9i16(const Vector9i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i16& Vector9i16::operator=(const Vector9i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9i16::Vector9i16(Vector9i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i16& Vector9i16::operator=(Vector9i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9i16& Vector9i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9i16 Vector9i16::operator+(const Vector9i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h), static_cast<std::int16_t>(i + v.i) };
	}

	Vector9i16 Vector9i16::operator-(const Vector9i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h), static_cast<std::int16_t>(i - v.i) };
	}

	Vector9i16 Vector9i16::operator*(const Vector9i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h), static_cast<std::int16_t>(i * v.i) };
	}

	Vector9i16 Vector9i16::operator/(const Vector9i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h), static_cast<std::int16_t>(i / v.i) };
	}


	Vector9i16 Vector9i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number), static_cast<std::int16_t>(i + number) };
	}

	Vector9i16 Vector9i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number), static_cast<std::int16_t>(i - number) };
	}

	Vector9i16 Vector9i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number), static_cast<std::int16_t>(i * number) };
	}

	Vector9i16 Vector9i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number), static_cast<std::int16_t>(i / number) };
	}


	// increment / decrement
	Vector9i16& Vector9i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9i16& Vector9i16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9i16 Vector9i16::operator++ (int) noexcept {
		Vector9i16 temp = *this;
		++* this;
		return temp;
	}

	Vector9i16 Vector9i16::operator-- (int) noexcept {
		Vector9i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9i16& Vector9i16::operator+= (const Vector9i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h); static_cast<std::int16_t>(i += right.i);
		return *this;
	}

	Vector9i16& Vector9i16::operator-= (const Vector9i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h); static_cast<std::int16_t>(i -= right.i);
		return *this;
	}

	Vector9i16& Vector9i16::operator*= (const Vector9i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h); static_cast<std::int16_t>(i *= right.i);
		return *this;
	}

	Vector9i16& Vector9i16::operator/= (const Vector9i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h); static_cast<std::int16_t>(i /= right.i);
		return *this;
	}


	Vector9i16& Vector9i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number); static_cast<std::int16_t>(i += number);
		return *this;
	}

	Vector9i16& Vector9i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number); static_cast<std::int16_t>(i -= number);
		return *this;
	}

	Vector9i16& Vector9i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number); static_cast<std::int16_t>(i *= number);
		return *this;
	}

	Vector9i16& Vector9i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number); static_cast<std::int16_t>(i /= number);
		return *this;
	}


	// less than / greater than
	bool Vector9i16::operator< (const Vector9i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9i16::operator<= (const Vector9i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9i16::operator>  (const Vector9i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9i16::operator>= (const Vector9i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9i16::operator==(const Vector9i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9i16::operator!=(const Vector9i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9i16::size() const noexcept { return 9; }
	void Vector9i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector9i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector9i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10i16
	Vector10i16::Vector10i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
		const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
		const std::int16_t i, const std::int16_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10i16::Vector10i16(const Vector10i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i16& Vector10i16::operator=(const Vector10i16& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10i16::Vector10i16(Vector10i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i16& Vector10i16::operator=(Vector10i16&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10i16& Vector10i16::operator=(const std::int16_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10i16 Vector10i16::operator+(const Vector10i16& v) const noexcept {
		return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h), static_cast<std::int16_t>(i + v.i), static_cast<std::int16_t>(j + v.j) };
	}

	Vector10i16 Vector10i16::operator-(const Vector10i16& v) const noexcept {
		return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h), static_cast<std::int16_t>(i - v.i), static_cast<std::int16_t>(j - v.j) };
	}

	Vector10i16 Vector10i16::operator*(const Vector10i16& v) const noexcept {
		return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h), static_cast<std::int16_t>(i * v.i), static_cast<std::int16_t>(j * v.j) };
	}

	Vector10i16 Vector10i16::operator/(const Vector10i16& v) const noexcept {
		return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h), static_cast<std::int16_t>(i / v.i), static_cast<std::int16_t>(j / v.j) };
	}


	Vector10i16 Vector10i16::operator+(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number), static_cast<std::int16_t>(i + number), static_cast<std::int16_t>(j + number) };
	}

	Vector10i16 Vector10i16::operator-(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number), static_cast<std::int16_t>(i - number), static_cast<std::int16_t>(j - number) };
	}

	Vector10i16 Vector10i16::operator*(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number), static_cast<std::int16_t>(i * number), static_cast<std::int16_t>(j * number) };
	}

	Vector10i16 Vector10i16::operator/(const std::int16_t number) const noexcept {
		return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number), static_cast<std::int16_t>(i / number), static_cast<std::int16_t>(j / number) };
	}


	// increment / decrement
	Vector10i16& Vector10i16::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10i16& Vector10i16::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10i16 Vector10i16::operator++ (int) noexcept {
		Vector10i16 temp = *this;
		++* this;
		return temp;
	}

	Vector10i16 Vector10i16::operator-- (int) noexcept {
		Vector10i16 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10i16& Vector10i16::operator+= (const Vector10i16& right) noexcept {
		static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h); static_cast<std::int16_t>(i += right.i); static_cast<std::int16_t>(j += right.j);
		return *this;
	}

	Vector10i16& Vector10i16::operator-= (const Vector10i16& right) noexcept {
		static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h); static_cast<std::int16_t>(i -= right.i); static_cast<std::int16_t>(j -= right.j);
		return *this;
	}

	Vector10i16& Vector10i16::operator*= (const Vector10i16& right) noexcept {
		static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h); static_cast<std::int16_t>(i *= right.i); static_cast<std::int16_t>(j *= right.j);
		return *this;
	}

	Vector10i16& Vector10i16::operator/= (const Vector10i16& right) noexcept {
		static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h); static_cast<std::int16_t>(i /= right.i); static_cast<std::int16_t>(j /= right.j);
		return *this;
	}


	Vector10i16& Vector10i16::operator+= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number); static_cast<std::int16_t>(i += number); static_cast<std::int16_t>(j += number);
		return *this;
	}

	Vector10i16& Vector10i16::operator-= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number); static_cast<std::int16_t>(i -= number); static_cast<std::int16_t>(j -= number);
		return *this;
	}

	Vector10i16& Vector10i16::operator*= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number); static_cast<std::int16_t>(i *= number); static_cast<std::int16_t>(j *= number);
		return *this;
	}

	Vector10i16& Vector10i16::operator/= (const std::int16_t number) noexcept {
		static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number); static_cast<std::int16_t>(i /= number); static_cast<std::int16_t>(j /= number);
		return *this;
	}


	// less than / greater than
	bool Vector10i16::operator< (const Vector10i16& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10i16::operator<= (const Vector10i16& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10i16::operator>  (const Vector10i16& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10i16::operator>= (const Vector10i16& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10i16::operator<  (const std::int16_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10i16::operator<= (const std::int16_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10i16::operator>  (const std::int16_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10i16::operator>= (const std::int16_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10i16::operator==(const Vector10i16& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10i16::operator!=(const Vector10i16& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10i16::operator==(const std::int16_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10i16::operator!=(const std::int16_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10i16::size() const noexcept { return 10; }
	void Vector10i16::reset(const std::int16_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int16_t& Vector10i16::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int16_t& Vector10i16::at(const std::uint8_t index) noexcept
	{
		std::int16_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
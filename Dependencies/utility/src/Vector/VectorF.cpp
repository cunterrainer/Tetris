#include "VectorF.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::float_t
		Bytes: 4
		Range: 3.4E +/- 38  precision: (7 digits)
	*/

	// Vector2f
	Vector2f::Vector2f(const std::float_t x, const std::float_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2f::Vector2f(const Vector2f& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2f& Vector2f::operator=(const Vector2f& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2f::Vector2f(Vector2f&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2f& Vector2f::operator=(Vector2f&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2f& Vector2f::operator=(const std::float_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2f Vector2f::operator+(const Vector2f& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2f Vector2f::operator-(const Vector2f& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2f Vector2f::operator*(const Vector2f& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2f Vector2f::operator/(const Vector2f& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2f Vector2f::operator+(const std::float_t number) const noexcept {
		return { x + number, y + number };
	}

	Vector2f Vector2f::operator-(const std::float_t number) const noexcept {
		return { x - number, y - number };
	}

	Vector2f Vector2f::operator*(const std::float_t number) const noexcept {
		return { x * number, y * number };
	}

	Vector2f Vector2f::operator/(const std::float_t number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2f& Vector2f::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2f& Vector2f::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2f Vector2f::operator++ (int) noexcept {
		Vector2f temp = *this;
		++* this;
		return temp;
	}

	Vector2f Vector2f::operator-- (int) noexcept {
		Vector2f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2f& Vector2f::operator+= (const Vector2f& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2f& Vector2f::operator-= (const Vector2f& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2f& Vector2f::operator*= (const Vector2f& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2f& Vector2f::operator/= (const Vector2f& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2f& Vector2f::operator+= (const std::float_t number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2f& Vector2f::operator-= (const std::float_t number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2f& Vector2f::operator*= (const std::float_t number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2f& Vector2f::operator/= (const std::float_t number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2f::operator< (const Vector2f& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2f::operator<= (const Vector2f& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2f::operator>  (const Vector2f& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2f::operator>= (const Vector2f& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2f::operator<  (const std::float_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2f::operator<= (const std::float_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2f::operator>  (const std::float_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2f::operator>= (const std::float_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2f::operator==(const Vector2f& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2f::operator!=(const Vector2f& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2f::operator==(const std::float_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2f::operator!=(const std::float_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2f::size() const noexcept { return 2; }
	void Vector2f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector2f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector2f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3f
	Vector3f::Vector3f(const std::float_t x, const std::float_t y, const std::float_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3f::Vector3f(const Vector3f& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3f& Vector3f::operator=(const Vector3f& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3f::Vector3f(Vector3f&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3f& Vector3f::operator=(Vector3f&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3f& Vector3f::operator=(const std::float_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3f Vector3f::operator+(const Vector3f& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3f Vector3f::operator-(const Vector3f& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3f Vector3f::operator*(const Vector3f& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3f Vector3f::operator/(const Vector3f& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3f Vector3f::operator+(const std::float_t number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3f Vector3f::operator-(const std::float_t number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3f Vector3f::operator*(const std::float_t number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3f Vector3f::operator/(const std::float_t number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3f& Vector3f::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3f& Vector3f::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3f Vector3f::operator++ (int) noexcept {
		Vector3f temp = *this;
		++* this;
		return temp;
	}

	Vector3f Vector3f::operator-- (int) noexcept {
		Vector3f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3f& Vector3f::operator+= (const Vector3f& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3f& Vector3f::operator-= (const Vector3f& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3f& Vector3f::operator*= (const Vector3f& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3f& Vector3f::operator/= (const Vector3f& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3f& Vector3f::operator+= (const std::float_t number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3f& Vector3f::operator-= (const std::float_t number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3f& Vector3f::operator*= (const std::float_t number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3f& Vector3f::operator/= (const std::float_t number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3f::operator< (const Vector3f& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3f::operator<= (const Vector3f& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3f::operator>  (const Vector3f& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3f::operator>= (const Vector3f& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3f::operator<  (const std::float_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3f::operator<= (const std::float_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3f::operator>  (const std::float_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3f::operator>= (const std::float_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3f::operator==(const Vector3f& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3f::operator!=(const Vector3f& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3f::operator==(const std::float_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3f::operator!=(const std::float_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3f::size() const noexcept { return 3; }
	void Vector3f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector3f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector3f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4f
	Vector4f::Vector4f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4f::Vector4f(const Vector4f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4f& Vector4f::operator=(const Vector4f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4f::Vector4f(Vector4f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4f& Vector4f::operator=(Vector4f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4f& Vector4f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4f Vector4f::operator+(const Vector4f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4f Vector4f::operator-(const Vector4f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4f Vector4f::operator*(const Vector4f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4f Vector4f::operator/(const Vector4f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4f Vector4f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4f Vector4f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4f Vector4f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4f Vector4f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4f& Vector4f::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4f& Vector4f::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4f Vector4f::operator++ (int) noexcept {
		Vector4f temp = *this;
		++* this;
		return temp;
	}

	Vector4f Vector4f::operator-- (int) noexcept {
		Vector4f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4f& Vector4f::operator+= (const Vector4f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4f& Vector4f::operator-= (const Vector4f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4f& Vector4f::operator*= (const Vector4f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4f& Vector4f::operator/= (const Vector4f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4f& Vector4f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4f& Vector4f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4f& Vector4f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4f& Vector4f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4f::operator< (const Vector4f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4f::operator<= (const Vector4f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4f::operator>  (const Vector4f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4f::operator>= (const Vector4f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4f::operator==(const Vector4f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4f::operator!=(const Vector4f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4f::size() const noexcept { return 4; }
	void Vector4f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector4f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector4f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5f
	Vector5f::Vector5f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5f::Vector5f(const Vector5f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5f& Vector5f::operator=(const Vector5f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5f::Vector5f(Vector5f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5f& Vector5f::operator=(Vector5f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5f& Vector5f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5f Vector5f::operator+(const Vector5f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5f Vector5f::operator-(const Vector5f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5f Vector5f::operator*(const Vector5f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5f Vector5f::operator/(const Vector5f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5f Vector5f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5f Vector5f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5f Vector5f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5f Vector5f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5f& Vector5f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5f& Vector5f::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5f Vector5f::operator++ (int) noexcept {
		Vector5f temp = *this;
		++* this;
		return temp;
	}

	Vector5f Vector5f::operator-- (int) noexcept {
		Vector5f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5f& Vector5f::operator+= (const Vector5f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5f& Vector5f::operator-= (const Vector5f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5f& Vector5f::operator*= (const Vector5f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5f& Vector5f::operator/= (const Vector5f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5f& Vector5f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5f& Vector5f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5f& Vector5f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5f& Vector5f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5f::operator< (const Vector5f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5f::operator<= (const Vector5f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5f::operator>  (const Vector5f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5f::operator>= (const Vector5f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5f::operator==(const Vector5f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5f::operator!=(const Vector5f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5f::size() const noexcept { return 5; }
	void Vector5f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector5f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector5f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6f
	Vector6f::Vector6f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e, const std::float_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6f::Vector6f(const Vector6f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6f& Vector6f::operator=(const Vector6f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6f::Vector6f(Vector6f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6f& Vector6f::operator=(Vector6f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6f& Vector6f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6f Vector6f::operator+(const Vector6f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6f Vector6f::operator-(const Vector6f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6f Vector6f::operator*(const Vector6f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6f Vector6f::operator/(const Vector6f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6f Vector6f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6f Vector6f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6f Vector6f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6f Vector6f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6f& Vector6f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6f& Vector6f::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6f Vector6f::operator++ (int) noexcept {
		Vector6f temp = *this;
		++* this;
		return temp;
	}

	Vector6f Vector6f::operator-- (int) noexcept {
		Vector6f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6f& Vector6f::operator+= (const Vector6f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6f& Vector6f::operator-= (const Vector6f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6f& Vector6f::operator*= (const Vector6f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6f& Vector6f::operator/= (const Vector6f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6f& Vector6f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6f& Vector6f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6f& Vector6f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6f& Vector6f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6f::operator< (const Vector6f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6f::operator<= (const Vector6f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6f::operator>  (const Vector6f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6f::operator>= (const Vector6f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6f::operator==(const Vector6f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6f::operator!=(const Vector6f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6f::size() const noexcept { return 6; }
	void Vector6f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector6f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector6f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7f
	Vector7f::Vector7f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e, const std::float_t f, const std::float_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7f::Vector7f(const Vector7f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7f& Vector7f::operator=(const Vector7f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7f::Vector7f(Vector7f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7f& Vector7f::operator=(Vector7f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7f& Vector7f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7f Vector7f::operator+(const Vector7f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7f Vector7f::operator-(const Vector7f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7f Vector7f::operator*(const Vector7f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7f Vector7f::operator/(const Vector7f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7f Vector7f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7f Vector7f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7f Vector7f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7f Vector7f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7f& Vector7f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7f& Vector7f::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7f Vector7f::operator++ (int) noexcept {
		Vector7f temp = *this;
		++* this;
		return temp;
	}

	Vector7f Vector7f::operator-- (int) noexcept {
		Vector7f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7f& Vector7f::operator+= (const Vector7f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7f& Vector7f::operator-= (const Vector7f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7f& Vector7f::operator*= (const Vector7f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7f& Vector7f::operator/= (const Vector7f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7f& Vector7f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7f& Vector7f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7f& Vector7f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7f& Vector7f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7f::operator< (const Vector7f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7f::operator<= (const Vector7f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7f::operator>  (const Vector7f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7f::operator>= (const Vector7f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7f::operator==(const Vector7f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7f::operator!=(const Vector7f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7f::size() const noexcept { return 7; }
	void Vector7f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector7f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector7f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8f
	Vector8f::Vector8f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8f::Vector8f(const Vector8f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8f& Vector8f::operator=(const Vector8f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8f::Vector8f(Vector8f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8f& Vector8f::operator=(Vector8f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8f& Vector8f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8f Vector8f::operator+(const Vector8f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8f Vector8f::operator-(const Vector8f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8f Vector8f::operator*(const Vector8f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8f Vector8f::operator/(const Vector8f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8f Vector8f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8f Vector8f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8f Vector8f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8f Vector8f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8f& Vector8f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8f& Vector8f::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8f Vector8f::operator++ (int) noexcept {
		Vector8f temp = *this;
		++* this;
		return temp;
	}

	Vector8f Vector8f::operator-- (int) noexcept {
		Vector8f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8f& Vector8f::operator+= (const Vector8f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8f& Vector8f::operator-= (const Vector8f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8f& Vector8f::operator*= (const Vector8f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8f& Vector8f::operator/= (const Vector8f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8f& Vector8f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8f& Vector8f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8f& Vector8f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8f& Vector8f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8f::operator< (const Vector8f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8f::operator<= (const Vector8f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8f::operator>  (const Vector8f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8f::operator>= (const Vector8f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8f::operator==(const Vector8f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8f::operator!=(const Vector8f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8f::size() const noexcept { return 8; }
	void Vector8f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector8f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector8f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9f
	Vector9f::Vector9f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
		const std::float_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9f::Vector9f(const Vector9f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9f& Vector9f::operator=(const Vector9f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9f::Vector9f(Vector9f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9f& Vector9f::operator=(Vector9f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9f& Vector9f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9f Vector9f::operator+(const Vector9f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9f Vector9f::operator-(const Vector9f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9f Vector9f::operator*(const Vector9f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9f Vector9f::operator/(const Vector9f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9f Vector9f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9f Vector9f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9f Vector9f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9f Vector9f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9f& Vector9f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9f& Vector9f::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9f Vector9f::operator++ (int) noexcept {
		Vector9f temp = *this;
		++* this;
		return temp;
	}

	Vector9f Vector9f::operator-- (int) noexcept {
		Vector9f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9f& Vector9f::operator+= (const Vector9f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9f& Vector9f::operator-= (const Vector9f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9f& Vector9f::operator*= (const Vector9f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9f& Vector9f::operator/= (const Vector9f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9f& Vector9f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9f& Vector9f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9f& Vector9f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9f& Vector9f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9f::operator< (const Vector9f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9f::operator<= (const Vector9f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9f::operator>  (const Vector9f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9f::operator>= (const Vector9f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9f::operator==(const Vector9f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9f::operator!=(const Vector9f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9f::size() const noexcept { return 9; }
	void Vector9f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector9f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector9f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10f
	Vector10f::Vector10f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
		const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
		const std::float_t i, const std::float_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10f::Vector10f(const Vector10f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10f& Vector10f::operator=(const Vector10f& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10f::Vector10f(Vector10f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10f& Vector10f::operator=(Vector10f&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10f& Vector10f::operator=(const std::float_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10f Vector10f::operator+(const Vector10f& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10f Vector10f::operator-(const Vector10f& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10f Vector10f::operator*(const Vector10f& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10f Vector10f::operator/(const Vector10f& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10f Vector10f::operator+(const std::float_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10f Vector10f::operator-(const std::float_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10f Vector10f::operator*(const std::float_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10f Vector10f::operator/(const std::float_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10f& Vector10f::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10f& Vector10f::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10f Vector10f::operator++ (int) noexcept {
		Vector10f temp = *this;
		++* this;
		return temp;
	}

	Vector10f Vector10f::operator-- (int) noexcept {
		Vector10f temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10f& Vector10f::operator+= (const Vector10f& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10f& Vector10f::operator-= (const Vector10f& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10f& Vector10f::operator*= (const Vector10f& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10f& Vector10f::operator/= (const Vector10f& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10f& Vector10f::operator+= (const std::float_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10f& Vector10f::operator-= (const std::float_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10f& Vector10f::operator*= (const std::float_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10f& Vector10f::operator/= (const std::float_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10f::operator< (const Vector10f& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10f::operator<= (const Vector10f& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10f::operator>  (const Vector10f& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10f::operator>= (const Vector10f& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10f::operator<  (const std::float_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10f::operator<= (const std::float_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10f::operator>  (const std::float_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10f::operator>= (const std::float_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10f::operator==(const Vector10f& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10f::operator!=(const Vector10f& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10f::operator==(const std::float_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10f::operator!=(const std::float_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10f::size() const noexcept { return 10; }
	void Vector10f::reset(const std::float_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::float_t& Vector10f::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::float_t& Vector10f::at(const std::uint8_t index) noexcept
	{
		std::float_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
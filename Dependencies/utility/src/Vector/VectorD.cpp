#include "VectorD.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::double_t
		Bytes: 8
		Range: 1.7E +/- 308  precision: (15 digits)
	*/

	// Vector2d
	Vector2d::Vector2d(const std::double_t x, const std::double_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2d::Vector2d(const Vector2d& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2d& Vector2d::operator=(const Vector2d& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2d::Vector2d(Vector2d&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2d& Vector2d::operator=(Vector2d&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2d& Vector2d::operator=(const std::double_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2d Vector2d::operator+(const Vector2d& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2d Vector2d::operator-(const Vector2d& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2d Vector2d::operator*(const Vector2d& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2d Vector2d::operator/(const Vector2d& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2d Vector2d::operator+(const std::double_t number) const noexcept {
		return { x + number, y + number };
	}

	Vector2d Vector2d::operator-(const std::double_t number) const noexcept {
		return { x - number, y - number };
	}

	Vector2d Vector2d::operator*(const std::double_t number) const noexcept {
		return { x * number, y * number };
	}

	Vector2d Vector2d::operator/(const std::double_t number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2d& Vector2d::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2d& Vector2d::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2d Vector2d::operator++ (int) noexcept {
		Vector2d temp = *this;
		++* this;
		return temp;
	}

	Vector2d Vector2d::operator-- (int) noexcept {
		Vector2d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2d& Vector2d::operator+= (const Vector2d& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2d& Vector2d::operator-= (const Vector2d& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2d& Vector2d::operator*= (const Vector2d& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2d& Vector2d::operator/= (const Vector2d& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2d& Vector2d::operator+= (const std::double_t number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2d& Vector2d::operator-= (const std::double_t number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2d& Vector2d::operator*= (const std::double_t number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2d& Vector2d::operator/= (const std::double_t number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2d::operator< (const Vector2d& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2d::operator<= (const Vector2d& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2d::operator>  (const Vector2d& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2d::operator>= (const Vector2d& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2d::operator<  (const std::double_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2d::operator<= (const std::double_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2d::operator>  (const std::double_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2d::operator>= (const std::double_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2d::operator==(const Vector2d& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2d::operator!=(const Vector2d& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2d::operator==(const std::double_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2d::operator!=(const std::double_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2d::size() const noexcept { return 2; }
	void Vector2d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector2d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector2d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3d
	Vector3d::Vector3d(const std::double_t x, const std::double_t y, const std::double_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3d::Vector3d(const Vector3d& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3d& Vector3d::operator=(const Vector3d& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3d::Vector3d(Vector3d&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3d& Vector3d::operator=(Vector3d&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3d& Vector3d::operator=(const std::double_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3d Vector3d::operator+(const Vector3d& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3d Vector3d::operator-(const Vector3d& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3d Vector3d::operator*(const Vector3d& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3d Vector3d::operator/(const Vector3d& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3d Vector3d::operator+(const std::double_t number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3d Vector3d::operator-(const std::double_t number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3d Vector3d::operator*(const std::double_t number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3d Vector3d::operator/(const std::double_t number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3d& Vector3d::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3d& Vector3d::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3d Vector3d::operator++ (int) noexcept {
		Vector3d temp = *this;
		++* this;
		return temp;
	}

	Vector3d Vector3d::operator-- (int) noexcept {
		Vector3d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3d& Vector3d::operator+= (const Vector3d& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3d& Vector3d::operator-= (const Vector3d& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3d& Vector3d::operator*= (const Vector3d& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3d& Vector3d::operator/= (const Vector3d& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3d& Vector3d::operator+= (const std::double_t number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3d& Vector3d::operator-= (const std::double_t number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3d& Vector3d::operator*= (const std::double_t number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3d& Vector3d::operator/= (const std::double_t number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3d::operator< (const Vector3d& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3d::operator<= (const Vector3d& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3d::operator>  (const Vector3d& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3d::operator>= (const Vector3d& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3d::operator<  (const std::double_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3d::operator<= (const std::double_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3d::operator>  (const std::double_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3d::operator>= (const std::double_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3d::operator==(const Vector3d& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3d::operator!=(const Vector3d& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3d::operator==(const std::double_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3d::operator!=(const std::double_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3d::size() const noexcept { return 3; }
	void Vector3d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector3d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector3d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4d
	Vector4d::Vector4d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4d::Vector4d(const Vector4d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4d& Vector4d::operator=(const Vector4d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4d::Vector4d(Vector4d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4d& Vector4d::operator=(Vector4d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4d& Vector4d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4d Vector4d::operator+(const Vector4d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4d Vector4d::operator-(const Vector4d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4d Vector4d::operator*(const Vector4d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4d Vector4d::operator/(const Vector4d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4d Vector4d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4d Vector4d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4d Vector4d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4d Vector4d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4d& Vector4d::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4d& Vector4d::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4d Vector4d::operator++ (int) noexcept {
		Vector4d temp = *this;
		++* this;
		return temp;
	}

	Vector4d Vector4d::operator-- (int) noexcept {
		Vector4d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4d& Vector4d::operator+= (const Vector4d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4d& Vector4d::operator-= (const Vector4d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4d& Vector4d::operator*= (const Vector4d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4d& Vector4d::operator/= (const Vector4d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4d& Vector4d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4d& Vector4d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4d& Vector4d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4d& Vector4d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4d::operator< (const Vector4d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4d::operator<= (const Vector4d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4d::operator>  (const Vector4d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4d::operator>= (const Vector4d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4d::operator==(const Vector4d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4d::operator!=(const Vector4d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4d::size() const noexcept { return 4; }
	void Vector4d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector4d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector4d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5d
	Vector5d::Vector5d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5d::Vector5d(const Vector5d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5d& Vector5d::operator=(const Vector5d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5d::Vector5d(Vector5d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5d& Vector5d::operator=(Vector5d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5d& Vector5d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5d Vector5d::operator+(const Vector5d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5d Vector5d::operator-(const Vector5d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5d Vector5d::operator*(const Vector5d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5d Vector5d::operator/(const Vector5d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5d Vector5d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5d Vector5d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5d Vector5d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5d Vector5d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5d& Vector5d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5d& Vector5d::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5d Vector5d::operator++ (int) noexcept {
		Vector5d temp = *this;
		++* this;
		return temp;
	}

	Vector5d Vector5d::operator-- (int) noexcept {
		Vector5d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5d& Vector5d::operator+= (const Vector5d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5d& Vector5d::operator-= (const Vector5d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5d& Vector5d::operator*= (const Vector5d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5d& Vector5d::operator/= (const Vector5d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5d& Vector5d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5d& Vector5d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5d& Vector5d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5d& Vector5d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5d::operator< (const Vector5d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5d::operator<= (const Vector5d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5d::operator>  (const Vector5d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5d::operator>= (const Vector5d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5d::operator==(const Vector5d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5d::operator!=(const Vector5d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5d::size() const noexcept { return 5; }
	void Vector5d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector5d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector5d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6d
	Vector6d::Vector6d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e, const std::double_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6d::Vector6d(const Vector6d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6d& Vector6d::operator=(const Vector6d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6d::Vector6d(Vector6d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6d& Vector6d::operator=(Vector6d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6d& Vector6d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6d Vector6d::operator+(const Vector6d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6d Vector6d::operator-(const Vector6d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6d Vector6d::operator*(const Vector6d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6d Vector6d::operator/(const Vector6d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6d Vector6d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6d Vector6d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6d Vector6d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6d Vector6d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6d& Vector6d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6d& Vector6d::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6d Vector6d::operator++ (int) noexcept {
		Vector6d temp = *this;
		++* this;
		return temp;
	}

	Vector6d Vector6d::operator-- (int) noexcept {
		Vector6d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6d& Vector6d::operator+= (const Vector6d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6d& Vector6d::operator-= (const Vector6d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6d& Vector6d::operator*= (const Vector6d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6d& Vector6d::operator/= (const Vector6d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6d& Vector6d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6d& Vector6d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6d& Vector6d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6d& Vector6d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6d::operator< (const Vector6d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6d::operator<= (const Vector6d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6d::operator>  (const Vector6d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6d::operator>= (const Vector6d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6d::operator==(const Vector6d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6d::operator!=(const Vector6d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6d::size() const noexcept { return 6; }
	void Vector6d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector6d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector6d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7d
	Vector7d::Vector7d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e, const std::double_t f, const std::double_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7d::Vector7d(const Vector7d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7d& Vector7d::operator=(const Vector7d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7d::Vector7d(Vector7d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7d& Vector7d::operator=(Vector7d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7d& Vector7d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7d Vector7d::operator+(const Vector7d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7d Vector7d::operator-(const Vector7d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7d Vector7d::operator*(const Vector7d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7d Vector7d::operator/(const Vector7d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7d Vector7d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7d Vector7d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7d Vector7d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7d Vector7d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7d& Vector7d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7d& Vector7d::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7d Vector7d::operator++ (int) noexcept {
		Vector7d temp = *this;
		++* this;
		return temp;
	}

	Vector7d Vector7d::operator-- (int) noexcept {
		Vector7d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7d& Vector7d::operator+= (const Vector7d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7d& Vector7d::operator-= (const Vector7d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7d& Vector7d::operator*= (const Vector7d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7d& Vector7d::operator/= (const Vector7d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7d& Vector7d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7d& Vector7d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7d& Vector7d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7d& Vector7d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7d::operator< (const Vector7d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7d::operator<= (const Vector7d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7d::operator>  (const Vector7d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7d::operator>= (const Vector7d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7d::operator==(const Vector7d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7d::operator!=(const Vector7d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7d::size() const noexcept { return 7; }
	void Vector7d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector7d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector7d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8d
	Vector8d::Vector8d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8d::Vector8d(const Vector8d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8d& Vector8d::operator=(const Vector8d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8d::Vector8d(Vector8d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8d& Vector8d::operator=(Vector8d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8d& Vector8d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8d Vector8d::operator+(const Vector8d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8d Vector8d::operator-(const Vector8d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8d Vector8d::operator*(const Vector8d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8d Vector8d::operator/(const Vector8d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8d Vector8d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8d Vector8d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8d Vector8d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8d Vector8d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8d& Vector8d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8d& Vector8d::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8d Vector8d::operator++ (int) noexcept {
		Vector8d temp = *this;
		++* this;
		return temp;
	}

	Vector8d Vector8d::operator-- (int) noexcept {
		Vector8d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8d& Vector8d::operator+= (const Vector8d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8d& Vector8d::operator-= (const Vector8d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8d& Vector8d::operator*= (const Vector8d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8d& Vector8d::operator/= (const Vector8d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8d& Vector8d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8d& Vector8d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8d& Vector8d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8d& Vector8d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8d::operator< (const Vector8d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8d::operator<= (const Vector8d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8d::operator>  (const Vector8d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8d::operator>= (const Vector8d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8d::operator==(const Vector8d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8d::operator!=(const Vector8d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8d::size() const noexcept { return 8; }
	void Vector8d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector8d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector8d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9d
	Vector9d::Vector9d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h,
		const std::double_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9d::Vector9d(const Vector9d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9d& Vector9d::operator=(const Vector9d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9d::Vector9d(Vector9d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9d& Vector9d::operator=(Vector9d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9d& Vector9d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9d Vector9d::operator+(const Vector9d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9d Vector9d::operator-(const Vector9d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9d Vector9d::operator*(const Vector9d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9d Vector9d::operator/(const Vector9d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9d Vector9d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9d Vector9d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9d Vector9d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9d Vector9d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9d& Vector9d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9d& Vector9d::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9d Vector9d::operator++ (int) noexcept {
		Vector9d temp = *this;
		++* this;
		return temp;
	}

	Vector9d Vector9d::operator-- (int) noexcept {
		Vector9d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9d& Vector9d::operator+= (const Vector9d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9d& Vector9d::operator-= (const Vector9d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9d& Vector9d::operator*= (const Vector9d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9d& Vector9d::operator/= (const Vector9d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9d& Vector9d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9d& Vector9d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9d& Vector9d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9d& Vector9d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9d::operator< (const Vector9d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9d::operator<= (const Vector9d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9d::operator>  (const Vector9d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9d::operator>= (const Vector9d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9d::operator==(const Vector9d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9d::operator!=(const Vector9d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9d::size() const noexcept { return 9; }
	void Vector9d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector9d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector9d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10d
	Vector10d::Vector10d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
		const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h,
		const std::double_t i, const std::double_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10d::Vector10d(const Vector10d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10d& Vector10d::operator=(const Vector10d& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10d::Vector10d(Vector10d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10d& Vector10d::operator=(Vector10d&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10d& Vector10d::operator=(const std::double_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10d Vector10d::operator+(const Vector10d& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10d Vector10d::operator-(const Vector10d& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10d Vector10d::operator*(const Vector10d& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10d Vector10d::operator/(const Vector10d& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10d Vector10d::operator+(const std::double_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10d Vector10d::operator-(const std::double_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10d Vector10d::operator*(const std::double_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10d Vector10d::operator/(const std::double_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10d& Vector10d::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10d& Vector10d::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10d Vector10d::operator++ (int) noexcept {
		Vector10d temp = *this;
		++* this;
		return temp;
	}

	Vector10d Vector10d::operator-- (int) noexcept {
		Vector10d temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10d& Vector10d::operator+= (const Vector10d& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10d& Vector10d::operator-= (const Vector10d& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10d& Vector10d::operator*= (const Vector10d& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10d& Vector10d::operator/= (const Vector10d& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10d& Vector10d::operator+= (const std::double_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10d& Vector10d::operator-= (const std::double_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10d& Vector10d::operator*= (const std::double_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10d& Vector10d::operator/= (const std::double_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10d::operator< (const Vector10d& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10d::operator<= (const Vector10d& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10d::operator>  (const Vector10d& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10d::operator>= (const Vector10d& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10d::operator<  (const std::double_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10d::operator<= (const std::double_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10d::operator>  (const std::double_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10d::operator>= (const std::double_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10d::operator==(const Vector10d& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10d::operator!=(const Vector10d& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10d::operator==(const std::double_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10d::operator!=(const std::double_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10d::size() const noexcept { return 10; }
	void Vector10d::reset(const std::double_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::double_t& Vector10d::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::double_t& Vector10d::at(const std::uint8_t index) noexcept
	{
		std::double_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
#include "VectorL.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : long
		Bytes: 4
		Range: -2.147.483.648 to 2.147.483.647
	*/

	// Vector2l
	Vector2l::Vector2l(const long x, const long y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2l::Vector2l(const Vector2l& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2l& Vector2l::operator=(const Vector2l& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2l::Vector2l(Vector2l&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2l& Vector2l::operator=(Vector2l&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2l& Vector2l::operator=(const long number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2l Vector2l::operator+(const Vector2l& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2l Vector2l::operator-(const Vector2l& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2l Vector2l::operator*(const Vector2l& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2l Vector2l::operator/(const Vector2l& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2l Vector2l::operator+(const long number) const noexcept {
		return { x + number, y + number };
	}

	Vector2l Vector2l::operator-(const long number) const noexcept {
		return { x - number, y - number };
	}

	Vector2l Vector2l::operator*(const long number) const noexcept {
		return { x * number, y * number };
	}

	Vector2l Vector2l::operator/(const long number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2l& Vector2l::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2l& Vector2l::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2l Vector2l::operator++ (int) noexcept {
		Vector2l temp = *this;
		++* this;
		return temp;
	}

	Vector2l Vector2l::operator-- (int) noexcept {
		Vector2l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2l& Vector2l::operator+= (const Vector2l& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2l& Vector2l::operator-= (const Vector2l& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2l& Vector2l::operator*= (const Vector2l& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2l& Vector2l::operator/= (const Vector2l& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2l& Vector2l::operator+= (const long number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2l& Vector2l::operator-= (const long number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2l& Vector2l::operator*= (const long number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2l& Vector2l::operator/= (const long number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2l::operator< (const Vector2l& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2l::operator<= (const Vector2l& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2l::operator>  (const Vector2l& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2l::operator>= (const Vector2l& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2l::operator<  (const long number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2l::operator<= (const long number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2l::operator>  (const long number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2l::operator>= (const long number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2l::operator==(const Vector2l& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2l::operator!=(const Vector2l& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2l::operator==(const long number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2l::operator!=(const long number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2l::size() const noexcept { return 2; }
	void Vector2l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector2l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector2l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3l
	Vector3l::Vector3l(const long x, const long y, const long z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3l::Vector3l(const Vector3l& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3l& Vector3l::operator=(const Vector3l& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3l::Vector3l(Vector3l&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3l& Vector3l::operator=(Vector3l&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3l& Vector3l::operator=(const long number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3l Vector3l::operator+(const Vector3l& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3l Vector3l::operator-(const Vector3l& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3l Vector3l::operator*(const Vector3l& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3l Vector3l::operator/(const Vector3l& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3l Vector3l::operator+(const long number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3l Vector3l::operator-(const long number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3l Vector3l::operator*(const long number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3l Vector3l::operator/(const long number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3l& Vector3l::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3l& Vector3l::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3l Vector3l::operator++ (int) noexcept {
		Vector3l temp = *this;
		++* this;
		return temp;
	}

	Vector3l Vector3l::operator-- (int) noexcept {
		Vector3l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3l& Vector3l::operator+= (const Vector3l& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3l& Vector3l::operator-= (const Vector3l& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3l& Vector3l::operator*= (const Vector3l& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3l& Vector3l::operator/= (const Vector3l& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3l& Vector3l::operator+= (const long number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3l& Vector3l::operator-= (const long number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3l& Vector3l::operator*= (const long number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3l& Vector3l::operator/= (const long number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3l::operator< (const Vector3l& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3l::operator<= (const Vector3l& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3l::operator>  (const Vector3l& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3l::operator>= (const Vector3l& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3l::operator<  (const long number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3l::operator<= (const long number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3l::operator>  (const long number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3l::operator>= (const long number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3l::operator==(const Vector3l& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3l::operator!=(const Vector3l& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3l::operator==(const long number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3l::operator!=(const long number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3l::size() const noexcept { return 3; }
	void Vector3l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector3l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector3l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4l
	Vector4l::Vector4l(const long a, const long b, const long c, const long d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4l::Vector4l(const Vector4l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4l& Vector4l::operator=(const Vector4l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4l::Vector4l(Vector4l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4l& Vector4l::operator=(Vector4l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4l& Vector4l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4l Vector4l::operator+(const Vector4l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4l Vector4l::operator-(const Vector4l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4l Vector4l::operator*(const Vector4l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4l Vector4l::operator/(const Vector4l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4l Vector4l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4l Vector4l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4l Vector4l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4l Vector4l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4l& Vector4l::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4l& Vector4l::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4l Vector4l::operator++ (int) noexcept {
		Vector4l temp = *this;
		++* this;
		return temp;
	}

	Vector4l Vector4l::operator-- (int) noexcept {
		Vector4l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4l& Vector4l::operator+= (const Vector4l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4l& Vector4l::operator-= (const Vector4l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4l& Vector4l::operator*= (const Vector4l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4l& Vector4l::operator/= (const Vector4l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4l& Vector4l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4l& Vector4l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4l& Vector4l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4l& Vector4l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4l::operator< (const Vector4l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4l::operator<= (const Vector4l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4l::operator>  (const Vector4l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4l::operator>= (const Vector4l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4l::operator==(const Vector4l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4l::operator!=(const Vector4l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4l::size() const noexcept { return 4; }
	void Vector4l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector4l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector4l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5l
	Vector5l::Vector5l(const long a, const long b, const long c, const long d,
		const long e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5l::Vector5l(const Vector5l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5l& Vector5l::operator=(const Vector5l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5l::Vector5l(Vector5l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5l& Vector5l::operator=(Vector5l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5l& Vector5l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5l Vector5l::operator+(const Vector5l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5l Vector5l::operator-(const Vector5l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5l Vector5l::operator*(const Vector5l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5l Vector5l::operator/(const Vector5l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5l Vector5l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5l Vector5l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5l Vector5l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5l Vector5l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5l& Vector5l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5l& Vector5l::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5l Vector5l::operator++ (int) noexcept {
		Vector5l temp = *this;
		++* this;
		return temp;
	}

	Vector5l Vector5l::operator-- (int) noexcept {
		Vector5l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5l& Vector5l::operator+= (const Vector5l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5l& Vector5l::operator-= (const Vector5l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5l& Vector5l::operator*= (const Vector5l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5l& Vector5l::operator/= (const Vector5l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5l& Vector5l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5l& Vector5l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5l& Vector5l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5l& Vector5l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5l::operator< (const Vector5l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5l::operator<= (const Vector5l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5l::operator>  (const Vector5l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5l::operator>= (const Vector5l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5l::operator==(const Vector5l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5l::operator!=(const Vector5l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5l::size() const noexcept { return 5; }
	void Vector5l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector5l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector5l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6l
	Vector6l::Vector6l(const long a, const long b, const long c, const long d,
		const long e, const long f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6l::Vector6l(const Vector6l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6l& Vector6l::operator=(const Vector6l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6l::Vector6l(Vector6l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6l& Vector6l::operator=(Vector6l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6l& Vector6l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6l Vector6l::operator+(const Vector6l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6l Vector6l::operator-(const Vector6l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6l Vector6l::operator*(const Vector6l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6l Vector6l::operator/(const Vector6l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6l Vector6l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6l Vector6l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6l Vector6l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6l Vector6l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6l& Vector6l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6l& Vector6l::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6l Vector6l::operator++ (int) noexcept {
		Vector6l temp = *this;
		++* this;
		return temp;
	}

	Vector6l Vector6l::operator-- (int) noexcept {
		Vector6l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6l& Vector6l::operator+= (const Vector6l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6l& Vector6l::operator-= (const Vector6l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6l& Vector6l::operator*= (const Vector6l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6l& Vector6l::operator/= (const Vector6l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6l& Vector6l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6l& Vector6l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6l& Vector6l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6l& Vector6l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6l::operator< (const Vector6l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6l::operator<= (const Vector6l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6l::operator>  (const Vector6l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6l::operator>= (const Vector6l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6l::operator==(const Vector6l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6l::operator!=(const Vector6l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6l::size() const noexcept { return 6; }
	void Vector6l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector6l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector6l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7l
	Vector7l::Vector7l(const long a, const long b, const long c, const long d,
		const long e, const long f, const long g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7l::Vector7l(const Vector7l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7l& Vector7l::operator=(const Vector7l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7l::Vector7l(Vector7l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7l& Vector7l::operator=(Vector7l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7l& Vector7l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7l Vector7l::operator+(const Vector7l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7l Vector7l::operator-(const Vector7l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7l Vector7l::operator*(const Vector7l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7l Vector7l::operator/(const Vector7l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7l Vector7l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7l Vector7l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7l Vector7l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7l Vector7l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7l& Vector7l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7l& Vector7l::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7l Vector7l::operator++ (int) noexcept {
		Vector7l temp = *this;
		++* this;
		return temp;
	}

	Vector7l Vector7l::operator-- (int) noexcept {
		Vector7l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7l& Vector7l::operator+= (const Vector7l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7l& Vector7l::operator-= (const Vector7l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7l& Vector7l::operator*= (const Vector7l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7l& Vector7l::operator/= (const Vector7l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7l& Vector7l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7l& Vector7l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7l& Vector7l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7l& Vector7l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7l::operator< (const Vector7l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7l::operator<= (const Vector7l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7l::operator>  (const Vector7l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7l::operator>= (const Vector7l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7l::operator==(const Vector7l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7l::operator!=(const Vector7l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7l::size() const noexcept { return 7; }
	void Vector7l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector7l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector7l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8l
	Vector8l::Vector8l(const long a, const long b, const long c, const long d,
		const long e, const long f, const long g, const long h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8l::Vector8l(const Vector8l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8l& Vector8l::operator=(const Vector8l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8l::Vector8l(Vector8l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8l& Vector8l::operator=(Vector8l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8l& Vector8l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8l Vector8l::operator+(const Vector8l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8l Vector8l::operator-(const Vector8l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8l Vector8l::operator*(const Vector8l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8l Vector8l::operator/(const Vector8l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8l Vector8l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8l Vector8l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8l Vector8l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8l Vector8l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8l& Vector8l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8l& Vector8l::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8l Vector8l::operator++ (int) noexcept {
		Vector8l temp = *this;
		++* this;
		return temp;
	}

	Vector8l Vector8l::operator-- (int) noexcept {
		Vector8l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8l& Vector8l::operator+= (const Vector8l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8l& Vector8l::operator-= (const Vector8l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8l& Vector8l::operator*= (const Vector8l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8l& Vector8l::operator/= (const Vector8l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8l& Vector8l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8l& Vector8l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8l& Vector8l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8l& Vector8l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8l::operator< (const Vector8l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8l::operator<= (const Vector8l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8l::operator>  (const Vector8l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8l::operator>= (const Vector8l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8l::operator==(const Vector8l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8l::operator!=(const Vector8l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8l::size() const noexcept { return 8; }
	void Vector8l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector8l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector8l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9l
	Vector9l::Vector9l(const long a, const long b, const long c, const long d,
		const long e, const long f, const long g, const long h,
		const long i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9l::Vector9l(const Vector9l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9l& Vector9l::operator=(const Vector9l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9l::Vector9l(Vector9l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9l& Vector9l::operator=(Vector9l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9l& Vector9l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9l Vector9l::operator+(const Vector9l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9l Vector9l::operator-(const Vector9l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9l Vector9l::operator*(const Vector9l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9l Vector9l::operator/(const Vector9l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9l Vector9l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9l Vector9l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9l Vector9l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9l Vector9l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9l& Vector9l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9l& Vector9l::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9l Vector9l::operator++ (int) noexcept {
		Vector9l temp = *this;
		++* this;
		return temp;
	}

	Vector9l Vector9l::operator-- (int) noexcept {
		Vector9l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9l& Vector9l::operator+= (const Vector9l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9l& Vector9l::operator-= (const Vector9l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9l& Vector9l::operator*= (const Vector9l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9l& Vector9l::operator/= (const Vector9l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9l& Vector9l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9l& Vector9l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9l& Vector9l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9l& Vector9l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9l::operator< (const Vector9l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9l::operator<= (const Vector9l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9l::operator>  (const Vector9l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9l::operator>= (const Vector9l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9l::operator==(const Vector9l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9l::operator!=(const Vector9l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9l::size() const noexcept { return 9; }
	void Vector9l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector9l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector9l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10l
	Vector10l::Vector10l(const long a, const long b, const long c, const long d,
		const long e, const long f, const long g, const long h,
		const long i, const long j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10l::Vector10l(const Vector10l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10l& Vector10l::operator=(const Vector10l& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10l::Vector10l(Vector10l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10l& Vector10l::operator=(Vector10l&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10l& Vector10l::operator=(const long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10l Vector10l::operator+(const Vector10l& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10l Vector10l::operator-(const Vector10l& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10l Vector10l::operator*(const Vector10l& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10l Vector10l::operator/(const Vector10l& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10l Vector10l::operator+(const long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10l Vector10l::operator-(const long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10l Vector10l::operator*(const long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10l Vector10l::operator/(const long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10l& Vector10l::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10l& Vector10l::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10l Vector10l::operator++ (int) noexcept {
		Vector10l temp = *this;
		++* this;
		return temp;
	}

	Vector10l Vector10l::operator-- (int) noexcept {
		Vector10l temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10l& Vector10l::operator+= (const Vector10l& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10l& Vector10l::operator-= (const Vector10l& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10l& Vector10l::operator*= (const Vector10l& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10l& Vector10l::operator/= (const Vector10l& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10l& Vector10l::operator+= (const long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10l& Vector10l::operator-= (const long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10l& Vector10l::operator*= (const long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10l& Vector10l::operator/= (const long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10l::operator< (const Vector10l& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10l::operator<= (const Vector10l& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10l::operator>  (const Vector10l& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10l::operator>= (const Vector10l& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10l::operator<  (const long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10l::operator<= (const long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10l::operator>  (const long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10l::operator>= (const long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10l::operator==(const Vector10l& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10l::operator!=(const Vector10l& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10l::operator==(const long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10l::operator!=(const long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10l::size() const noexcept { return 10; }
	void Vector10l::reset(const long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long& Vector10l::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long& Vector10l::at(const std::uint8_t index) noexcept
	{
		long* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
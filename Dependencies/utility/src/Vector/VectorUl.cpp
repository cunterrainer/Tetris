#include "VectorUl.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : unsigned long
		Bytes: 4
		Range: 0 to 4.294.967.295
	*/

	// Vector2Ul
	Vector2Ul::Vector2Ul(const unsigned long x, const unsigned long y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2Ul::Vector2Ul(const Vector2Ul& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Ul& Vector2Ul::operator=(const Vector2Ul& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2Ul::Vector2Ul(Vector2Ul&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Ul& Vector2Ul::operator=(Vector2Ul&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2Ul& Vector2Ul::operator=(const unsigned long number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2Ul Vector2Ul::operator+(const Vector2Ul& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2Ul Vector2Ul::operator-(const Vector2Ul& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2Ul Vector2Ul::operator*(const Vector2Ul& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2Ul Vector2Ul::operator/(const Vector2Ul& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2Ul Vector2Ul::operator+(const unsigned long number) const noexcept {
		return { x + number, y + number };
	}

	Vector2Ul Vector2Ul::operator-(const unsigned long number) const noexcept {
		return { x - number, y - number };
	}

	Vector2Ul Vector2Ul::operator*(const unsigned long number) const noexcept {
		return { x * number, y * number };
	}

	Vector2Ul Vector2Ul::operator/(const unsigned long number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2Ul& Vector2Ul::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2Ul Vector2Ul::operator++ (int) noexcept {
		Vector2Ul temp = *this;
		++* this;
		return temp;
	}

	Vector2Ul Vector2Ul::operator-- (int) noexcept {
		Vector2Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2Ul& Vector2Ul::operator+= (const Vector2Ul& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator-= (const Vector2Ul& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator*= (const Vector2Ul& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator/= (const Vector2Ul& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2Ul& Vector2Ul::operator+= (const unsigned long number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator-= (const unsigned long number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator*= (const unsigned long number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2Ul& Vector2Ul::operator/= (const unsigned long number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2Ul::operator< (const Vector2Ul& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2Ul::operator<= (const Vector2Ul& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2Ul::operator>  (const Vector2Ul& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2Ul::operator>= (const Vector2Ul& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2Ul::operator<  (const unsigned long number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2Ul::operator<= (const unsigned long number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2Ul::operator>  (const unsigned long number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2Ul::operator>= (const unsigned long number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2Ul::operator==(const Vector2Ul& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2Ul::operator!=(const Vector2Ul& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2Ul::operator==(const unsigned long number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2Ul::operator!=(const unsigned long number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2Ul::size() const noexcept { return 2; }
	void Vector2Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector2Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector2Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3Ul
	Vector3Ul::Vector3Ul(const unsigned long x, const unsigned long y, const unsigned long z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3Ul::Vector3Ul(const Vector3Ul& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Ul& Vector3Ul::operator=(const Vector3Ul& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3Ul::Vector3Ul(Vector3Ul&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Ul& Vector3Ul::operator=(Vector3Ul&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3Ul& Vector3Ul::operator=(const unsigned long number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3Ul Vector3Ul::operator+(const Vector3Ul& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3Ul Vector3Ul::operator-(const Vector3Ul& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3Ul Vector3Ul::operator*(const Vector3Ul& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3Ul Vector3Ul::operator/(const Vector3Ul& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3Ul Vector3Ul::operator+(const unsigned long number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3Ul Vector3Ul::operator-(const unsigned long number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3Ul Vector3Ul::operator*(const unsigned long number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3Ul Vector3Ul::operator/(const unsigned long number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3Ul& Vector3Ul::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3Ul Vector3Ul::operator++ (int) noexcept {
		Vector3Ul temp = *this;
		++* this;
		return temp;
	}

	Vector3Ul Vector3Ul::operator-- (int) noexcept {
		Vector3Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3Ul& Vector3Ul::operator+= (const Vector3Ul& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator-= (const Vector3Ul& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator*= (const Vector3Ul& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator/= (const Vector3Ul& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3Ul& Vector3Ul::operator+= (const unsigned long number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator-= (const unsigned long number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator*= (const unsigned long number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3Ul& Vector3Ul::operator/= (const unsigned long number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3Ul::operator< (const Vector3Ul& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3Ul::operator<= (const Vector3Ul& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3Ul::operator>  (const Vector3Ul& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3Ul::operator>= (const Vector3Ul& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3Ul::operator<  (const unsigned long number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3Ul::operator<= (const unsigned long number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3Ul::operator>  (const unsigned long number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3Ul::operator>= (const unsigned long number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3Ul::operator==(const Vector3Ul& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3Ul::operator!=(const Vector3Ul& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3Ul::operator==(const unsigned long number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3Ul::operator!=(const unsigned long number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3Ul::size() const noexcept { return 3; }
	void Vector3Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector3Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector3Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4Ul
	Vector4Ul::Vector4Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4Ul::Vector4Ul(const Vector4Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Ul& Vector4Ul::operator=(const Vector4Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4Ul::Vector4Ul(Vector4Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Ul& Vector4Ul::operator=(Vector4Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4Ul& Vector4Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4Ul Vector4Ul::operator+(const Vector4Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4Ul Vector4Ul::operator-(const Vector4Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4Ul Vector4Ul::operator*(const Vector4Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4Ul Vector4Ul::operator/(const Vector4Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4Ul Vector4Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4Ul Vector4Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4Ul Vector4Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4Ul Vector4Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4Ul& Vector4Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4Ul Vector4Ul::operator++ (int) noexcept {
		Vector4Ul temp = *this;
		++* this;
		return temp;
	}

	Vector4Ul Vector4Ul::operator-- (int) noexcept {
		Vector4Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4Ul& Vector4Ul::operator+= (const Vector4Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator-= (const Vector4Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator*= (const Vector4Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator/= (const Vector4Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4Ul& Vector4Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4Ul& Vector4Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4Ul::operator< (const Vector4Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4Ul::operator<= (const Vector4Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4Ul::operator>  (const Vector4Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4Ul::operator>= (const Vector4Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4Ul::operator==(const Vector4Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4Ul::operator!=(const Vector4Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4Ul::size() const noexcept { return 4; }
	void Vector4Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector4Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector4Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5Ul
	Vector5Ul::Vector5Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5Ul::Vector5Ul(const Vector5Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Ul& Vector5Ul::operator=(const Vector5Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5Ul::Vector5Ul(Vector5Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Ul& Vector5Ul::operator=(Vector5Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5Ul& Vector5Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5Ul Vector5Ul::operator+(const Vector5Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5Ul Vector5Ul::operator-(const Vector5Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5Ul Vector5Ul::operator*(const Vector5Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5Ul Vector5Ul::operator/(const Vector5Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5Ul Vector5Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5Ul Vector5Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5Ul Vector5Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5Ul Vector5Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5Ul& Vector5Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5Ul Vector5Ul::operator++ (int) noexcept {
		Vector5Ul temp = *this;
		++* this;
		return temp;
	}

	Vector5Ul Vector5Ul::operator-- (int) noexcept {
		Vector5Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5Ul& Vector5Ul::operator+= (const Vector5Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator-= (const Vector5Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator*= (const Vector5Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator/= (const Vector5Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5Ul& Vector5Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5Ul& Vector5Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5Ul::operator< (const Vector5Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5Ul::operator<= (const Vector5Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5Ul::operator>  (const Vector5Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5Ul::operator>= (const Vector5Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5Ul::operator==(const Vector5Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5Ul::operator!=(const Vector5Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5Ul::size() const noexcept { return 5; }
	void Vector5Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector5Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector5Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6Ul
	Vector6Ul::Vector6Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e, const unsigned long f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6Ul::Vector6Ul(const Vector6Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Ul& Vector6Ul::operator=(const Vector6Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6Ul::Vector6Ul(Vector6Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Ul& Vector6Ul::operator=(Vector6Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6Ul& Vector6Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6Ul Vector6Ul::operator+(const Vector6Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6Ul Vector6Ul::operator-(const Vector6Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6Ul Vector6Ul::operator*(const Vector6Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6Ul Vector6Ul::operator/(const Vector6Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6Ul Vector6Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6Ul Vector6Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6Ul Vector6Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6Ul Vector6Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6Ul& Vector6Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6Ul Vector6Ul::operator++ (int) noexcept {
		Vector6Ul temp = *this;
		++* this;
		return temp;
	}

	Vector6Ul Vector6Ul::operator-- (int) noexcept {
		Vector6Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6Ul& Vector6Ul::operator+= (const Vector6Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator-= (const Vector6Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator*= (const Vector6Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator/= (const Vector6Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6Ul& Vector6Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6Ul& Vector6Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6Ul::operator< (const Vector6Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6Ul::operator<= (const Vector6Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6Ul::operator>  (const Vector6Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6Ul::operator>= (const Vector6Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6Ul::operator==(const Vector6Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6Ul::operator!=(const Vector6Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6Ul::size() const noexcept { return 6; }
	void Vector6Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector6Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector6Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7Ul
	Vector7Ul::Vector7Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e, const unsigned long f, const unsigned long g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7Ul::Vector7Ul(const Vector7Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Ul& Vector7Ul::operator=(const Vector7Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7Ul::Vector7Ul(Vector7Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Ul& Vector7Ul::operator=(Vector7Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7Ul& Vector7Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7Ul Vector7Ul::operator+(const Vector7Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7Ul Vector7Ul::operator-(const Vector7Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7Ul Vector7Ul::operator*(const Vector7Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7Ul Vector7Ul::operator/(const Vector7Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7Ul Vector7Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7Ul Vector7Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7Ul Vector7Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7Ul Vector7Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7Ul& Vector7Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7Ul Vector7Ul::operator++ (int) noexcept {
		Vector7Ul temp = *this;
		++* this;
		return temp;
	}

	Vector7Ul Vector7Ul::operator-- (int) noexcept {
		Vector7Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7Ul& Vector7Ul::operator+= (const Vector7Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator-= (const Vector7Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator*= (const Vector7Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator/= (const Vector7Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7Ul& Vector7Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7Ul& Vector7Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7Ul::operator< (const Vector7Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7Ul::operator<= (const Vector7Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7Ul::operator>  (const Vector7Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7Ul::operator>= (const Vector7Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7Ul::operator==(const Vector7Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7Ul::operator!=(const Vector7Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7Ul::size() const noexcept { return 7; }
	void Vector7Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector7Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector7Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8Ul
	Vector8Ul::Vector8Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8Ul::Vector8Ul(const Vector8Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Ul& Vector8Ul::operator=(const Vector8Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8Ul::Vector8Ul(Vector8Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Ul& Vector8Ul::operator=(Vector8Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8Ul& Vector8Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8Ul Vector8Ul::operator+(const Vector8Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8Ul Vector8Ul::operator-(const Vector8Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8Ul Vector8Ul::operator*(const Vector8Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8Ul Vector8Ul::operator/(const Vector8Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8Ul Vector8Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8Ul Vector8Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8Ul Vector8Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8Ul Vector8Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8Ul& Vector8Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8Ul Vector8Ul::operator++ (int) noexcept {
		Vector8Ul temp = *this;
		++* this;
		return temp;
	}

	Vector8Ul Vector8Ul::operator-- (int) noexcept {
		Vector8Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8Ul& Vector8Ul::operator+= (const Vector8Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator-= (const Vector8Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator*= (const Vector8Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator/= (const Vector8Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8Ul& Vector8Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8Ul& Vector8Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8Ul::operator< (const Vector8Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8Ul::operator<= (const Vector8Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8Ul::operator>  (const Vector8Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8Ul::operator>= (const Vector8Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8Ul::operator==(const Vector8Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8Ul::operator!=(const Vector8Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8Ul::size() const noexcept { return 8; }
	void Vector8Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector8Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector8Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9Ul
	Vector9Ul::Vector9Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h,
		const unsigned long i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9Ul::Vector9Ul(const Vector9Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Ul& Vector9Ul::operator=(const Vector9Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9Ul::Vector9Ul(Vector9Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Ul& Vector9Ul::operator=(Vector9Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9Ul& Vector9Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9Ul Vector9Ul::operator+(const Vector9Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9Ul Vector9Ul::operator-(const Vector9Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9Ul Vector9Ul::operator*(const Vector9Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9Ul Vector9Ul::operator/(const Vector9Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9Ul Vector9Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9Ul Vector9Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9Ul Vector9Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9Ul Vector9Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9Ul& Vector9Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9Ul Vector9Ul::operator++ (int) noexcept {
		Vector9Ul temp = *this;
		++* this;
		return temp;
	}

	Vector9Ul Vector9Ul::operator-- (int) noexcept {
		Vector9Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9Ul& Vector9Ul::operator+= (const Vector9Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator-= (const Vector9Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator*= (const Vector9Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator/= (const Vector9Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9Ul& Vector9Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9Ul& Vector9Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9Ul::operator< (const Vector9Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9Ul::operator<= (const Vector9Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9Ul::operator>  (const Vector9Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9Ul::operator>= (const Vector9Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9Ul::operator==(const Vector9Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9Ul::operator!=(const Vector9Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9Ul::size() const noexcept { return 9; }
	void Vector9Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector9Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector9Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10Ul
	Vector10Ul::Vector10Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
		const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h,
		const unsigned long i, const unsigned long j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10Ul::Vector10Ul(const Vector10Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Ul& Vector10Ul::operator=(const Vector10Ul& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10Ul::Vector10Ul(Vector10Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Ul& Vector10Ul::operator=(Vector10Ul&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10Ul& Vector10Ul::operator=(const unsigned long number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10Ul Vector10Ul::operator+(const Vector10Ul& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10Ul Vector10Ul::operator-(const Vector10Ul& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10Ul Vector10Ul::operator*(const Vector10Ul& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10Ul Vector10Ul::operator/(const Vector10Ul& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10Ul Vector10Ul::operator+(const unsigned long number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10Ul Vector10Ul::operator-(const unsigned long number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10Ul Vector10Ul::operator*(const unsigned long number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10Ul Vector10Ul::operator/(const unsigned long number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10Ul& Vector10Ul::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10Ul Vector10Ul::operator++ (int) noexcept {
		Vector10Ul temp = *this;
		++* this;
		return temp;
	}

	Vector10Ul Vector10Ul::operator-- (int) noexcept {
		Vector10Ul temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10Ul& Vector10Ul::operator+= (const Vector10Ul& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator-= (const Vector10Ul& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator*= (const Vector10Ul& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator/= (const Vector10Ul& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10Ul& Vector10Ul::operator+= (const unsigned long number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator-= (const unsigned long number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator*= (const unsigned long number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10Ul& Vector10Ul::operator/= (const unsigned long number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10Ul::operator< (const Vector10Ul& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10Ul::operator<= (const Vector10Ul& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10Ul::operator>  (const Vector10Ul& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10Ul::operator>= (const Vector10Ul& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10Ul::operator<  (const unsigned long number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10Ul::operator<= (const unsigned long number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10Ul::operator>  (const unsigned long number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10Ul::operator>= (const unsigned long number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10Ul::operator==(const Vector10Ul& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10Ul::operator!=(const Vector10Ul& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10Ul::operator==(const unsigned long number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10Ul::operator!=(const unsigned long number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10Ul::size() const noexcept { return 10; }
	void Vector10Ul::reset(const unsigned long stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	unsigned long& Vector10Ul::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	unsigned long& Vector10Ul::at(const std::uint8_t index) noexcept
	{
		unsigned long* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
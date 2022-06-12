#include "VectorLd.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : long double
		Bytes: 8
		Range: 1.7E +/- 308  precision: (15 digits)
	*/

	// Vector2Ld
	Vector2Ld::Vector2Ld(const long double x, const long double y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2Ld::Vector2Ld(const Vector2Ld& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Ld& Vector2Ld::operator=(const Vector2Ld& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2Ld::Vector2Ld(Vector2Ld&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Ld& Vector2Ld::operator=(Vector2Ld&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2Ld& Vector2Ld::operator=(const long double number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2Ld Vector2Ld::operator+(const Vector2Ld& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2Ld Vector2Ld::operator-(const Vector2Ld& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2Ld Vector2Ld::operator*(const Vector2Ld& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2Ld Vector2Ld::operator/(const Vector2Ld& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2Ld Vector2Ld::operator+(const long double number) const noexcept {
		return { x + number, y + number };
	}

	Vector2Ld Vector2Ld::operator-(const long double number) const noexcept {
		return { x - number, y - number };
	}

	Vector2Ld Vector2Ld::operator*(const long double number) const noexcept {
		return { x * number, y * number };
	}

	Vector2Ld Vector2Ld::operator/(const long double number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2Ld& Vector2Ld::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2Ld Vector2Ld::operator++ (int) noexcept {
		Vector2Ld temp = *this;
		++* this;
		return temp;
	}

	Vector2Ld Vector2Ld::operator-- (int) noexcept {
		Vector2Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2Ld& Vector2Ld::operator+= (const Vector2Ld& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator-= (const Vector2Ld& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator*= (const Vector2Ld& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator/= (const Vector2Ld& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2Ld& Vector2Ld::operator+= (const long double number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator-= (const long double number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator*= (const long double number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2Ld& Vector2Ld::operator/= (const long double number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2Ld::operator< (const Vector2Ld& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2Ld::operator<= (const Vector2Ld& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2Ld::operator>  (const Vector2Ld& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2Ld::operator>= (const Vector2Ld& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2Ld::operator<  (const long double number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2Ld::operator<= (const long double number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2Ld::operator>  (const long double number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2Ld::operator>= (const long double number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2Ld::operator==(const Vector2Ld& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2Ld::operator!=(const Vector2Ld& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2Ld::operator==(const long double number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2Ld::operator!=(const long double number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2Ld::size() const noexcept { return 2; }
	void Vector2Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector2Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector2Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3Ld
	Vector3Ld::Vector3Ld(const long double x, const long double y, const long double z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3Ld::Vector3Ld(const Vector3Ld& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Ld& Vector3Ld::operator=(const Vector3Ld& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3Ld::Vector3Ld(Vector3Ld&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Ld& Vector3Ld::operator=(Vector3Ld&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3Ld& Vector3Ld::operator=(const long double number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3Ld Vector3Ld::operator+(const Vector3Ld& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3Ld Vector3Ld::operator-(const Vector3Ld& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3Ld Vector3Ld::operator*(const Vector3Ld& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3Ld Vector3Ld::operator/(const Vector3Ld& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3Ld Vector3Ld::operator+(const long double number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3Ld Vector3Ld::operator-(const long double number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3Ld Vector3Ld::operator*(const long double number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3Ld Vector3Ld::operator/(const long double number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3Ld& Vector3Ld::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3Ld Vector3Ld::operator++ (int) noexcept {
		Vector3Ld temp = *this;
		++* this;
		return temp;
	}

	Vector3Ld Vector3Ld::operator-- (int) noexcept {
		Vector3Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3Ld& Vector3Ld::operator+= (const Vector3Ld& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator-= (const Vector3Ld& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator*= (const Vector3Ld& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator/= (const Vector3Ld& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3Ld& Vector3Ld::operator+= (const long double number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator-= (const long double number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator*= (const long double number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3Ld& Vector3Ld::operator/= (const long double number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3Ld::operator< (const Vector3Ld& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3Ld::operator<= (const Vector3Ld& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3Ld::operator>  (const Vector3Ld& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3Ld::operator>= (const Vector3Ld& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3Ld::operator<  (const long double number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3Ld::operator<= (const long double number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3Ld::operator>  (const long double number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3Ld::operator>= (const long double number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3Ld::operator==(const Vector3Ld& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3Ld::operator!=(const Vector3Ld& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3Ld::operator==(const long double number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3Ld::operator!=(const long double number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3Ld::size() const noexcept { return 3; }
	void Vector3Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector3Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector3Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4Ld
	Vector4Ld::Vector4Ld(const long double a, const long double b, const long double c, const long double d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4Ld::Vector4Ld(const Vector4Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Ld& Vector4Ld::operator=(const Vector4Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4Ld::Vector4Ld(Vector4Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Ld& Vector4Ld::operator=(Vector4Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4Ld& Vector4Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4Ld Vector4Ld::operator+(const Vector4Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4Ld Vector4Ld::operator-(const Vector4Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4Ld Vector4Ld::operator*(const Vector4Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4Ld Vector4Ld::operator/(const Vector4Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4Ld Vector4Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4Ld Vector4Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4Ld Vector4Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4Ld Vector4Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4Ld& Vector4Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4Ld Vector4Ld::operator++ (int) noexcept {
		Vector4Ld temp = *this;
		++* this;
		return temp;
	}

	Vector4Ld Vector4Ld::operator-- (int) noexcept {
		Vector4Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4Ld& Vector4Ld::operator+= (const Vector4Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator-= (const Vector4Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator*= (const Vector4Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator/= (const Vector4Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4Ld& Vector4Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4Ld& Vector4Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4Ld::operator< (const Vector4Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4Ld::operator<= (const Vector4Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4Ld::operator>  (const Vector4Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4Ld::operator>= (const Vector4Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4Ld::operator==(const Vector4Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4Ld::operator!=(const Vector4Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4Ld::size() const noexcept { return 4; }
	void Vector4Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector4Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector4Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5Ld
	Vector5Ld::Vector5Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5Ld::Vector5Ld(const Vector5Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Ld& Vector5Ld::operator=(const Vector5Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5Ld::Vector5Ld(Vector5Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Ld& Vector5Ld::operator=(Vector5Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5Ld& Vector5Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5Ld Vector5Ld::operator+(const Vector5Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5Ld Vector5Ld::operator-(const Vector5Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5Ld Vector5Ld::operator*(const Vector5Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5Ld Vector5Ld::operator/(const Vector5Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5Ld Vector5Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5Ld Vector5Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5Ld Vector5Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5Ld Vector5Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5Ld& Vector5Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5Ld Vector5Ld::operator++ (int) noexcept {
		Vector5Ld temp = *this;
		++* this;
		return temp;
	}

	Vector5Ld Vector5Ld::operator-- (int) noexcept {
		Vector5Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5Ld& Vector5Ld::operator+= (const Vector5Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator-= (const Vector5Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator*= (const Vector5Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator/= (const Vector5Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5Ld& Vector5Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5Ld& Vector5Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5Ld::operator< (const Vector5Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5Ld::operator<= (const Vector5Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5Ld::operator>  (const Vector5Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5Ld::operator>= (const Vector5Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5Ld::operator==(const Vector5Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5Ld::operator!=(const Vector5Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5Ld::size() const noexcept { return 5; }
	void Vector5Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector5Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector5Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6Ld
	Vector6Ld::Vector6Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e, const long double f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6Ld::Vector6Ld(const Vector6Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Ld& Vector6Ld::operator=(const Vector6Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6Ld::Vector6Ld(Vector6Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Ld& Vector6Ld::operator=(Vector6Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6Ld& Vector6Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6Ld Vector6Ld::operator+(const Vector6Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6Ld Vector6Ld::operator-(const Vector6Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6Ld Vector6Ld::operator*(const Vector6Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6Ld Vector6Ld::operator/(const Vector6Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6Ld Vector6Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6Ld Vector6Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6Ld Vector6Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6Ld Vector6Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6Ld& Vector6Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6Ld Vector6Ld::operator++ (int) noexcept {
		Vector6Ld temp = *this;
		++* this;
		return temp;
	}

	Vector6Ld Vector6Ld::operator-- (int) noexcept {
		Vector6Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6Ld& Vector6Ld::operator+= (const Vector6Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator-= (const Vector6Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator*= (const Vector6Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator/= (const Vector6Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6Ld& Vector6Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6Ld& Vector6Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6Ld::operator< (const Vector6Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6Ld::operator<= (const Vector6Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6Ld::operator>  (const Vector6Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6Ld::operator>= (const Vector6Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6Ld::operator==(const Vector6Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6Ld::operator!=(const Vector6Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6Ld::size() const noexcept { return 6; }
	void Vector6Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector6Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector6Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7Ld
	Vector7Ld::Vector7Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e, const long double f, const long double g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7Ld::Vector7Ld(const Vector7Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Ld& Vector7Ld::operator=(const Vector7Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7Ld::Vector7Ld(Vector7Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Ld& Vector7Ld::operator=(Vector7Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7Ld& Vector7Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7Ld Vector7Ld::operator+(const Vector7Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7Ld Vector7Ld::operator-(const Vector7Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7Ld Vector7Ld::operator*(const Vector7Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7Ld Vector7Ld::operator/(const Vector7Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7Ld Vector7Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7Ld Vector7Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7Ld Vector7Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7Ld Vector7Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7Ld& Vector7Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7Ld Vector7Ld::operator++ (int) noexcept {
		Vector7Ld temp = *this;
		++* this;
		return temp;
	}

	Vector7Ld Vector7Ld::operator-- (int) noexcept {
		Vector7Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7Ld& Vector7Ld::operator+= (const Vector7Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator-= (const Vector7Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator*= (const Vector7Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator/= (const Vector7Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7Ld& Vector7Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7Ld& Vector7Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7Ld::operator< (const Vector7Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7Ld::operator<= (const Vector7Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7Ld::operator>  (const Vector7Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7Ld::operator>= (const Vector7Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7Ld::operator==(const Vector7Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7Ld::operator!=(const Vector7Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7Ld::size() const noexcept { return 7; }
	void Vector7Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector7Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector7Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8Ld
	Vector8Ld::Vector8Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e, const long double f, const long double g, const long double h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8Ld::Vector8Ld(const Vector8Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Ld& Vector8Ld::operator=(const Vector8Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8Ld::Vector8Ld(Vector8Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Ld& Vector8Ld::operator=(Vector8Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8Ld& Vector8Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8Ld Vector8Ld::operator+(const Vector8Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8Ld Vector8Ld::operator-(const Vector8Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8Ld Vector8Ld::operator*(const Vector8Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8Ld Vector8Ld::operator/(const Vector8Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8Ld Vector8Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8Ld Vector8Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8Ld Vector8Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8Ld Vector8Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8Ld& Vector8Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8Ld Vector8Ld::operator++ (int) noexcept {
		Vector8Ld temp = *this;
		++* this;
		return temp;
	}

	Vector8Ld Vector8Ld::operator-- (int) noexcept {
		Vector8Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8Ld& Vector8Ld::operator+= (const Vector8Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator-= (const Vector8Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator*= (const Vector8Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator/= (const Vector8Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8Ld& Vector8Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8Ld& Vector8Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8Ld::operator< (const Vector8Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8Ld::operator<= (const Vector8Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8Ld::operator>  (const Vector8Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8Ld::operator>= (const Vector8Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8Ld::operator==(const Vector8Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8Ld::operator!=(const Vector8Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8Ld::size() const noexcept { return 8; }
	void Vector8Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector8Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector8Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9Ld
	Vector9Ld::Vector9Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e, const long double f, const long double g, const long double h,
		const long double i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9Ld::Vector9Ld(const Vector9Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Ld& Vector9Ld::operator=(const Vector9Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9Ld::Vector9Ld(Vector9Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Ld& Vector9Ld::operator=(Vector9Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9Ld& Vector9Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9Ld Vector9Ld::operator+(const Vector9Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9Ld Vector9Ld::operator-(const Vector9Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9Ld Vector9Ld::operator*(const Vector9Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9Ld Vector9Ld::operator/(const Vector9Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9Ld Vector9Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9Ld Vector9Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9Ld Vector9Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9Ld Vector9Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9Ld& Vector9Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9Ld Vector9Ld::operator++ (int) noexcept {
		Vector9Ld temp = *this;
		++* this;
		return temp;
	}

	Vector9Ld Vector9Ld::operator-- (int) noexcept {
		Vector9Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9Ld& Vector9Ld::operator+= (const Vector9Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator-= (const Vector9Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator*= (const Vector9Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator/= (const Vector9Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9Ld& Vector9Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9Ld& Vector9Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9Ld::operator< (const Vector9Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9Ld::operator<= (const Vector9Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9Ld::operator>  (const Vector9Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9Ld::operator>= (const Vector9Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9Ld::operator==(const Vector9Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9Ld::operator!=(const Vector9Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9Ld::size() const noexcept { return 9; }
	void Vector9Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector9Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector9Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10Ld
	Vector10Ld::Vector10Ld(const long double a, const long double b, const long double c, const long double d,
		const long double e, const long double f, const long double g, const long double h,
		const long double i, const long double j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10Ld::Vector10Ld(const Vector10Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Ld& Vector10Ld::operator=(const Vector10Ld& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10Ld::Vector10Ld(Vector10Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Ld& Vector10Ld::operator=(Vector10Ld&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10Ld& Vector10Ld::operator=(const long double number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10Ld Vector10Ld::operator+(const Vector10Ld& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10Ld Vector10Ld::operator-(const Vector10Ld& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10Ld Vector10Ld::operator*(const Vector10Ld& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10Ld Vector10Ld::operator/(const Vector10Ld& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10Ld Vector10Ld::operator+(const long double number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10Ld Vector10Ld::operator-(const long double number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10Ld Vector10Ld::operator*(const long double number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10Ld Vector10Ld::operator/(const long double number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10Ld& Vector10Ld::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10Ld Vector10Ld::operator++ (int) noexcept {
		Vector10Ld temp = *this;
		++* this;
		return temp;
	}

	Vector10Ld Vector10Ld::operator-- (int) noexcept {
		Vector10Ld temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10Ld& Vector10Ld::operator+= (const Vector10Ld& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator-= (const Vector10Ld& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator*= (const Vector10Ld& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator/= (const Vector10Ld& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10Ld& Vector10Ld::operator+= (const long double number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator-= (const long double number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator*= (const long double number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10Ld& Vector10Ld::operator/= (const long double number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10Ld::operator< (const Vector10Ld& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10Ld::operator<= (const Vector10Ld& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10Ld::operator>  (const Vector10Ld& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10Ld::operator>= (const Vector10Ld& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10Ld::operator<  (const long double number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10Ld::operator<= (const long double number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10Ld::operator>  (const long double number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10Ld::operator>= (const long double number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10Ld::operator==(const Vector10Ld& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10Ld::operator!=(const Vector10Ld& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10Ld::operator==(const long double number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10Ld::operator!=(const long double number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10Ld::size() const noexcept { return 10; }
	void Vector10Ld::reset(const long double stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	long double& Vector10Ld::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	long double& Vector10Ld::at(const std::uint8_t index) noexcept
	{
		long double* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
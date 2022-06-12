#include "VectorUi64.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::uint64_t
		Bytes: 8
		Range: 0 to 18.446.744.073.709.551.615
	*/

	// Vector2ui64
	Vector2ui64::Vector2ui64(const std::uint64_t x, const std::uint64_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2ui64::Vector2ui64(const Vector2ui64& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui64& Vector2ui64::operator=(const Vector2ui64& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2ui64::Vector2ui64(Vector2ui64&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui64& Vector2ui64::operator=(Vector2ui64&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2ui64& Vector2ui64::operator=(const std::uint64_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2ui64 Vector2ui64::operator+(const Vector2ui64& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2ui64 Vector2ui64::operator-(const Vector2ui64& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2ui64 Vector2ui64::operator*(const Vector2ui64& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2ui64 Vector2ui64::operator/(const Vector2ui64& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2ui64 Vector2ui64::operator+(const std::uint64_t number) const noexcept {
		return { x + number, y + number };
	}

	Vector2ui64 Vector2ui64::operator-(const std::uint64_t number) const noexcept {
		return { x - number, y - number };
	}

	Vector2ui64 Vector2ui64::operator*(const std::uint64_t number) const noexcept {
		return { x * number, y * number };
	}

	Vector2ui64 Vector2ui64::operator/(const std::uint64_t number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2ui64& Vector2ui64::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2ui64 Vector2ui64::operator++ (int) noexcept {
		Vector2ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector2ui64 Vector2ui64::operator-- (int) noexcept {
		Vector2ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2ui64& Vector2ui64::operator+= (const Vector2ui64& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator-= (const Vector2ui64& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator*= (const Vector2ui64& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator/= (const Vector2ui64& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2ui64& Vector2ui64::operator+= (const std::uint64_t number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator-= (const std::uint64_t number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator*= (const std::uint64_t number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2ui64& Vector2ui64::operator/= (const std::uint64_t number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2ui64::operator< (const Vector2ui64& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2ui64::operator<= (const Vector2ui64& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2ui64::operator>  (const Vector2ui64& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2ui64::operator>= (const Vector2ui64& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2ui64::operator<  (const std::uint64_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2ui64::operator<= (const std::uint64_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2ui64::operator>  (const std::uint64_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2ui64::operator>= (const std::uint64_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2ui64::operator==(const Vector2ui64& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2ui64::operator!=(const Vector2ui64& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2ui64::operator==(const std::uint64_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2ui64::operator!=(const std::uint64_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2ui64::size() const noexcept { return 2; }
	void Vector2ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector2ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector2ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3ui64
	Vector3ui64::Vector3ui64(const std::uint64_t x, const std::uint64_t y, const std::uint64_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3ui64::Vector3ui64(const Vector3ui64& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui64& Vector3ui64::operator=(const Vector3ui64& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3ui64::Vector3ui64(Vector3ui64&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui64& Vector3ui64::operator=(Vector3ui64&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3ui64& Vector3ui64::operator=(const std::uint64_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3ui64 Vector3ui64::operator+(const Vector3ui64& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3ui64 Vector3ui64::operator-(const Vector3ui64& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3ui64 Vector3ui64::operator*(const Vector3ui64& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3ui64 Vector3ui64::operator/(const Vector3ui64& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3ui64 Vector3ui64::operator+(const std::uint64_t number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3ui64 Vector3ui64::operator-(const std::uint64_t number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3ui64 Vector3ui64::operator*(const std::uint64_t number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3ui64 Vector3ui64::operator/(const std::uint64_t number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3ui64& Vector3ui64::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3ui64 Vector3ui64::operator++ (int) noexcept {
		Vector3ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector3ui64 Vector3ui64::operator-- (int) noexcept {
		Vector3ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3ui64& Vector3ui64::operator+= (const Vector3ui64& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator-= (const Vector3ui64& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator*= (const Vector3ui64& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator/= (const Vector3ui64& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3ui64& Vector3ui64::operator+= (const std::uint64_t number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator-= (const std::uint64_t number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator*= (const std::uint64_t number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3ui64& Vector3ui64::operator/= (const std::uint64_t number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3ui64::operator< (const Vector3ui64& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3ui64::operator<= (const Vector3ui64& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3ui64::operator>  (const Vector3ui64& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3ui64::operator>= (const Vector3ui64& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3ui64::operator<  (const std::uint64_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3ui64::operator<= (const std::uint64_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3ui64::operator>  (const std::uint64_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3ui64::operator>= (const std::uint64_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3ui64::operator==(const Vector3ui64& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3ui64::operator!=(const Vector3ui64& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3ui64::operator==(const std::uint64_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3ui64::operator!=(const std::uint64_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3ui64::size() const noexcept { return 3; }
	void Vector3ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector3ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector3ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4ui64
	Vector4ui64::Vector4ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4ui64::Vector4ui64(const Vector4ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui64& Vector4ui64::operator=(const Vector4ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4ui64::Vector4ui64(Vector4ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui64& Vector4ui64::operator=(Vector4ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4ui64& Vector4ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4ui64 Vector4ui64::operator+(const Vector4ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4ui64 Vector4ui64::operator-(const Vector4ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4ui64 Vector4ui64::operator*(const Vector4ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4ui64 Vector4ui64::operator/(const Vector4ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4ui64 Vector4ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4ui64 Vector4ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4ui64 Vector4ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4ui64 Vector4ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4ui64& Vector4ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4ui64 Vector4ui64::operator++ (int) noexcept {
		Vector4ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector4ui64 Vector4ui64::operator-- (int) noexcept {
		Vector4ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4ui64& Vector4ui64::operator+= (const Vector4ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator-= (const Vector4ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator*= (const Vector4ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator/= (const Vector4ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4ui64& Vector4ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4ui64& Vector4ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4ui64::operator< (const Vector4ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4ui64::operator<= (const Vector4ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4ui64::operator>  (const Vector4ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4ui64::operator>= (const Vector4ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4ui64::operator==(const Vector4ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4ui64::operator!=(const Vector4ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4ui64::size() const noexcept { return 4; }
	void Vector4ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector4ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector4ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5ui64
	Vector5ui64::Vector5ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5ui64::Vector5ui64(const Vector5ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui64& Vector5ui64::operator=(const Vector5ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5ui64::Vector5ui64(Vector5ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui64& Vector5ui64::operator=(Vector5ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5ui64& Vector5ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5ui64 Vector5ui64::operator+(const Vector5ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5ui64 Vector5ui64::operator-(const Vector5ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5ui64 Vector5ui64::operator*(const Vector5ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5ui64 Vector5ui64::operator/(const Vector5ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5ui64 Vector5ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5ui64 Vector5ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5ui64 Vector5ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5ui64 Vector5ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5ui64& Vector5ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5ui64 Vector5ui64::operator++ (int) noexcept {
		Vector5ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector5ui64 Vector5ui64::operator-- (int) noexcept {
		Vector5ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5ui64& Vector5ui64::operator+= (const Vector5ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator-= (const Vector5ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator*= (const Vector5ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator/= (const Vector5ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5ui64& Vector5ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5ui64& Vector5ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5ui64::operator< (const Vector5ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5ui64::operator<= (const Vector5ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5ui64::operator>  (const Vector5ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5ui64::operator>= (const Vector5ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5ui64::operator==(const Vector5ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5ui64::operator!=(const Vector5ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5ui64::size() const noexcept { return 5; }
	void Vector5ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector5ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector5ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6ui64
	Vector6ui64::Vector6ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e, const std::uint64_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6ui64::Vector6ui64(const Vector6ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui64& Vector6ui64::operator=(const Vector6ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6ui64::Vector6ui64(Vector6ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui64& Vector6ui64::operator=(Vector6ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6ui64& Vector6ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6ui64 Vector6ui64::operator+(const Vector6ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6ui64 Vector6ui64::operator-(const Vector6ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6ui64 Vector6ui64::operator*(const Vector6ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6ui64 Vector6ui64::operator/(const Vector6ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6ui64 Vector6ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6ui64 Vector6ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6ui64 Vector6ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6ui64 Vector6ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6ui64& Vector6ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6ui64 Vector6ui64::operator++ (int) noexcept {
		Vector6ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector6ui64 Vector6ui64::operator-- (int) noexcept {
		Vector6ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6ui64& Vector6ui64::operator+= (const Vector6ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator-= (const Vector6ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator*= (const Vector6ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator/= (const Vector6ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6ui64& Vector6ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6ui64& Vector6ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6ui64::operator< (const Vector6ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6ui64::operator<= (const Vector6ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6ui64::operator>  (const Vector6ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6ui64::operator>= (const Vector6ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6ui64::operator==(const Vector6ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6ui64::operator!=(const Vector6ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6ui64::size() const noexcept { return 6; }
	void Vector6ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector6ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector6ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7ui64
	Vector7ui64::Vector7ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e, const std::uint64_t f, const std::uint64_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7ui64::Vector7ui64(const Vector7ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui64& Vector7ui64::operator=(const Vector7ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7ui64::Vector7ui64(Vector7ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui64& Vector7ui64::operator=(Vector7ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7ui64& Vector7ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7ui64 Vector7ui64::operator+(const Vector7ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7ui64 Vector7ui64::operator-(const Vector7ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7ui64 Vector7ui64::operator*(const Vector7ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7ui64 Vector7ui64::operator/(const Vector7ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7ui64 Vector7ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7ui64 Vector7ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7ui64 Vector7ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7ui64 Vector7ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7ui64& Vector7ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7ui64 Vector7ui64::operator++ (int) noexcept {
		Vector7ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector7ui64 Vector7ui64::operator-- (int) noexcept {
		Vector7ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7ui64& Vector7ui64::operator+= (const Vector7ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator-= (const Vector7ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator*= (const Vector7ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator/= (const Vector7ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7ui64& Vector7ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7ui64& Vector7ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7ui64::operator< (const Vector7ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7ui64::operator<= (const Vector7ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7ui64::operator>  (const Vector7ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7ui64::operator>= (const Vector7ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7ui64::operator==(const Vector7ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7ui64::operator!=(const Vector7ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7ui64::size() const noexcept { return 7; }
	void Vector7ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector7ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector7ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8ui64
	Vector8ui64::Vector8ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8ui64::Vector8ui64(const Vector8ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui64& Vector8ui64::operator=(const Vector8ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8ui64::Vector8ui64(Vector8ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui64& Vector8ui64::operator=(Vector8ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8ui64& Vector8ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8ui64 Vector8ui64::operator+(const Vector8ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8ui64 Vector8ui64::operator-(const Vector8ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8ui64 Vector8ui64::operator*(const Vector8ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8ui64 Vector8ui64::operator/(const Vector8ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8ui64 Vector8ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8ui64 Vector8ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8ui64 Vector8ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8ui64 Vector8ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8ui64& Vector8ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8ui64 Vector8ui64::operator++ (int) noexcept {
		Vector8ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector8ui64 Vector8ui64::operator-- (int) noexcept {
		Vector8ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8ui64& Vector8ui64::operator+= (const Vector8ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator-= (const Vector8ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator*= (const Vector8ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator/= (const Vector8ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8ui64& Vector8ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8ui64& Vector8ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8ui64::operator< (const Vector8ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8ui64::operator<= (const Vector8ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8ui64::operator>  (const Vector8ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8ui64::operator>= (const Vector8ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8ui64::operator==(const Vector8ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8ui64::operator!=(const Vector8ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8ui64::size() const noexcept { return 8; }
	void Vector8ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector8ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector8ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9ui64
	Vector9ui64::Vector9ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h,
		const std::uint64_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9ui64::Vector9ui64(const Vector9ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui64& Vector9ui64::operator=(const Vector9ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9ui64::Vector9ui64(Vector9ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui64& Vector9ui64::operator=(Vector9ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9ui64& Vector9ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9ui64 Vector9ui64::operator+(const Vector9ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9ui64 Vector9ui64::operator-(const Vector9ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9ui64 Vector9ui64::operator*(const Vector9ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9ui64 Vector9ui64::operator/(const Vector9ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9ui64 Vector9ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9ui64 Vector9ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9ui64 Vector9ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9ui64 Vector9ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9ui64& Vector9ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9ui64 Vector9ui64::operator++ (int) noexcept {
		Vector9ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector9ui64 Vector9ui64::operator-- (int) noexcept {
		Vector9ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9ui64& Vector9ui64::operator+= (const Vector9ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator-= (const Vector9ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator*= (const Vector9ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator/= (const Vector9ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9ui64& Vector9ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9ui64& Vector9ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9ui64::operator< (const Vector9ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9ui64::operator<= (const Vector9ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9ui64::operator>  (const Vector9ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9ui64::operator>= (const Vector9ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9ui64::operator==(const Vector9ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9ui64::operator!=(const Vector9ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9ui64::size() const noexcept { return 9; }
	void Vector9ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector9ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector9ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10ui64
	Vector10ui64::Vector10ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
		const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h,
		const std::uint64_t i, const std::uint64_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10ui64::Vector10ui64(const Vector10ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui64& Vector10ui64::operator=(const Vector10ui64& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10ui64::Vector10ui64(Vector10ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui64& Vector10ui64::operator=(Vector10ui64&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10ui64& Vector10ui64::operator=(const std::uint64_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10ui64 Vector10ui64::operator+(const Vector10ui64& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10ui64 Vector10ui64::operator-(const Vector10ui64& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10ui64 Vector10ui64::operator*(const Vector10ui64& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10ui64 Vector10ui64::operator/(const Vector10ui64& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10ui64 Vector10ui64::operator+(const std::uint64_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10ui64 Vector10ui64::operator-(const std::uint64_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10ui64 Vector10ui64::operator*(const std::uint64_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10ui64 Vector10ui64::operator/(const std::uint64_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10ui64& Vector10ui64::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10ui64 Vector10ui64::operator++ (int) noexcept {
		Vector10ui64 temp = *this;
		++* this;
		return temp;
	}

	Vector10ui64 Vector10ui64::operator-- (int) noexcept {
		Vector10ui64 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10ui64& Vector10ui64::operator+= (const Vector10ui64& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator-= (const Vector10ui64& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator*= (const Vector10ui64& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator/= (const Vector10ui64& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10ui64& Vector10ui64::operator+= (const std::uint64_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator-= (const std::uint64_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator*= (const std::uint64_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10ui64& Vector10ui64::operator/= (const std::uint64_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10ui64::operator< (const Vector10ui64& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10ui64::operator<= (const Vector10ui64& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10ui64::operator>  (const Vector10ui64& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10ui64::operator>= (const Vector10ui64& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10ui64::operator<  (const std::uint64_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10ui64::operator<= (const std::uint64_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10ui64::operator>  (const std::uint64_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10ui64::operator>= (const std::uint64_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10ui64::operator==(const Vector10ui64& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10ui64::operator!=(const Vector10ui64& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10ui64::operator==(const std::uint64_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10ui64::operator!=(const std::uint64_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10ui64::size() const noexcept { return 10; }
	void Vector10ui64::reset(const std::uint64_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint64_t& Vector10ui64::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint64_t& Vector10ui64::at(const std::uint8_t index) noexcept
	{
		std::uint64_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
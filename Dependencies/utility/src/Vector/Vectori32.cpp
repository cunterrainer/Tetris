#include "Vectori32.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::int32_t
		Bytes: 4
		Range: -2.147.483.648 to 2.147.483.647
	*/

	// Vector2i32
	Vector2i32::Vector2i32(const std::int32_t x, const std::int32_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2i32::Vector2i32(const Vector2i32& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i32& Vector2i32::operator=(const Vector2i32& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2i32::Vector2i32(Vector2i32&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i32& Vector2i32::operator=(Vector2i32&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2i32& Vector2i32::operator=(const std::int32_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2i32 Vector2i32::operator+(const Vector2i32& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2i32 Vector2i32::operator-(const Vector2i32& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2i32 Vector2i32::operator*(const Vector2i32& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2i32 Vector2i32::operator/(const Vector2i32& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2i32 Vector2i32::operator+(const std::int32_t number) const noexcept {
		return { x + number, y + number };
	}

	Vector2i32 Vector2i32::operator-(const std::int32_t number) const noexcept {
		return { x - number, y - number };
	}

	Vector2i32 Vector2i32::operator*(const std::int32_t number) const noexcept {
		return { x * number, y * number };
	}

	Vector2i32 Vector2i32::operator/(const std::int32_t number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2i32& Vector2i32::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2i32& Vector2i32::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2i32 Vector2i32::operator++ (int) noexcept {
		Vector2i32 temp = *this;
		++* this;
		return temp;
	}

	Vector2i32 Vector2i32::operator-- (int) noexcept {
		Vector2i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2i32& Vector2i32::operator+= (const Vector2i32& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2i32& Vector2i32::operator-= (const Vector2i32& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2i32& Vector2i32::operator*= (const Vector2i32& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2i32& Vector2i32::operator/= (const Vector2i32& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2i32& Vector2i32::operator+= (const std::int32_t number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2i32& Vector2i32::operator-= (const std::int32_t number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2i32& Vector2i32::operator*= (const std::int32_t number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2i32& Vector2i32::operator/= (const std::int32_t number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2i32::operator< (const Vector2i32& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2i32::operator<= (const Vector2i32& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2i32::operator>  (const Vector2i32& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2i32::operator>= (const Vector2i32& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2i32::operator<  (const std::int32_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2i32::operator<= (const std::int32_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2i32::operator>  (const std::int32_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2i32::operator>= (const std::int32_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2i32::operator==(const Vector2i32& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2i32::operator!=(const Vector2i32& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2i32::operator==(const std::int32_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2i32::operator!=(const std::int32_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2i32::size() const noexcept { return 2; }
	void Vector2i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector2i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector2i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3i32
	Vector3i32::Vector3i32(const std::int32_t x, const std::int32_t y, const std::int32_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3i32::Vector3i32(const Vector3i32& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i32& Vector3i32::operator=(const Vector3i32& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3i32::Vector3i32(Vector3i32&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i32& Vector3i32::operator=(Vector3i32&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3i32& Vector3i32::operator=(const std::int32_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3i32 Vector3i32::operator+(const Vector3i32& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3i32 Vector3i32::operator-(const Vector3i32& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3i32 Vector3i32::operator*(const Vector3i32& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3i32 Vector3i32::operator/(const Vector3i32& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3i32 Vector3i32::operator+(const std::int32_t number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3i32 Vector3i32::operator-(const std::int32_t number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3i32 Vector3i32::operator*(const std::int32_t number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3i32 Vector3i32::operator/(const std::int32_t number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3i32& Vector3i32::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3i32& Vector3i32::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3i32 Vector3i32::operator++ (int) noexcept {
		Vector3i32 temp = *this;
		++* this;
		return temp;
	}

	Vector3i32 Vector3i32::operator-- (int) noexcept {
		Vector3i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3i32& Vector3i32::operator+= (const Vector3i32& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3i32& Vector3i32::operator-= (const Vector3i32& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3i32& Vector3i32::operator*= (const Vector3i32& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3i32& Vector3i32::operator/= (const Vector3i32& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3i32& Vector3i32::operator+= (const std::int32_t number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3i32& Vector3i32::operator-= (const std::int32_t number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3i32& Vector3i32::operator*= (const std::int32_t number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3i32& Vector3i32::operator/= (const std::int32_t number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3i32::operator< (const Vector3i32& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3i32::operator<= (const Vector3i32& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3i32::operator>  (const Vector3i32& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3i32::operator>= (const Vector3i32& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3i32::operator<  (const std::int32_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3i32::operator<= (const std::int32_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3i32::operator>  (const std::int32_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3i32::operator>= (const std::int32_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3i32::operator==(const Vector3i32& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3i32::operator!=(const Vector3i32& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3i32::operator==(const std::int32_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3i32::operator!=(const std::int32_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3i32::size() const noexcept { return 3; }
	void Vector3i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector3i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector3i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4i32
	Vector4i32::Vector4i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4i32::Vector4i32(const Vector4i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i32& Vector4i32::operator=(const Vector4i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4i32::Vector4i32(Vector4i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i32& Vector4i32::operator=(Vector4i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4i32& Vector4i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4i32 Vector4i32::operator+(const Vector4i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4i32 Vector4i32::operator-(const Vector4i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4i32 Vector4i32::operator*(const Vector4i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4i32 Vector4i32::operator/(const Vector4i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4i32 Vector4i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4i32 Vector4i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4i32 Vector4i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4i32 Vector4i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4i32& Vector4i32::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4i32& Vector4i32::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4i32 Vector4i32::operator++ (int) noexcept {
		Vector4i32 temp = *this;
		++* this;
		return temp;
	}

	Vector4i32 Vector4i32::operator-- (int) noexcept {
		Vector4i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4i32& Vector4i32::operator+= (const Vector4i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4i32& Vector4i32::operator-= (const Vector4i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4i32& Vector4i32::operator*= (const Vector4i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4i32& Vector4i32::operator/= (const Vector4i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4i32& Vector4i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4i32& Vector4i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4i32& Vector4i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4i32& Vector4i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4i32::operator< (const Vector4i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4i32::operator<= (const Vector4i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4i32::operator>  (const Vector4i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4i32::operator>= (const Vector4i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4i32::operator==(const Vector4i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4i32::operator!=(const Vector4i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4i32::size() const noexcept { return 4; }
	void Vector4i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector4i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector4i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5i32
	Vector5i32::Vector5i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5i32::Vector5i32(const Vector5i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i32& Vector5i32::operator=(const Vector5i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5i32::Vector5i32(Vector5i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i32& Vector5i32::operator=(Vector5i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5i32& Vector5i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5i32 Vector5i32::operator+(const Vector5i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5i32 Vector5i32::operator-(const Vector5i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5i32 Vector5i32::operator*(const Vector5i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5i32 Vector5i32::operator/(const Vector5i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5i32 Vector5i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5i32 Vector5i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5i32 Vector5i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5i32 Vector5i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5i32& Vector5i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5i32& Vector5i32::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5i32 Vector5i32::operator++ (int) noexcept {
		Vector5i32 temp = *this;
		++* this;
		return temp;
	}

	Vector5i32 Vector5i32::operator-- (int) noexcept {
		Vector5i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5i32& Vector5i32::operator+= (const Vector5i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5i32& Vector5i32::operator-= (const Vector5i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5i32& Vector5i32::operator*= (const Vector5i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5i32& Vector5i32::operator/= (const Vector5i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5i32& Vector5i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5i32& Vector5i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5i32& Vector5i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5i32& Vector5i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5i32::operator< (const Vector5i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5i32::operator<= (const Vector5i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5i32::operator>  (const Vector5i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5i32::operator>= (const Vector5i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5i32::operator==(const Vector5i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5i32::operator!=(const Vector5i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5i32::size() const noexcept { return 5; }
	void Vector5i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector5i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector5i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6i32
	Vector6i32::Vector6i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e, const std::int32_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6i32::Vector6i32(const Vector6i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i32& Vector6i32::operator=(const Vector6i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6i32::Vector6i32(Vector6i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i32& Vector6i32::operator=(Vector6i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6i32& Vector6i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6i32 Vector6i32::operator+(const Vector6i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6i32 Vector6i32::operator-(const Vector6i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6i32 Vector6i32::operator*(const Vector6i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6i32 Vector6i32::operator/(const Vector6i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6i32 Vector6i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6i32 Vector6i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6i32 Vector6i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6i32 Vector6i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6i32& Vector6i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6i32& Vector6i32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6i32 Vector6i32::operator++ (int) noexcept {
		Vector6i32 temp = *this;
		++* this;
		return temp;
	}

	Vector6i32 Vector6i32::operator-- (int) noexcept {
		Vector6i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6i32& Vector6i32::operator+= (const Vector6i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6i32& Vector6i32::operator-= (const Vector6i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6i32& Vector6i32::operator*= (const Vector6i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6i32& Vector6i32::operator/= (const Vector6i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6i32& Vector6i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6i32& Vector6i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6i32& Vector6i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6i32& Vector6i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6i32::operator< (const Vector6i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6i32::operator<= (const Vector6i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6i32::operator>  (const Vector6i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6i32::operator>= (const Vector6i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6i32::operator==(const Vector6i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6i32::operator!=(const Vector6i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6i32::size() const noexcept { return 6; }
	void Vector6i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector6i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector6i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7i32
	Vector7i32::Vector7i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e, const std::int32_t f, const std::int32_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7i32::Vector7i32(const Vector7i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i32& Vector7i32::operator=(const Vector7i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7i32::Vector7i32(Vector7i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i32& Vector7i32::operator=(Vector7i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7i32& Vector7i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7i32 Vector7i32::operator+(const Vector7i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7i32 Vector7i32::operator-(const Vector7i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7i32 Vector7i32::operator*(const Vector7i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7i32 Vector7i32::operator/(const Vector7i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7i32 Vector7i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7i32 Vector7i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7i32 Vector7i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7i32 Vector7i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7i32& Vector7i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7i32& Vector7i32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7i32 Vector7i32::operator++ (int) noexcept {
		Vector7i32 temp = *this;
		++* this;
		return temp;
	}

	Vector7i32 Vector7i32::operator-- (int) noexcept {
		Vector7i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7i32& Vector7i32::operator+= (const Vector7i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7i32& Vector7i32::operator-= (const Vector7i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7i32& Vector7i32::operator*= (const Vector7i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7i32& Vector7i32::operator/= (const Vector7i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7i32& Vector7i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7i32& Vector7i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7i32& Vector7i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7i32& Vector7i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7i32::operator< (const Vector7i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7i32::operator<= (const Vector7i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7i32::operator>  (const Vector7i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7i32::operator>= (const Vector7i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7i32::operator==(const Vector7i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7i32::operator!=(const Vector7i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7i32::size() const noexcept { return 7; }
	void Vector7i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector7i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector7i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8i32
	Vector8i32::Vector8i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8i32::Vector8i32(const Vector8i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i32& Vector8i32::operator=(const Vector8i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8i32::Vector8i32(Vector8i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i32& Vector8i32::operator=(Vector8i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8i32& Vector8i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8i32 Vector8i32::operator+(const Vector8i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8i32 Vector8i32::operator-(const Vector8i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8i32 Vector8i32::operator*(const Vector8i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8i32 Vector8i32::operator/(const Vector8i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8i32 Vector8i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8i32 Vector8i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8i32 Vector8i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8i32 Vector8i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8i32& Vector8i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8i32& Vector8i32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8i32 Vector8i32::operator++ (int) noexcept {
		Vector8i32 temp = *this;
		++* this;
		return temp;
	}

	Vector8i32 Vector8i32::operator-- (int) noexcept {
		Vector8i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8i32& Vector8i32::operator+= (const Vector8i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8i32& Vector8i32::operator-= (const Vector8i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8i32& Vector8i32::operator*= (const Vector8i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8i32& Vector8i32::operator/= (const Vector8i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8i32& Vector8i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8i32& Vector8i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8i32& Vector8i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8i32& Vector8i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8i32::operator< (const Vector8i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8i32::operator<= (const Vector8i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8i32::operator>  (const Vector8i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8i32::operator>= (const Vector8i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8i32::operator==(const Vector8i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8i32::operator!=(const Vector8i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8i32::size() const noexcept { return 8; }
	void Vector8i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector8i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector8i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9i32
	Vector9i32::Vector9i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h,
		const std::int32_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9i32::Vector9i32(const Vector9i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i32& Vector9i32::operator=(const Vector9i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9i32::Vector9i32(Vector9i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i32& Vector9i32::operator=(Vector9i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9i32& Vector9i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9i32 Vector9i32::operator+(const Vector9i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9i32 Vector9i32::operator-(const Vector9i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9i32 Vector9i32::operator*(const Vector9i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9i32 Vector9i32::operator/(const Vector9i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9i32 Vector9i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9i32 Vector9i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9i32 Vector9i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9i32 Vector9i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9i32& Vector9i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9i32& Vector9i32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9i32 Vector9i32::operator++ (int) noexcept {
		Vector9i32 temp = *this;
		++* this;
		return temp;
	}

	Vector9i32 Vector9i32::operator-- (int) noexcept {
		Vector9i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9i32& Vector9i32::operator+= (const Vector9i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9i32& Vector9i32::operator-= (const Vector9i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9i32& Vector9i32::operator*= (const Vector9i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9i32& Vector9i32::operator/= (const Vector9i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9i32& Vector9i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9i32& Vector9i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9i32& Vector9i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9i32& Vector9i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9i32::operator< (const Vector9i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9i32::operator<= (const Vector9i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9i32::operator>  (const Vector9i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9i32::operator>= (const Vector9i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9i32::operator==(const Vector9i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9i32::operator!=(const Vector9i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9i32::size() const noexcept { return 9; }
	void Vector9i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector9i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector9i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10i32
	Vector10i32::Vector10i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
		const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h,
		const std::int32_t i, const std::int32_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10i32::Vector10i32(const Vector10i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i32& Vector10i32::operator=(const Vector10i32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10i32::Vector10i32(Vector10i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i32& Vector10i32::operator=(Vector10i32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10i32& Vector10i32::operator=(const std::int32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10i32 Vector10i32::operator+(const Vector10i32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10i32 Vector10i32::operator-(const Vector10i32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10i32 Vector10i32::operator*(const Vector10i32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10i32 Vector10i32::operator/(const Vector10i32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10i32 Vector10i32::operator+(const std::int32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10i32 Vector10i32::operator-(const std::int32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10i32 Vector10i32::operator*(const std::int32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10i32 Vector10i32::operator/(const std::int32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10i32& Vector10i32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10i32& Vector10i32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10i32 Vector10i32::operator++ (int) noexcept {
		Vector10i32 temp = *this;
		++* this;
		return temp;
	}

	Vector10i32 Vector10i32::operator-- (int) noexcept {
		Vector10i32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10i32& Vector10i32::operator+= (const Vector10i32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10i32& Vector10i32::operator-= (const Vector10i32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10i32& Vector10i32::operator*= (const Vector10i32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10i32& Vector10i32::operator/= (const Vector10i32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10i32& Vector10i32::operator+= (const std::int32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10i32& Vector10i32::operator-= (const std::int32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10i32& Vector10i32::operator*= (const std::int32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10i32& Vector10i32::operator/= (const std::int32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10i32::operator< (const Vector10i32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10i32::operator<= (const Vector10i32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10i32::operator>  (const Vector10i32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10i32::operator>= (const Vector10i32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10i32::operator<  (const std::int32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10i32::operator<= (const std::int32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10i32::operator>  (const std::int32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10i32::operator>= (const std::int32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10i32::operator==(const Vector10i32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10i32::operator!=(const Vector10i32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10i32::operator==(const std::int32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10i32::operator!=(const std::int32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10i32::size() const noexcept { return 10; }
	void Vector10i32::reset(const std::int32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int32_t& Vector10i32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int32_t& Vector10i32::at(const std::uint8_t index) noexcept
	{
		std::int32_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
#include "VectorUi32.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::uint32_t
		Bytes: 4
		Range: 0 to 4.294.967.295
	*/

	// Vector2ui32
	Vector2ui32::Vector2ui32(const std::uint32_t x, const std::uint32_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2ui32::Vector2ui32(const Vector2ui32& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui32& Vector2ui32::operator=(const Vector2ui32& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2ui32::Vector2ui32(Vector2ui32&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2ui32& Vector2ui32::operator=(Vector2ui32&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2ui32& Vector2ui32::operator=(const std::uint32_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2ui32 Vector2ui32::operator+(const Vector2ui32& v) const noexcept {
		return { x + v.x, y + v.y };
	}

	Vector2ui32 Vector2ui32::operator-(const Vector2ui32& v) const noexcept {
		return { x - v.x, y - v.y };
	}

	Vector2ui32 Vector2ui32::operator*(const Vector2ui32& v) const noexcept {
		return { x * v.x, y * v.y };
	}

	Vector2ui32 Vector2ui32::operator/(const Vector2ui32& v) const noexcept {
		return { x / v.x, y / v.y };
	}


	Vector2ui32 Vector2ui32::operator+(const std::uint32_t number) const noexcept {
		return { x + number, y + number };
	}

	Vector2ui32 Vector2ui32::operator-(const std::uint32_t number) const noexcept {
		return { x - number, y - number };
	}

	Vector2ui32 Vector2ui32::operator*(const std::uint32_t number) const noexcept {
		return { x * number, y * number };
	}

	Vector2ui32 Vector2ui32::operator/(const std::uint32_t number) const noexcept {
		return { x / number, y / number };
	}


	// increment / decrement
	Vector2ui32& Vector2ui32::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2ui32 Vector2ui32::operator++ (int) noexcept {
		Vector2ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector2ui32 Vector2ui32::operator-- (int) noexcept {
		Vector2ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2ui32& Vector2ui32::operator+= (const Vector2ui32& right) noexcept {
		x += right.x; y += right.y;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator-= (const Vector2ui32& right) noexcept {
		x -= right.x; y -= right.y;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator*= (const Vector2ui32& right) noexcept {
		x *= right.x; y *= right.y;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator/= (const Vector2ui32& right) noexcept {
		x /= right.x; y /= right.y;
		return *this;
	}


	Vector2ui32& Vector2ui32::operator+= (const std::uint32_t number) noexcept {
		x += number; y += number;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator-= (const std::uint32_t number) noexcept {
		x -= number; y -= number;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator*= (const std::uint32_t number) noexcept {
		x *= number; y *= number;
		return *this;
	}

	Vector2ui32& Vector2ui32::operator/= (const std::uint32_t number) noexcept {
		x /= number; y /= number;
		return *this;
	}


	// less than / greater than
	bool Vector2ui32::operator< (const Vector2ui32& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2ui32::operator<= (const Vector2ui32& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2ui32::operator>  (const Vector2ui32& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2ui32::operator>= (const Vector2ui32& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2ui32::operator<  (const std::uint32_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2ui32::operator<= (const std::uint32_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2ui32::operator>  (const std::uint32_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2ui32::operator>= (const std::uint32_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2ui32::operator==(const Vector2ui32& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2ui32::operator!=(const Vector2ui32& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2ui32::operator==(const std::uint32_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2ui32::operator!=(const std::uint32_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2ui32::size() const noexcept { return 2; }
	void Vector2ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector2ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector2ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3ui32
	Vector3ui32::Vector3ui32(const std::uint32_t x, const std::uint32_t y, const std::uint32_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3ui32::Vector3ui32(const Vector3ui32& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui32& Vector3ui32::operator=(const Vector3ui32& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3ui32::Vector3ui32(Vector3ui32&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3ui32& Vector3ui32::operator=(Vector3ui32&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3ui32& Vector3ui32::operator=(const std::uint32_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3ui32 Vector3ui32::operator+(const Vector3ui32& v) const noexcept {
		return { x + v.x, y + v.y, z + v.z };
	}

	Vector3ui32 Vector3ui32::operator-(const Vector3ui32& v) const noexcept {
		return { x - v.x, y - v.y, z - v.z };
	}

	Vector3ui32 Vector3ui32::operator*(const Vector3ui32& v) const noexcept {
		return { x * v.x, y * v.y, z * v.z };
	}

	Vector3ui32 Vector3ui32::operator/(const Vector3ui32& v) const noexcept {
		return { x / v.x, y / v.y, z / v.z };
	}

 
	Vector3ui32 Vector3ui32::operator+(const std::uint32_t number) const noexcept {
		return { x + number, y + number, z + number };
	}

	Vector3ui32 Vector3ui32::operator-(const std::uint32_t number) const noexcept {
		return { x - number, y - number, z - number };
	}

	Vector3ui32 Vector3ui32::operator*(const std::uint32_t number) const noexcept {
		return { x * number, y * number, z * number };
	}

	Vector3ui32 Vector3ui32::operator/(const std::uint32_t number) const noexcept {
		return { x / number, y / number, z / number };
	}


	// increment / decrement
	Vector3ui32& Vector3ui32::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3ui32 Vector3ui32::operator++ (int) noexcept {
		Vector3ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector3ui32 Vector3ui32::operator-- (int) noexcept {
		Vector3ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3ui32& Vector3ui32::operator+= (const Vector3ui32& right) noexcept {
		x += right.x; y += right.y; z += right.z;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator-= (const Vector3ui32& right) noexcept {
		x -= right.x; y -= right.y; z -= right.z;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator*= (const Vector3ui32& right) noexcept {
		x *= right.x; y *= right.y; z *= right.z;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator/= (const Vector3ui32& right) noexcept {
		x /= right.x; y /= right.y; z /= right.z;
		return *this;
	}


	Vector3ui32& Vector3ui32::operator+= (const std::uint32_t number) noexcept {
		x += number; y += number; z += number;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator-= (const std::uint32_t number) noexcept {
		x -= number; y -= number; z -= number;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator*= (const std::uint32_t number) noexcept {
		x *= number; y *= number; z *= number;
		return *this;
	}

	Vector3ui32& Vector3ui32::operator/= (const std::uint32_t number) noexcept {
		x /= number; y /= number; z /= number;
		return *this;
	}


	// less than / greater than
	bool Vector3ui32::operator< (const Vector3ui32& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3ui32::operator<= (const Vector3ui32& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3ui32::operator>  (const Vector3ui32& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3ui32::operator>= (const Vector3ui32& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3ui32::operator<  (const std::uint32_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3ui32::operator<= (const std::uint32_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3ui32::operator>  (const std::uint32_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3ui32::operator>= (const std::uint32_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3ui32::operator==(const Vector3ui32& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3ui32::operator!=(const Vector3ui32& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3ui32::operator==(const std::uint32_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3ui32::operator!=(const std::uint32_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3ui32::size() const noexcept { return 3; }
	void Vector3ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector3ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector3ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4ui32
	Vector4ui32::Vector4ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4ui32::Vector4ui32(const Vector4ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui32& Vector4ui32::operator=(const Vector4ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4ui32::Vector4ui32(Vector4ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4ui32& Vector4ui32::operator=(Vector4ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4ui32& Vector4ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4ui32 Vector4ui32::operator+(const Vector4ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d };
	}

	Vector4ui32 Vector4ui32::operator-(const Vector4ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d };
	}

	Vector4ui32 Vector4ui32::operator*(const Vector4ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d };
	}

	Vector4ui32 Vector4ui32::operator/(const Vector4ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d };
	}


	Vector4ui32 Vector4ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number };
	}

	Vector4ui32 Vector4ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number };
	}

	Vector4ui32 Vector4ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number };
	}

	Vector4ui32 Vector4ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number };
	}


	// increment / decrement
	Vector4ui32& Vector4ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4ui32 Vector4ui32::operator++ (int) noexcept {
		Vector4ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector4ui32 Vector4ui32::operator-- (int) noexcept {
		Vector4ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4ui32& Vector4ui32::operator+= (const Vector4ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator-= (const Vector4ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator*= (const Vector4ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator/= (const Vector4ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d;
		return *this;
	}


	Vector4ui32& Vector4ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number;
		return *this;
	}

	Vector4ui32& Vector4ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number;
		return *this;
	}


	// less than / greater than
	bool Vector4ui32::operator< (const Vector4ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4ui32::operator<= (const Vector4ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4ui32::operator>  (const Vector4ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4ui32::operator>= (const Vector4ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4ui32::operator==(const Vector4ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4ui32::operator!=(const Vector4ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4ui32::size() const noexcept { return 4; }
	void Vector4ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector4ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector4ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5ui32
	Vector5ui32::Vector5ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5ui32::Vector5ui32(const Vector5ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui32& Vector5ui32::operator=(const Vector5ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5ui32::Vector5ui32(Vector5ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5ui32& Vector5ui32::operator=(Vector5ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5ui32& Vector5ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5ui32 Vector5ui32::operator+(const Vector5ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
	}

	Vector5ui32 Vector5ui32::operator-(const Vector5ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
	}

	Vector5ui32 Vector5ui32::operator*(const Vector5ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
	}

	Vector5ui32 Vector5ui32::operator/(const Vector5ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
	}


	Vector5ui32 Vector5ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number };
	}

	Vector5ui32 Vector5ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number };
	}

	Vector5ui32 Vector5ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number };
	}

	Vector5ui32 Vector5ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number };
	}


	// increment / decrement
	Vector5ui32& Vector5ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5ui32 Vector5ui32::operator++ (int) noexcept {
		Vector5ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector5ui32 Vector5ui32::operator-- (int) noexcept {
		Vector5ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5ui32& Vector5ui32::operator+= (const Vector5ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator-= (const Vector5ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator*= (const Vector5ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator/= (const Vector5ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
		return *this;
	}


	Vector5ui32& Vector5ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number;
		return *this;
	}

	Vector5ui32& Vector5ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number;
		return *this;
	}


	// less than / greater than
	bool Vector5ui32::operator< (const Vector5ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5ui32::operator<= (const Vector5ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5ui32::operator>  (const Vector5ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5ui32::operator>= (const Vector5ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5ui32::operator==(const Vector5ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5ui32::operator!=(const Vector5ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5ui32::size() const noexcept { return 5; }
	void Vector5ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector5ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector5ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6ui32
	Vector6ui32::Vector6ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e, const std::uint32_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6ui32::Vector6ui32(const Vector6ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui32& Vector6ui32::operator=(const Vector6ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6ui32::Vector6ui32(Vector6ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6ui32& Vector6ui32::operator=(Vector6ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6ui32& Vector6ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6ui32 Vector6ui32::operator+(const Vector6ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
	}

	Vector6ui32 Vector6ui32::operator-(const Vector6ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
	}

	Vector6ui32 Vector6ui32::operator*(const Vector6ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
	}

	Vector6ui32 Vector6ui32::operator/(const Vector6ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
	}


	Vector6ui32 Vector6ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number };
	}

	Vector6ui32 Vector6ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number };
	}

	Vector6ui32 Vector6ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number };
	}

	Vector6ui32 Vector6ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number };
	}


	// increment / decrement
	Vector6ui32& Vector6ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6ui32 Vector6ui32::operator++ (int) noexcept {
		Vector6ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector6ui32 Vector6ui32::operator-- (int) noexcept {
		Vector6ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6ui32& Vector6ui32::operator+= (const Vector6ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator-= (const Vector6ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator*= (const Vector6ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator/= (const Vector6ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
		return *this;
	}


	Vector6ui32& Vector6ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
		return *this;
	}

	Vector6ui32& Vector6ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
		return *this;
	}


	// less than / greater than
	bool Vector6ui32::operator< (const Vector6ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6ui32::operator<= (const Vector6ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6ui32::operator>  (const Vector6ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6ui32::operator>= (const Vector6ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6ui32::operator==(const Vector6ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6ui32::operator!=(const Vector6ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6ui32::size() const noexcept { return 6; }
	void Vector6ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector6ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector6ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7ui32
	Vector7ui32::Vector7ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e, const std::uint32_t f, const std::uint32_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7ui32::Vector7ui32(const Vector7ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui32& Vector7ui32::operator=(const Vector7ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7ui32::Vector7ui32(Vector7ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7ui32& Vector7ui32::operator=(Vector7ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7ui32& Vector7ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7ui32 Vector7ui32::operator+(const Vector7ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
	}

	Vector7ui32 Vector7ui32::operator-(const Vector7ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
	}

	Vector7ui32 Vector7ui32::operator*(const Vector7ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
	}

	Vector7ui32 Vector7ui32::operator/(const Vector7ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
	}


	Vector7ui32 Vector7ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
	}

	Vector7ui32 Vector7ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
	}

	Vector7ui32 Vector7ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
	}

	Vector7ui32 Vector7ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
	}


	// increment / decrement
	Vector7ui32& Vector7ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7ui32 Vector7ui32::operator++ (int) noexcept {
		Vector7ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector7ui32 Vector7ui32::operator-- (int) noexcept {
		Vector7ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7ui32& Vector7ui32::operator+= (const Vector7ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator-= (const Vector7ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator*= (const Vector7ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator/= (const Vector7ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
		return *this;
	}


	Vector7ui32& Vector7ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
		return *this;
	}

	Vector7ui32& Vector7ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
		return *this;
	}


	// less than / greater than
	bool Vector7ui32::operator< (const Vector7ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7ui32::operator<= (const Vector7ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7ui32::operator>  (const Vector7ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7ui32::operator>= (const Vector7ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7ui32::operator==(const Vector7ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7ui32::operator!=(const Vector7ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7ui32::size() const noexcept { return 7; }
	void Vector7ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector7ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector7ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8ui32
	Vector8ui32::Vector8ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8ui32::Vector8ui32(const Vector8ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui32& Vector8ui32::operator=(const Vector8ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8ui32::Vector8ui32(Vector8ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8ui32& Vector8ui32::operator=(Vector8ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8ui32& Vector8ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8ui32 Vector8ui32::operator+(const Vector8ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
	}

	Vector8ui32 Vector8ui32::operator-(const Vector8ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
	}

	Vector8ui32 Vector8ui32::operator*(const Vector8ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
	}

	Vector8ui32 Vector8ui32::operator/(const Vector8ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
	}


	Vector8ui32 Vector8ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
	}

	Vector8ui32 Vector8ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
	}

	Vector8ui32 Vector8ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
	}

	Vector8ui32 Vector8ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
	}


	// increment / decrement
	Vector8ui32& Vector8ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8ui32 Vector8ui32::operator++ (int) noexcept {
		Vector8ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector8ui32 Vector8ui32::operator-- (int) noexcept {
		Vector8ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8ui32& Vector8ui32::operator+= (const Vector8ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator-= (const Vector8ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator*= (const Vector8ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator/= (const Vector8ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
		return *this;
	}


	Vector8ui32& Vector8ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
		return *this;
	}

	Vector8ui32& Vector8ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
		return *this;
	}


	// less than / greater than
	bool Vector8ui32::operator< (const Vector8ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8ui32::operator<= (const Vector8ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8ui32::operator>  (const Vector8ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8ui32::operator>= (const Vector8ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8ui32::operator==(const Vector8ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8ui32::operator!=(const Vector8ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8ui32::size() const noexcept { return 8; }
	void Vector8ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector8ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector8ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9ui32
	Vector9ui32::Vector9ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
		const std::uint32_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9ui32::Vector9ui32(const Vector9ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui32& Vector9ui32::operator=(const Vector9ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9ui32::Vector9ui32(Vector9ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9ui32& Vector9ui32::operator=(Vector9ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9ui32& Vector9ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9ui32 Vector9ui32::operator+(const Vector9ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
	}

	Vector9ui32 Vector9ui32::operator-(const Vector9ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
	}

	Vector9ui32 Vector9ui32::operator*(const Vector9ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
	}

	Vector9ui32 Vector9ui32::operator/(const Vector9ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
	}


	Vector9ui32 Vector9ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
	}

	Vector9ui32 Vector9ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
	}

	Vector9ui32 Vector9ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
	}

	Vector9ui32 Vector9ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
	}


	// increment / decrement
	Vector9ui32& Vector9ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9ui32 Vector9ui32::operator++ (int) noexcept {
		Vector9ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector9ui32 Vector9ui32::operator-- (int) noexcept {
		Vector9ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9ui32& Vector9ui32::operator+= (const Vector9ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator-= (const Vector9ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator*= (const Vector9ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator/= (const Vector9ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
		return *this;
	}


	Vector9ui32& Vector9ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
		return *this;
	}

	Vector9ui32& Vector9ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
		return *this;
	}


	// less than / greater than
	bool Vector9ui32::operator< (const Vector9ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9ui32::operator<= (const Vector9ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9ui32::operator>  (const Vector9ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9ui32::operator>= (const Vector9ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9ui32::operator==(const Vector9ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9ui32::operator!=(const Vector9ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9ui32::size() const noexcept { return 9; }
	void Vector9ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector9ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector9ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10ui32
	Vector10ui32::Vector10ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
		const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
		const std::uint32_t i, const std::uint32_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10ui32::Vector10ui32(const Vector10ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui32& Vector10ui32::operator=(const Vector10ui32& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10ui32::Vector10ui32(Vector10ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10ui32& Vector10ui32::operator=(Vector10ui32&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10ui32& Vector10ui32::operator=(const std::uint32_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10ui32 Vector10ui32::operator+(const Vector10ui32& v) const noexcept {
		return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
	}

	Vector10ui32 Vector10ui32::operator-(const Vector10ui32& v) const noexcept {
		return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
	}

	Vector10ui32 Vector10ui32::operator*(const Vector10ui32& v) const noexcept {
		return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
	}

	Vector10ui32 Vector10ui32::operator/(const Vector10ui32& v) const noexcept {
		return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
	}


	Vector10ui32 Vector10ui32::operator+(const std::uint32_t number) const noexcept {
		return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
	}

	Vector10ui32 Vector10ui32::operator-(const std::uint32_t number) const noexcept {
		return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
	}

	Vector10ui32 Vector10ui32::operator*(const std::uint32_t number) const noexcept {
		return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
	}

	Vector10ui32 Vector10ui32::operator/(const std::uint32_t number) const noexcept {
		return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
	}


	// increment / decrement
	Vector10ui32& Vector10ui32::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10ui32 Vector10ui32::operator++ (int) noexcept {
		Vector10ui32 temp = *this;
		++* this;
		return temp;
	}

	Vector10ui32 Vector10ui32::operator-- (int) noexcept {
		Vector10ui32 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10ui32& Vector10ui32::operator+= (const Vector10ui32& right) noexcept {
		a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator-= (const Vector10ui32& right) noexcept {
		a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator*= (const Vector10ui32& right) noexcept {
		a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator/= (const Vector10ui32& right) noexcept {
		a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
		return *this;
	}


	Vector10ui32& Vector10ui32::operator+= (const std::uint32_t number) noexcept {
		a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator-= (const std::uint32_t number) noexcept {
		a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator*= (const std::uint32_t number) noexcept {
		a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
		return *this;
	}

	Vector10ui32& Vector10ui32::operator/= (const std::uint32_t number) noexcept {
		a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
		return *this;
	}


	// less than / greater than
	bool Vector10ui32::operator< (const Vector10ui32& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10ui32::operator<= (const Vector10ui32& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10ui32::operator>  (const Vector10ui32& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10ui32::operator>= (const Vector10ui32& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10ui32::operator<  (const std::uint32_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10ui32::operator<= (const std::uint32_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10ui32::operator>  (const std::uint32_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10ui32::operator>= (const std::uint32_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10ui32::operator==(const Vector10ui32& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10ui32::operator!=(const Vector10ui32& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10ui32::operator==(const std::uint32_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10ui32::operator!=(const std::uint32_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10ui32::size() const noexcept { return 10; }
	void Vector10ui32::reset(const std::uint32_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::uint32_t& Vector10ui32::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::uint32_t& Vector10ui32::at(const std::uint8_t index) noexcept
	{
		std::uint32_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
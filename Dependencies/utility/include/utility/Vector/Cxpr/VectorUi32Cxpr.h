#pragma once
#include <iostream>
#include <cstdint>
#include <cfloat>
#include <cmath>

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::uint32_t
		Bytes: 4
		Range: 0 to 4.294.967.295
	*/

	class Vector2ui32Cxpr
	{
	public:
		std::uint32_t x, y;
	public:
		// Vector2ui32Cxpr
		constexpr inline Vector2ui32Cxpr() noexcept : x(0U), y(0U) {}
		constexpr inline Vector2ui32Cxpr(const std::uint32_t x, const std::uint32_t y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2ui32Cxpr(const Vector2ui32Cxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2ui32Cxpr& operator=(const Vector2ui32Cxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2ui32Cxpr(Vector2ui32Cxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2ui32Cxpr& operator=(Vector2ui32Cxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2ui32Cxpr operator+(const Vector2ui32Cxpr& v) const noexcept {
			return { x + v.x, y + v.y };
		}

		constexpr inline Vector2ui32Cxpr operator-(const Vector2ui32Cxpr& v) const noexcept {
			return { x - v.x, y - v.y };
		}

		constexpr inline Vector2ui32Cxpr operator*(const Vector2ui32Cxpr& v) const noexcept {
			return { x * v.x, y * v.y };
		}

		constexpr inline Vector2ui32Cxpr operator/(const Vector2ui32Cxpr& v) const noexcept {
			return { x / v.x, y / v.y };
		}


		constexpr inline Vector2ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { x + number, y + number };
		}

		constexpr inline Vector2ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { x - number, y - number };
		}

		constexpr inline Vector2ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { x * number, y * number };
		}

		constexpr inline Vector2ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { x / number, y / number };
		}


		// increment / decrement
		constexpr inline Vector2ui32Cxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2ui32Cxpr operator++ (int) noexcept {
			Vector2ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2ui32Cxpr operator-- (int) noexcept {
			Vector2ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2ui32Cxpr& operator+= (const Vector2ui32Cxpr& right) noexcept {
			x += right.x; y += right.y;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator-= (const Vector2ui32Cxpr& right) noexcept {
			x -= right.x; y -= right.y;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator*= (const Vector2ui32Cxpr& right) noexcept {
			x *= right.x; y *= right.y;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator/= (const Vector2ui32Cxpr& right) noexcept {
			x /= right.x; y /= right.y;
			return *this;
		}


		constexpr inline Vector2ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			x += number; y += number;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			x -= number; y -= number;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			x *= number; y *= number;
			return *this;
		}

		constexpr inline Vector2ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			x /= number; y /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2ui32Cxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2ui32Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2ui32Cxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2ui32Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2ui32Cxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2ui32Cxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3ui32Cxpr
	{
	public:
		std::uint32_t x, y, z;
	public:
		constexpr inline Vector3ui32Cxpr() noexcept : x(0U), y(0U), z(0U) {}
		constexpr inline Vector3ui32Cxpr(const std::uint32_t x, const std::uint32_t y, const std::uint32_t z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3ui32Cxpr(const Vector3ui32Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3ui32Cxpr& operator=(const Vector3ui32Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3ui32Cxpr(Vector3ui32Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3ui32Cxpr& operator=(Vector3ui32Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3ui32Cxpr operator+(const Vector3ui32Cxpr& v) const noexcept {
			return { x + v.x, y + v.y, z + v.z };
		}

		constexpr inline Vector3ui32Cxpr operator-(const Vector3ui32Cxpr& v) const noexcept {
			return { x - v.x, y - v.y, z - v.z };
		}

		constexpr inline Vector3ui32Cxpr operator*(const Vector3ui32Cxpr& v) const noexcept {
			return { x * v.x, y * v.y, z * v.z };
		}

		constexpr inline Vector3ui32Cxpr operator/(const Vector3ui32Cxpr& v) const noexcept {
			return { x / v.x, y / v.y, z / v.z };
		}


		constexpr inline Vector3ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { x + number, y + number, z + number };
		}

		constexpr inline Vector3ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { x - number, y - number, z - number };
		}

		constexpr inline Vector3ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { x * number, y * number, z * number };
		}

		constexpr inline Vector3ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { x / number, y / number, z / number };
		}


		// increment / decrement
		constexpr inline Vector3ui32Cxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3ui32Cxpr operator++ (int) noexcept {
			Vector3ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3ui32Cxpr operator-- (int) noexcept {
			Vector3ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3ui32Cxpr& operator+= (const Vector3ui32Cxpr& right) noexcept {
			x += right.x; y += right.y; z += right.z;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator-= (const Vector3ui32Cxpr& right) noexcept {
			x -= right.x; y -= right.y; z -= right.z;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator*= (const Vector3ui32Cxpr& right) noexcept {
			x *= right.x; y *= right.y; z *= right.z;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator/= (const Vector3ui32Cxpr& right) noexcept {
			x /= right.x; y /= right.y; z /= right.z;
			return *this;
		}


		constexpr inline Vector3ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			x += number; y += number; z += number;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			x -= number; y -= number; z -= number;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			x *= number; y *= number; z *= number;
			return *this;
		}

		constexpr inline Vector3ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			x /= number; y /= number; z /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3ui32Cxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3ui32Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3ui32Cxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3ui32Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3ui32Cxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3ui32Cxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d;
	public:
		// Vector4ui32Cxpr
		constexpr inline Vector4ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U) {}
		constexpr inline Vector4ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4ui32Cxpr(const Vector4ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4ui32Cxpr& operator=(const Vector4ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4ui32Cxpr(Vector4ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4ui32Cxpr& operator=(Vector4ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4ui32Cxpr operator+(const Vector4ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d };
		}

		constexpr inline Vector4ui32Cxpr operator-(const Vector4ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d };
		}

		constexpr inline Vector4ui32Cxpr operator*(const Vector4ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d };
		}

		constexpr inline Vector4ui32Cxpr operator/(const Vector4ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d };
		}


		constexpr inline Vector4ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number };
		}

		constexpr inline Vector4ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number };
		}

		constexpr inline Vector4ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number };
		}

		constexpr inline Vector4ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number };
		}


		// increment / decrement
		constexpr inline Vector4ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4ui32Cxpr operator++ (int) noexcept {
			Vector4ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4ui32Cxpr operator-- (int) noexcept {
			Vector4ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4ui32Cxpr& operator+= (const Vector4ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator-= (const Vector4ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator*= (const Vector4ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator/= (const Vector4ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d;
			return *this;
		}


		constexpr inline Vector4ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number;
			return *this;
		}

		constexpr inline Vector4ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e;
	public:
		// Vector5ui32Cxpr
		constexpr inline Vector5ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U) {}
		constexpr inline Vector5ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5ui32Cxpr(const Vector5ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5ui32Cxpr& operator=(const Vector5ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5ui32Cxpr(Vector5ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5ui32Cxpr& operator=(Vector5ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5ui32Cxpr operator+(const Vector5ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
		}

		constexpr inline Vector5ui32Cxpr operator-(const Vector5ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
		}

		constexpr inline Vector5ui32Cxpr operator*(const Vector5ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
		}

		constexpr inline Vector5ui32Cxpr operator/(const Vector5ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
		}


		constexpr inline Vector5ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number };
		}

		constexpr inline Vector5ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number };
		}

		constexpr inline Vector5ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number };
		}

		constexpr inline Vector5ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number };
		}


		// increment / decrement
		constexpr inline Vector5ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5ui32Cxpr operator++ (int) noexcept {
			Vector5ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5ui32Cxpr operator-- (int) noexcept {
			Vector5ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5ui32Cxpr& operator+= (const Vector5ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator-= (const Vector5ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator*= (const Vector5ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator/= (const Vector5ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
			return *this;
		}


		constexpr inline Vector5ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number;
			return *this;
		}

		constexpr inline Vector5ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e, f;
	public:
		// Vector6ui32Cxpr
		constexpr inline Vector6ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U) {}
		constexpr inline Vector6ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6ui32Cxpr(const Vector6ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6ui32Cxpr& operator=(const Vector6ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6ui32Cxpr(Vector6ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6ui32Cxpr& operator=(Vector6ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6ui32Cxpr operator+(const Vector6ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
		}

		constexpr inline Vector6ui32Cxpr operator-(const Vector6ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
		}

		constexpr inline Vector6ui32Cxpr operator*(const Vector6ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
		}

		constexpr inline Vector6ui32Cxpr operator/(const Vector6ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
		}


		constexpr inline Vector6ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number };
		}

		constexpr inline Vector6ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number };
		}

		constexpr inline Vector6ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number };
		}

		constexpr inline Vector6ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number };
		}


		// increment / decrement
		constexpr inline Vector6ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6ui32Cxpr operator++ (int) noexcept {
			Vector6ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6ui32Cxpr operator-- (int) noexcept {
			Vector6ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6ui32Cxpr& operator+= (const Vector6ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator-= (const Vector6ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator*= (const Vector6ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator/= (const Vector6ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
			return *this;
		}


		constexpr inline Vector6ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
			return *this;
		}

		constexpr inline Vector6ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e, f, g;
	public:
		// Vector7ui32Cxpr
		constexpr inline Vector7ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U) {}
		constexpr inline Vector7ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7ui32Cxpr(const Vector7ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7ui32Cxpr& operator=(const Vector7ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7ui32Cxpr(Vector7ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7ui32Cxpr& operator=(Vector7ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7ui32Cxpr operator+(const Vector7ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
		}

		constexpr inline Vector7ui32Cxpr operator-(const Vector7ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
		}

		constexpr inline Vector7ui32Cxpr operator*(const Vector7ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
		}

		constexpr inline Vector7ui32Cxpr operator/(const Vector7ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
		}


		constexpr inline Vector7ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
		}

		constexpr inline Vector7ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
		}

		constexpr inline Vector7ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
		}

		constexpr inline Vector7ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
		}


		// increment / decrement
		constexpr inline Vector7ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7ui32Cxpr operator++ (int) noexcept {
			Vector7ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7ui32Cxpr operator-- (int) noexcept {
			Vector7ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7ui32Cxpr& operator+= (const Vector7ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator-= (const Vector7ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator*= (const Vector7ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator/= (const Vector7ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
			return *this;
		}


		constexpr inline Vector7ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
			return *this;
		}

		constexpr inline Vector7ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h;
	public:
		// Vector8ui32Cxpr
		constexpr inline Vector8ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U) {}
		constexpr inline Vector8ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8ui32Cxpr(const Vector8ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8ui32Cxpr& operator=(const Vector8ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8ui32Cxpr(Vector8ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8ui32Cxpr& operator=(Vector8ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8ui32Cxpr operator+(const Vector8ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
		}

		constexpr inline Vector8ui32Cxpr operator-(const Vector8ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
		}

		constexpr inline Vector8ui32Cxpr operator*(const Vector8ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
		}

		constexpr inline Vector8ui32Cxpr operator/(const Vector8ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
		}


		constexpr inline Vector8ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
		}

		constexpr inline Vector8ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
		}

		constexpr inline Vector8ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
		}

		constexpr inline Vector8ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
		}


		// increment / decrement
		constexpr inline Vector8ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8ui32Cxpr operator++ (int) noexcept {
			Vector8ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8ui32Cxpr operator-- (int) noexcept {
			Vector8ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8ui32Cxpr& operator+= (const Vector8ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator-= (const Vector8ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator*= (const Vector8ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator/= (const Vector8ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
			return *this;
		}


		constexpr inline Vector8ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
			return *this;
		}

		constexpr inline Vector8ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h, i;
	public:
		// Vector9ui32Cxpr
		constexpr inline Vector9ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U), i(0U) {}
		constexpr inline Vector9ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
			const std::uint32_t i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9ui32Cxpr(const Vector9ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9ui32Cxpr& operator=(const Vector9ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9ui32Cxpr(Vector9ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9ui32Cxpr& operator=(Vector9ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9ui32Cxpr operator+(const Vector9ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
		}

		constexpr inline Vector9ui32Cxpr operator-(const Vector9ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
		}

		constexpr inline Vector9ui32Cxpr operator*(const Vector9ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
		}

		constexpr inline Vector9ui32Cxpr operator/(const Vector9ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
		}


		constexpr inline Vector9ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
		}

		constexpr inline Vector9ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
		}

		constexpr inline Vector9ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
		}

		constexpr inline Vector9ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
		}


		// increment / decrement
		constexpr inline Vector9ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9ui32Cxpr operator++ (int) noexcept {
			Vector9ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9ui32Cxpr operator-- (int) noexcept {
			Vector9ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9ui32Cxpr& operator+= (const Vector9ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator-= (const Vector9ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator*= (const Vector9ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator/= (const Vector9ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
			return *this;
		}


		constexpr inline Vector9ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
			return *this;
		}

		constexpr inline Vector9ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10ui32Cxpr
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10ui32Cxpr
		constexpr inline Vector10ui32Cxpr() noexcept : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U), i(0U), j(0U) {}
		constexpr inline Vector10ui32Cxpr(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
			const std::uint32_t i, const std::uint32_t j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10ui32Cxpr(const Vector10ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10ui32Cxpr& operator=(const Vector10ui32Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10ui32Cxpr(Vector10ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10ui32Cxpr& operator=(Vector10ui32Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10ui32Cxpr& operator=(const std::uint32_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10ui32Cxpr operator+(const Vector10ui32Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
		}

		constexpr inline Vector10ui32Cxpr operator-(const Vector10ui32Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
		}

		constexpr inline Vector10ui32Cxpr operator*(const Vector10ui32Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
		}

		constexpr inline Vector10ui32Cxpr operator/(const Vector10ui32Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
		}


		constexpr inline Vector10ui32Cxpr operator+(const std::uint32_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
		}

		constexpr inline Vector10ui32Cxpr operator-(const std::uint32_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
		}

		constexpr inline Vector10ui32Cxpr operator*(const std::uint32_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
		}

		constexpr inline Vector10ui32Cxpr operator/(const std::uint32_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
		}


		// increment / decrement
		constexpr inline Vector10ui32Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10ui32Cxpr operator++ (int) noexcept {
			Vector10ui32Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10ui32Cxpr operator-- (int) noexcept {
			Vector10ui32Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10ui32Cxpr& operator+= (const Vector10ui32Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator-= (const Vector10ui32Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator*= (const Vector10ui32Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator/= (const Vector10ui32Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
			return *this;
		}


		constexpr inline Vector10ui32Cxpr& operator+= (const std::uint32_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator-= (const std::uint32_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator*= (const std::uint32_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
			return *this;
		}

		constexpr inline Vector10ui32Cxpr& operator/= (const std::uint32_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10ui32Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10ui32Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10ui32Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10ui32Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const std::uint32_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const std::uint32_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const std::uint32_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const std::uint32_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10ui32Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10ui32Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const std::uint32_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const std::uint32_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const std::uint32_t stnd_value = 0U) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint32_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint32_t& at(const std::uint8_t index) noexcept
		{
			std::uint32_t* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui32Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui32Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui32Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
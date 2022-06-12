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

		Type : std::float_t
		Bytes: 4
		Range: 3.4E +/- 38  precision: (7 digits)
	*/

	class Vector2fCxpr
	{
	public:
		std::float_t x, y;
	public:
		// Vector2fCxpr
		constexpr inline Vector2fCxpr() noexcept : x(0.f), y(0.f) {}
		constexpr inline Vector2fCxpr(const std::float_t x, const std::float_t y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2fCxpr(const Vector2fCxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2fCxpr& operator=(const Vector2fCxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2fCxpr(Vector2fCxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2fCxpr& operator=(Vector2fCxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2fCxpr& operator=(const std::float_t number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2fCxpr operator+(const Vector2fCxpr& v) const noexcept {
			return { x + v.x, y + v.y };
		}

		constexpr inline Vector2fCxpr operator-(const Vector2fCxpr& v) const noexcept {
			return { x - v.x, y - v.y };
		}

		constexpr inline Vector2fCxpr operator*(const Vector2fCxpr& v) const noexcept {
			return { x * v.x, y * v.y };
		}

		constexpr inline Vector2fCxpr operator/(const Vector2fCxpr& v) const noexcept {
			return { x / v.x, y / v.y };
		}


		constexpr inline Vector2fCxpr operator+(const std::float_t number) const noexcept {
			return { x + number, y + number };
		}

		constexpr inline Vector2fCxpr operator-(const std::float_t number) const noexcept {
			return { x - number, y - number };
		}

		constexpr inline Vector2fCxpr operator*(const std::float_t number) const noexcept {
			return { x * number, y * number };
		}

		constexpr inline Vector2fCxpr operator/(const std::float_t number) const noexcept {
			return { x / number, y / number };
		}


		// increment / decrement
		constexpr inline Vector2fCxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2fCxpr operator++ (int) noexcept {
			Vector2fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2fCxpr operator-- (int) noexcept {
			Vector2fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2fCxpr& operator+= (const Vector2fCxpr& right) noexcept {
			x += right.x; y += right.y;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator-= (const Vector2fCxpr& right) noexcept {
			x -= right.x; y -= right.y;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator*= (const Vector2fCxpr& right) noexcept {
			x *= right.x; y *= right.y;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator/= (const Vector2fCxpr& right) noexcept {
			x /= right.x; y /= right.y;
			return *this;
		}


		constexpr inline Vector2fCxpr& operator+= (const std::float_t number) noexcept {
			x += number; y += number;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator-= (const std::float_t number) noexcept {
			x -= number; y -= number;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator*= (const std::float_t number) noexcept {
			x *= number; y *= number;
			return *this;
		}

		constexpr inline Vector2fCxpr& operator/= (const std::float_t number) noexcept {
			x /= number; y /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2fCxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2fCxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2fCxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2fCxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2fCxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2fCxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3fCxpr
	{
	public:
		std::float_t x, y, z;
	public:
		constexpr inline Vector3fCxpr() noexcept : x(0.f), y(0.f), z(0.f) {}
		constexpr inline Vector3fCxpr(const std::float_t x, const std::float_t y, const std::float_t z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3fCxpr(const Vector3fCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3fCxpr& operator=(const Vector3fCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3fCxpr(Vector3fCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3fCxpr& operator=(Vector3fCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3fCxpr& operator=(const std::float_t number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3fCxpr operator+(const Vector3fCxpr& v) const noexcept {
			return { x + v.x, y + v.y, z + v.z };
		}

		constexpr inline Vector3fCxpr operator-(const Vector3fCxpr& v) const noexcept {
			return { x - v.x, y - v.y, z - v.z };
		}

		constexpr inline Vector3fCxpr operator*(const Vector3fCxpr& v) const noexcept {
			return { x * v.x, y * v.y, z * v.z };
		}

		constexpr inline Vector3fCxpr operator/(const Vector3fCxpr& v) const noexcept {
			return { x / v.x, y / v.y, z / v.z };
		}


		constexpr inline Vector3fCxpr operator+(const std::float_t number) const noexcept {
			return { x + number, y + number, z + number };
		}

		constexpr inline Vector3fCxpr operator-(const std::float_t number) const noexcept {
			return { x - number, y - number, z - number };
		}

		constexpr inline Vector3fCxpr operator*(const std::float_t number) const noexcept {
			return { x * number, y * number, z * number };
		}

		constexpr inline Vector3fCxpr operator/(const std::float_t number) const noexcept {
			return { x / number, y / number, z / number };
		}


		// increment / decrement
		constexpr inline Vector3fCxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3fCxpr operator++ (int) noexcept {
			Vector3fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3fCxpr operator-- (int) noexcept {
			Vector3fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3fCxpr& operator+= (const Vector3fCxpr& right) noexcept {
			x += right.x; y += right.y; z += right.z;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator-= (const Vector3fCxpr& right) noexcept {
			x -= right.x; y -= right.y; z -= right.z;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator*= (const Vector3fCxpr& right) noexcept {
			x *= right.x; y *= right.y; z *= right.z;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator/= (const Vector3fCxpr& right) noexcept {
			x /= right.x; y /= right.y; z /= right.z;
			return *this;
		}


		constexpr inline Vector3fCxpr& operator+= (const std::float_t number) noexcept {
			x += number; y += number; z += number;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator-= (const std::float_t number) noexcept {
			x -= number; y -= number; z -= number;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator*= (const std::float_t number) noexcept {
			x *= number; y *= number; z *= number;
			return *this;
		}

		constexpr inline Vector3fCxpr& operator/= (const std::float_t number) noexcept {
			x /= number; y /= number; z /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3fCxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3fCxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3fCxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3fCxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3fCxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3fCxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4fCxpr
	{
	public:
		std::float_t a, b, c, d;
	public:
		// Vector4fCxpr
		constexpr inline Vector4fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f) {}
		constexpr inline Vector4fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4fCxpr(const Vector4fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4fCxpr& operator=(const Vector4fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4fCxpr(Vector4fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4fCxpr& operator=(Vector4fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4fCxpr operator+(const Vector4fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d };
		}

		constexpr inline Vector4fCxpr operator-(const Vector4fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d };
		}

		constexpr inline Vector4fCxpr operator*(const Vector4fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d };
		}

		constexpr inline Vector4fCxpr operator/(const Vector4fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d };
		}


		constexpr inline Vector4fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number };
		}

		constexpr inline Vector4fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number };
		}

		constexpr inline Vector4fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number };
		}

		constexpr inline Vector4fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number };
		}


		// increment / decrement
		constexpr inline Vector4fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4fCxpr operator++ (int) noexcept {
			Vector4fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4fCxpr operator-- (int) noexcept {
			Vector4fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4fCxpr& operator+= (const Vector4fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator-= (const Vector4fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator*= (const Vector4fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator/= (const Vector4fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d;
			return *this;
		}


		constexpr inline Vector4fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number;
			return *this;
		}

		constexpr inline Vector4fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5fCxpr
	{
	public:
		std::float_t a, b, c, d, e;
	public:
		// Vector5fCxpr
		constexpr inline Vector5fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f) {}
		constexpr inline Vector5fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5fCxpr(const Vector5fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5fCxpr& operator=(const Vector5fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5fCxpr(Vector5fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5fCxpr& operator=(Vector5fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5fCxpr operator+(const Vector5fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
		}

		constexpr inline Vector5fCxpr operator-(const Vector5fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
		}

		constexpr inline Vector5fCxpr operator*(const Vector5fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
		}

		constexpr inline Vector5fCxpr operator/(const Vector5fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
		}


		constexpr inline Vector5fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number };
		}

		constexpr inline Vector5fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number };
		}

		constexpr inline Vector5fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number };
		}

		constexpr inline Vector5fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number };
		}


		// increment / decrement
		constexpr inline Vector5fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5fCxpr operator++ (int) noexcept {
			Vector5fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5fCxpr operator-- (int) noexcept {
			Vector5fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5fCxpr& operator+= (const Vector5fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator-= (const Vector5fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator*= (const Vector5fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator/= (const Vector5fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
			return *this;
		}


		constexpr inline Vector5fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number;
			return *this;
		}

		constexpr inline Vector5fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6fCxpr
	{
	public:
		std::float_t a, b, c, d, e, f;
	public:
		// Vector6fCxpr
		constexpr inline Vector6fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f) {}
		constexpr inline Vector6fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6fCxpr(const Vector6fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6fCxpr& operator=(const Vector6fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6fCxpr(Vector6fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6fCxpr& operator=(Vector6fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6fCxpr operator+(const Vector6fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
		}

		constexpr inline Vector6fCxpr operator-(const Vector6fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
		}

		constexpr inline Vector6fCxpr operator*(const Vector6fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
		}

		constexpr inline Vector6fCxpr operator/(const Vector6fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
		}


		constexpr inline Vector6fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number };
		}

		constexpr inline Vector6fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number };
		}

		constexpr inline Vector6fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number };
		}

		constexpr inline Vector6fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number };
		}


		// increment / decrement
		constexpr inline Vector6fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6fCxpr operator++ (int) noexcept {
			Vector6fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6fCxpr operator-- (int) noexcept {
			Vector6fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6fCxpr& operator+= (const Vector6fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator-= (const Vector6fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator*= (const Vector6fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator/= (const Vector6fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
			return *this;
		}


		constexpr inline Vector6fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
			return *this;
		}

		constexpr inline Vector6fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7fCxpr
	{
	public:
		std::float_t a, b, c, d, e, f, g;
	public:
		// Vector7fCxpr
		constexpr inline Vector7fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f) {}
		constexpr inline Vector7fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7fCxpr(const Vector7fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7fCxpr& operator=(const Vector7fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7fCxpr(Vector7fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7fCxpr& operator=(Vector7fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7fCxpr operator+(const Vector7fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
		}

		constexpr inline Vector7fCxpr operator-(const Vector7fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
		}

		constexpr inline Vector7fCxpr operator*(const Vector7fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
		}

		constexpr inline Vector7fCxpr operator/(const Vector7fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
		}


		constexpr inline Vector7fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
		}

		constexpr inline Vector7fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
		}

		constexpr inline Vector7fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
		}

		constexpr inline Vector7fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
		}


		// increment / decrement
		constexpr inline Vector7fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7fCxpr operator++ (int) noexcept {
			Vector7fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7fCxpr operator-- (int) noexcept {
			Vector7fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7fCxpr& operator+= (const Vector7fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator-= (const Vector7fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator*= (const Vector7fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator/= (const Vector7fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
			return *this;
		}


		constexpr inline Vector7fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
			return *this;
		}

		constexpr inline Vector7fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8fCxpr
	{
	public:
		std::float_t a, b, c, d, e, f, g, h;
	public:
		// Vector8fCxpr
		constexpr inline Vector8fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f) {}
		constexpr inline Vector8fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8fCxpr(const Vector8fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8fCxpr& operator=(const Vector8fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8fCxpr(Vector8fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8fCxpr& operator=(Vector8fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8fCxpr operator+(const Vector8fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
		}

		constexpr inline Vector8fCxpr operator-(const Vector8fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
		}

		constexpr inline Vector8fCxpr operator*(const Vector8fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
		}

		constexpr inline Vector8fCxpr operator/(const Vector8fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
		}


		constexpr inline Vector8fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
		}

		constexpr inline Vector8fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
		}

		constexpr inline Vector8fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
		}

		constexpr inline Vector8fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
		}


		// increment / decrement
		constexpr inline Vector8fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8fCxpr operator++ (int) noexcept {
			Vector8fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8fCxpr operator-- (int) noexcept {
			Vector8fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8fCxpr& operator+= (const Vector8fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator-= (const Vector8fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator*= (const Vector8fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator/= (const Vector8fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
			return *this;
		}


		constexpr inline Vector8fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
			return *this;
		}

		constexpr inline Vector8fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9fCxpr
	{
	public:
		std::float_t a, b, c, d, e, f, g, h, i;
	public:
		// Vector9fCxpr
		constexpr inline Vector9fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f), i(0.f) {}
		constexpr inline Vector9fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
			const std::float_t i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9fCxpr(const Vector9fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9fCxpr& operator=(const Vector9fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9fCxpr(Vector9fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9fCxpr& operator=(Vector9fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9fCxpr operator+(const Vector9fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
		}

		constexpr inline Vector9fCxpr operator-(const Vector9fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
		}

		constexpr inline Vector9fCxpr operator*(const Vector9fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
		}

		constexpr inline Vector9fCxpr operator/(const Vector9fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
		}


		constexpr inline Vector9fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
		}

		constexpr inline Vector9fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
		}

		constexpr inline Vector9fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
		}

		constexpr inline Vector9fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
		}


		// increment / decrement
		constexpr inline Vector9fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9fCxpr operator++ (int) noexcept {
			Vector9fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9fCxpr operator-- (int) noexcept {
			Vector9fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9fCxpr& operator+= (const Vector9fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator-= (const Vector9fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator*= (const Vector9fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator/= (const Vector9fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
			return *this;
		}


		constexpr inline Vector9fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
			return *this;
		}

		constexpr inline Vector9fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10fCxpr
	{
	public:
		std::float_t a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10fCxpr
		constexpr inline Vector10fCxpr() noexcept : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f), i(0.f), j(0.f) {}
		constexpr inline Vector10fCxpr(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
			const std::float_t i, const std::float_t j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10fCxpr(const Vector10fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10fCxpr& operator=(const Vector10fCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10fCxpr(Vector10fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10fCxpr& operator=(Vector10fCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10fCxpr& operator=(const std::float_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10fCxpr operator+(const Vector10fCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
		}

		constexpr inline Vector10fCxpr operator-(const Vector10fCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
		}

		constexpr inline Vector10fCxpr operator*(const Vector10fCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
		}

		constexpr inline Vector10fCxpr operator/(const Vector10fCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
		}


		constexpr inline Vector10fCxpr operator+(const std::float_t number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
		}

		constexpr inline Vector10fCxpr operator-(const std::float_t number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
		}

		constexpr inline Vector10fCxpr operator*(const std::float_t number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
		}

		constexpr inline Vector10fCxpr operator/(const std::float_t number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
		}


		// increment / decrement
		constexpr inline Vector10fCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10fCxpr operator++ (int) noexcept {
			Vector10fCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10fCxpr operator-- (int) noexcept {
			Vector10fCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10fCxpr& operator+= (const Vector10fCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator-= (const Vector10fCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator*= (const Vector10fCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator/= (const Vector10fCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
			return *this;
		}


		constexpr inline Vector10fCxpr& operator+= (const std::float_t number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator-= (const std::float_t number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator*= (const std::float_t number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
			return *this;
		}

		constexpr inline Vector10fCxpr& operator/= (const std::float_t number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10fCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10fCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10fCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10fCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const std::float_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const std::float_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const std::float_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const std::float_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10fCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10fCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const std::float_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const std::float_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const std::float_t stnd_value = 0.f) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::float_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::float_t& at(const std::uint8_t index) noexcept
		{
			std::float_t* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2fCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3fCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10fCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
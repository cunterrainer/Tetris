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

		Type : long double
		Bytes: 8
		Range: 1.7E +/- 308  precision: (15 digits)
	*/

	class Vector2LdCxpr
	{
	public:
		long double x, y;
	public:
		// Vector2LdCxpr
		constexpr inline Vector2LdCxpr() noexcept : x(0.0L), y(0.0L) {}
		constexpr inline Vector2LdCxpr(const long double x, const long double y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2LdCxpr(const Vector2LdCxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2LdCxpr& operator=(const Vector2LdCxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2LdCxpr(Vector2LdCxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2LdCxpr& operator=(Vector2LdCxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2LdCxpr& operator=(const long double number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2LdCxpr operator+(const Vector2LdCxpr& v) const noexcept {
			return { x + v.x, y + v.y };
		}

		constexpr inline Vector2LdCxpr operator-(const Vector2LdCxpr& v) const noexcept {
			return { x - v.x, y - v.y };
		}

		constexpr inline Vector2LdCxpr operator*(const Vector2LdCxpr& v) const noexcept {
			return { x * v.x, y * v.y };
		}

		constexpr inline Vector2LdCxpr operator/(const Vector2LdCxpr& v) const noexcept {
			return { x / v.x, y / v.y };
		}


		constexpr inline Vector2LdCxpr operator+(const long double number) const noexcept {
			return { x + number, y + number };
		}

		constexpr inline Vector2LdCxpr operator-(const long double number) const noexcept {
			return { x - number, y - number };
		}

		constexpr inline Vector2LdCxpr operator*(const long double number) const noexcept {
			return { x * number, y * number };
		}

		constexpr inline Vector2LdCxpr operator/(const long double number) const noexcept {
			return { x / number, y / number };
		}


		// increment / decrement
		constexpr inline Vector2LdCxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2LdCxpr operator++ (int) noexcept {
			Vector2LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2LdCxpr operator-- (int) noexcept {
			Vector2LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2LdCxpr& operator+= (const Vector2LdCxpr& right) noexcept {
			x += right.x; y += right.y;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator-= (const Vector2LdCxpr& right) noexcept {
			x -= right.x; y -= right.y;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator*= (const Vector2LdCxpr& right) noexcept {
			x *= right.x; y *= right.y;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator/= (const Vector2LdCxpr& right) noexcept {
			x /= right.x; y /= right.y;
			return *this;
		}


		constexpr inline Vector2LdCxpr& operator+= (const long double number) noexcept {
			x += number; y += number;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator-= (const long double number) noexcept {
			x -= number; y -= number;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator*= (const long double number) noexcept {
			x *= number; y *= number;
			return *this;
		}

		constexpr inline Vector2LdCxpr& operator/= (const long double number) noexcept {
			x /= number; y /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2LdCxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2LdCxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2LdCxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2LdCxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2LdCxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2LdCxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3LdCxpr
	{
	public:
		long double x, y, z;
	public:
		constexpr inline Vector3LdCxpr() noexcept : x(0.0L), y(0.0L), z(0.0L) {}
		constexpr inline Vector3LdCxpr(const long double x, const long double y, const long double z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3LdCxpr(const Vector3LdCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3LdCxpr& operator=(const Vector3LdCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3LdCxpr(Vector3LdCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3LdCxpr& operator=(Vector3LdCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3LdCxpr& operator=(const long double number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3LdCxpr operator+(const Vector3LdCxpr& v) const noexcept {
			return { x + v.x, y + v.y, z + v.z };
		}

		constexpr inline Vector3LdCxpr operator-(const Vector3LdCxpr& v) const noexcept {
			return { x - v.x, y - v.y, z - v.z };
		}

		constexpr inline Vector3LdCxpr operator*(const Vector3LdCxpr& v) const noexcept {
			return { x * v.x, y * v.y, z * v.z };
		}

		constexpr inline Vector3LdCxpr operator/(const Vector3LdCxpr& v) const noexcept {
			return { x / v.x, y / v.y, z / v.z };
		}


		constexpr inline Vector3LdCxpr operator+(const long double number) const noexcept {
			return { x + number, y + number, z + number };
		}

		constexpr inline Vector3LdCxpr operator-(const long double number) const noexcept {
			return { x - number, y - number, z - number };
		}

		constexpr inline Vector3LdCxpr operator*(const long double number) const noexcept {
			return { x * number, y * number, z * number };
		}

		constexpr inline Vector3LdCxpr operator/(const long double number) const noexcept {
			return { x / number, y / number, z / number };
		}


		// increment / decrement
		constexpr inline Vector3LdCxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3LdCxpr operator++ (int) noexcept {
			Vector3LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3LdCxpr operator-- (int) noexcept {
			Vector3LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3LdCxpr& operator+= (const Vector3LdCxpr& right) noexcept {
			x += right.x; y += right.y; z += right.z;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator-= (const Vector3LdCxpr& right) noexcept {
			x -= right.x; y -= right.y; z -= right.z;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator*= (const Vector3LdCxpr& right) noexcept {
			x *= right.x; y *= right.y; z *= right.z;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator/= (const Vector3LdCxpr& right) noexcept {
			x /= right.x; y /= right.y; z /= right.z;
			return *this;
		}


		constexpr inline Vector3LdCxpr& operator+= (const long double number) noexcept {
			x += number; y += number; z += number;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator-= (const long double number) noexcept {
			x -= number; y -= number; z -= number;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator*= (const long double number) noexcept {
			x *= number; y *= number; z *= number;
			return *this;
		}

		constexpr inline Vector3LdCxpr& operator/= (const long double number) noexcept {
			x /= number; y /= number; z /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3LdCxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3LdCxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3LdCxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3LdCxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3LdCxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3LdCxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4LdCxpr
	{
	public:
		long double a, b, c, d;
	public:
		// Vector4LdCxpr
		constexpr inline Vector4LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L) {}
		constexpr inline Vector4LdCxpr(const long double a, const long double b, const long double c, const long double d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4LdCxpr(const Vector4LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4LdCxpr& operator=(const Vector4LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4LdCxpr(Vector4LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4LdCxpr& operator=(Vector4LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4LdCxpr operator+(const Vector4LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d };
		}

		constexpr inline Vector4LdCxpr operator-(const Vector4LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d };
		}

		constexpr inline Vector4LdCxpr operator*(const Vector4LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d };
		}

		constexpr inline Vector4LdCxpr operator/(const Vector4LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d };
		}


		constexpr inline Vector4LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number };
		}

		constexpr inline Vector4LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number };
		}

		constexpr inline Vector4LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number };
		}

		constexpr inline Vector4LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number };
		}


		// increment / decrement
		constexpr inline Vector4LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4LdCxpr operator++ (int) noexcept {
			Vector4LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4LdCxpr operator-- (int) noexcept {
			Vector4LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4LdCxpr& operator+= (const Vector4LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator-= (const Vector4LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator*= (const Vector4LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator/= (const Vector4LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d;
			return *this;
		}


		constexpr inline Vector4LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number;
			return *this;
		}

		constexpr inline Vector4LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5LdCxpr
	{
	public:
		long double a, b, c, d, e;
	public:
		// Vector5LdCxpr
		constexpr inline Vector5LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L) {}
		constexpr inline Vector5LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5LdCxpr(const Vector5LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5LdCxpr& operator=(const Vector5LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5LdCxpr(Vector5LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5LdCxpr& operator=(Vector5LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5LdCxpr operator+(const Vector5LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
		}

		constexpr inline Vector5LdCxpr operator-(const Vector5LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
		}

		constexpr inline Vector5LdCxpr operator*(const Vector5LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
		}

		constexpr inline Vector5LdCxpr operator/(const Vector5LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
		}


		constexpr inline Vector5LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number };
		}

		constexpr inline Vector5LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number };
		}

		constexpr inline Vector5LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number };
		}

		constexpr inline Vector5LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number };
		}


		// increment / decrement
		constexpr inline Vector5LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5LdCxpr operator++ (int) noexcept {
			Vector5LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5LdCxpr operator-- (int) noexcept {
			Vector5LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5LdCxpr& operator+= (const Vector5LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator-= (const Vector5LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator*= (const Vector5LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator/= (const Vector5LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
			return *this;
		}


		constexpr inline Vector5LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number;
			return *this;
		}

		constexpr inline Vector5LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6LdCxpr
	{
	public:
		long double a, b, c, d, e, f;
	public:
		// Vector6LdCxpr
		constexpr inline Vector6LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L) {}
		constexpr inline Vector6LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6LdCxpr(const Vector6LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6LdCxpr& operator=(const Vector6LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6LdCxpr(Vector6LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6LdCxpr& operator=(Vector6LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6LdCxpr operator+(const Vector6LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
		}

		constexpr inline Vector6LdCxpr operator-(const Vector6LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
		}

		constexpr inline Vector6LdCxpr operator*(const Vector6LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
		}

		constexpr inline Vector6LdCxpr operator/(const Vector6LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
		}


		constexpr inline Vector6LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number };
		}

		constexpr inline Vector6LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number };
		}

		constexpr inline Vector6LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number };
		}

		constexpr inline Vector6LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number };
		}


		// increment / decrement
		constexpr inline Vector6LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6LdCxpr operator++ (int) noexcept {
			Vector6LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6LdCxpr operator-- (int) noexcept {
			Vector6LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6LdCxpr& operator+= (const Vector6LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator-= (const Vector6LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator*= (const Vector6LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator/= (const Vector6LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
			return *this;
		}


		constexpr inline Vector6LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
			return *this;
		}

		constexpr inline Vector6LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7LdCxpr
	{
	public:
		long double a, b, c, d, e, f, g;
	public:
		// Vector7LdCxpr
		constexpr inline Vector7LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L) {}
		constexpr inline Vector7LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7LdCxpr(const Vector7LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7LdCxpr& operator=(const Vector7LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7LdCxpr(Vector7LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7LdCxpr& operator=(Vector7LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7LdCxpr operator+(const Vector7LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
		}

		constexpr inline Vector7LdCxpr operator-(const Vector7LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
		}

		constexpr inline Vector7LdCxpr operator*(const Vector7LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
		}

		constexpr inline Vector7LdCxpr operator/(const Vector7LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
		}


		constexpr inline Vector7LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
		}

		constexpr inline Vector7LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
		}

		constexpr inline Vector7LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
		}

		constexpr inline Vector7LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
		}


		// increment / decrement
		constexpr inline Vector7LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7LdCxpr operator++ (int) noexcept {
			Vector7LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7LdCxpr operator-- (int) noexcept {
			Vector7LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7LdCxpr& operator+= (const Vector7LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator-= (const Vector7LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator*= (const Vector7LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator/= (const Vector7LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
			return *this;
		}


		constexpr inline Vector7LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
			return *this;
		}

		constexpr inline Vector7LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8LdCxpr
	{
	public:
		long double a, b, c, d, e, f, g, h;
	public:
		// Vector8LdCxpr
		constexpr inline Vector8LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L) {}
		constexpr inline Vector8LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8LdCxpr(const Vector8LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8LdCxpr& operator=(const Vector8LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8LdCxpr(Vector8LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8LdCxpr& operator=(Vector8LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8LdCxpr operator+(const Vector8LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
		}

		constexpr inline Vector8LdCxpr operator-(const Vector8LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
		}

		constexpr inline Vector8LdCxpr operator*(const Vector8LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
		}

		constexpr inline Vector8LdCxpr operator/(const Vector8LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
		}


		constexpr inline Vector8LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
		}

		constexpr inline Vector8LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
		}

		constexpr inline Vector8LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
		}

		constexpr inline Vector8LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
		}


		// increment / decrement
		constexpr inline Vector8LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8LdCxpr operator++ (int) noexcept {
			Vector8LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8LdCxpr operator-- (int) noexcept {
			Vector8LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8LdCxpr& operator+= (const Vector8LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator-= (const Vector8LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator*= (const Vector8LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator/= (const Vector8LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
			return *this;
		}


		constexpr inline Vector8LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
			return *this;
		}

		constexpr inline Vector8LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9LdCxpr
	{
	public:
		long double a, b, c, d, e, f, g, h, i;
	public:
		// Vector9LdCxpr
		constexpr inline Vector9LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L), i(0.0L) {}
		constexpr inline Vector9LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h,
			const long double i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9LdCxpr(const Vector9LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9LdCxpr& operator=(const Vector9LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9LdCxpr(Vector9LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9LdCxpr& operator=(Vector9LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9LdCxpr operator+(const Vector9LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
		}

		constexpr inline Vector9LdCxpr operator-(const Vector9LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
		}

		constexpr inline Vector9LdCxpr operator*(const Vector9LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
		}

		constexpr inline Vector9LdCxpr operator/(const Vector9LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
		}


		constexpr inline Vector9LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
		}

		constexpr inline Vector9LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
		}

		constexpr inline Vector9LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
		}

		constexpr inline Vector9LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
		}


		// increment / decrement
		constexpr inline Vector9LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9LdCxpr operator++ (int) noexcept {
			Vector9LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9LdCxpr operator-- (int) noexcept {
			Vector9LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9LdCxpr& operator+= (const Vector9LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator-= (const Vector9LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator*= (const Vector9LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator/= (const Vector9LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
			return *this;
		}


		constexpr inline Vector9LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
			return *this;
		}

		constexpr inline Vector9LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10LdCxpr
	{
	public:
		long double a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10LdCxpr
		constexpr inline Vector10LdCxpr() noexcept : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L), i(0.0L), j(0.0L) {}
		constexpr inline Vector10LdCxpr(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h,
			const long double i, const long double j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10LdCxpr(const Vector10LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10LdCxpr& operator=(const Vector10LdCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10LdCxpr(Vector10LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10LdCxpr& operator=(Vector10LdCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10LdCxpr& operator=(const long double number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10LdCxpr operator+(const Vector10LdCxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
		}

		constexpr inline Vector10LdCxpr operator-(const Vector10LdCxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
		}

		constexpr inline Vector10LdCxpr operator*(const Vector10LdCxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
		}

		constexpr inline Vector10LdCxpr operator/(const Vector10LdCxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
		}


		constexpr inline Vector10LdCxpr operator+(const long double number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
		}

		constexpr inline Vector10LdCxpr operator-(const long double number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
		}

		constexpr inline Vector10LdCxpr operator*(const long double number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
		}

		constexpr inline Vector10LdCxpr operator/(const long double number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
		}


		// increment / decrement
		constexpr inline Vector10LdCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10LdCxpr operator++ (int) noexcept {
			Vector10LdCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10LdCxpr operator-- (int) noexcept {
			Vector10LdCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10LdCxpr& operator+= (const Vector10LdCxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator-= (const Vector10LdCxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator*= (const Vector10LdCxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator/= (const Vector10LdCxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
			return *this;
		}


		constexpr inline Vector10LdCxpr& operator+= (const long double number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator-= (const long double number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator*= (const long double number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
			return *this;
		}

		constexpr inline Vector10LdCxpr& operator/= (const long double number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10LdCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10LdCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10LdCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10LdCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const long double number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const long double number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const long double number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const long double number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10LdCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10LdCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const long double number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const long double number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const long double stnd_value = 0.0L) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline long double& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline long double& at(const std::uint8_t index) noexcept
		{
			long double* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2LdCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3LdCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10LdCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
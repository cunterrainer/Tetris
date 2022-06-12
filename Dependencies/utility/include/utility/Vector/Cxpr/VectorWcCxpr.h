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

		Type : wchar_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	class Vector2WcCxpr
	{
	public:
		wchar_t x, y;
	public:
		// Vector2WcCxpr
		constexpr inline Vector2WcCxpr() noexcept : x(0), y(0) {}
		constexpr inline Vector2WcCxpr(const wchar_t x, const wchar_t y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2WcCxpr(const Vector2WcCxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2WcCxpr& operator=(const Vector2WcCxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2WcCxpr(Vector2WcCxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2WcCxpr& operator=(Vector2WcCxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2WcCxpr& operator=(const wchar_t number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2WcCxpr operator+(const Vector2WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x + v.x), static_cast<wchar_t>(y + v.y) };
		}

		constexpr inline Vector2WcCxpr operator-(const Vector2WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x - v.x), static_cast<wchar_t>(y - v.y) };
		}

		constexpr inline Vector2WcCxpr operator*(const Vector2WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x * v.x), static_cast<wchar_t>(y * v.y) };
		}

		constexpr inline Vector2WcCxpr operator/(const Vector2WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x / v.x), static_cast<wchar_t>(y / v.y) };
		}


		constexpr inline Vector2WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x + number), static_cast<wchar_t>(y + number) };
		}

		constexpr inline Vector2WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x - number), static_cast<wchar_t>(y - number) };
		}

		constexpr inline Vector2WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x * number), static_cast<wchar_t>(y * number) };
		}

		constexpr inline Vector2WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x / number), static_cast<wchar_t>(y / number) };
		}


		// increment / decrement
		constexpr inline Vector2WcCxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2WcCxpr operator++ (int) noexcept {
			Vector2WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2WcCxpr operator-- (int) noexcept {
			Vector2WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2WcCxpr& operator+= (const Vector2WcCxpr& right) noexcept {
			static_cast<wchar_t>(x += right.x); static_cast<wchar_t>(y += right.y);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator-= (const Vector2WcCxpr& right) noexcept {
			static_cast<wchar_t>(x -= right.x); static_cast<wchar_t>(y -= right.y);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator*= (const Vector2WcCxpr& right) noexcept {
			static_cast<wchar_t>(x *= right.x); static_cast<wchar_t>(y *= right.y);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator/= (const Vector2WcCxpr& right) noexcept {
			static_cast<wchar_t>(x /= right.x); static_cast<wchar_t>(y /= right.y);
			return *this;
		}


		constexpr inline Vector2WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x += number); static_cast<wchar_t>(y += number);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x -= number); static_cast<wchar_t>(y -= number);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x *= number); static_cast<wchar_t>(y *= number);
			return *this;
		}

		constexpr inline Vector2WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x /= number); static_cast<wchar_t>(y /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2WcCxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2WcCxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2WcCxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2WcCxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2WcCxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2WcCxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3WcCxpr
	{
	public:
		wchar_t x, y, z;
	public:
		constexpr inline Vector3WcCxpr() noexcept : x(0), y(0), z(0) {}
		constexpr inline Vector3WcCxpr(const wchar_t x, const wchar_t y, const wchar_t z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3WcCxpr(const Vector3WcCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3WcCxpr& operator=(const Vector3WcCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3WcCxpr(Vector3WcCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3WcCxpr& operator=(Vector3WcCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3WcCxpr& operator=(const wchar_t number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3WcCxpr operator+(const Vector3WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x + v.x), static_cast<wchar_t>(y + v.y), static_cast<wchar_t>(z + v.z) };
		}

		constexpr inline Vector3WcCxpr operator-(const Vector3WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x - v.x), static_cast<wchar_t>(y - v.y), static_cast<wchar_t>(z - v.z) };
		}

		constexpr inline Vector3WcCxpr operator*(const Vector3WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x * v.x), static_cast<wchar_t>(y * v.y), static_cast<wchar_t>(z * v.z) };
		}

		constexpr inline Vector3WcCxpr operator/(const Vector3WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(x / v.x), static_cast<wchar_t>(y / v.y), static_cast<wchar_t>(z / v.z) };
		}


		constexpr inline Vector3WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x + number), static_cast<wchar_t>(y + number), static_cast<wchar_t>(z + number) };
		}

		constexpr inline Vector3WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x - number), static_cast<wchar_t>(y - number), static_cast<wchar_t>(z - number) };
		}

		constexpr inline Vector3WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x * number), static_cast<wchar_t>(y * number), static_cast<wchar_t>(z * number) };
		}

		constexpr inline Vector3WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(x / number), static_cast<wchar_t>(y / number), static_cast<wchar_t>(z / number) };
		}


		// increment / decrement
		constexpr inline Vector3WcCxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3WcCxpr operator++ (int) noexcept {
			Vector3WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3WcCxpr operator-- (int) noexcept {
			Vector3WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3WcCxpr& operator+= (const Vector3WcCxpr& right) noexcept {
			static_cast<wchar_t>(x += right.x); static_cast<wchar_t>(y += right.y); static_cast<wchar_t>(z += right.z);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator-= (const Vector3WcCxpr& right) noexcept {
			static_cast<wchar_t>(x -= right.x); static_cast<wchar_t>(y -= right.y); static_cast<wchar_t>(z -= right.z);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator*= (const Vector3WcCxpr& right) noexcept {
			static_cast<wchar_t>(x *= right.x); static_cast<wchar_t>(y *= right.y); static_cast<wchar_t>(z *= right.z);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator/= (const Vector3WcCxpr& right) noexcept {
			static_cast<wchar_t>(x /= right.x); static_cast<wchar_t>(y /= right.y); static_cast<wchar_t>(z /= right.z);
			return *this;
		}


		constexpr inline Vector3WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x += number); static_cast<wchar_t>(y += number); static_cast<wchar_t>(z += number);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x -= number); static_cast<wchar_t>(y -= number); static_cast<wchar_t>(z -= number);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x *= number); static_cast<wchar_t>(y *= number); static_cast<wchar_t>(z *= number);
			return *this;
		}

		constexpr inline Vector3WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(x /= number); static_cast<wchar_t>(y /= number); static_cast<wchar_t>(z /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3WcCxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3WcCxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3WcCxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3WcCxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3WcCxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3WcCxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4WcCxpr
	{
	public:
		wchar_t a, b, c, d;
	public:
		// Vector4WcCxpr
		constexpr inline Vector4WcCxpr() noexcept : a(0), b(0), c(0), d(0) {}
		constexpr inline Vector4WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4WcCxpr(const Vector4WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4WcCxpr& operator=(const Vector4WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4WcCxpr(Vector4WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4WcCxpr& operator=(Vector4WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4WcCxpr operator+(const Vector4WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d) };
		}

		constexpr inline Vector4WcCxpr operator-(const Vector4WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d) };
		}

		constexpr inline Vector4WcCxpr operator*(const Vector4WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d) };
		}

		constexpr inline Vector4WcCxpr operator/(const Vector4WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d) };
		}


		constexpr inline Vector4WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number) };
		}

		constexpr inline Vector4WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number) };
		}

		constexpr inline Vector4WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number) };
		}

		constexpr inline Vector4WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number) };
		}


		// increment / decrement
		constexpr inline Vector4WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4WcCxpr operator++ (int) noexcept {
			Vector4WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4WcCxpr operator-- (int) noexcept {
			Vector4WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4WcCxpr& operator+= (const Vector4WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator-= (const Vector4WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator*= (const Vector4WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator/= (const Vector4WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d);
			return *this;
		}


		constexpr inline Vector4WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number);
			return *this;
		}

		constexpr inline Vector4WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5WcCxpr
	{
	public:
		wchar_t a, b, c, d, e;
	public:
		// Vector5WcCxpr
		constexpr inline Vector5WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0) {}
		constexpr inline Vector5WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5WcCxpr(const Vector5WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5WcCxpr& operator=(const Vector5WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5WcCxpr(Vector5WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5WcCxpr& operator=(Vector5WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5WcCxpr operator+(const Vector5WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e) };
		}

		constexpr inline Vector5WcCxpr operator-(const Vector5WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e) };
		}

		constexpr inline Vector5WcCxpr operator*(const Vector5WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e) };
		}

		constexpr inline Vector5WcCxpr operator/(const Vector5WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e) };
		}


		constexpr inline Vector5WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number) };
		}

		constexpr inline Vector5WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number) };
		}

		constexpr inline Vector5WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number) };
		}

		constexpr inline Vector5WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number) };
		}


		// increment / decrement
		constexpr inline Vector5WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5WcCxpr operator++ (int) noexcept {
			Vector5WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5WcCxpr operator-- (int) noexcept {
			Vector5WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5WcCxpr& operator+= (const Vector5WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator-= (const Vector5WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator*= (const Vector5WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator/= (const Vector5WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e);
			return *this;
		}


		constexpr inline Vector5WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number);
			return *this;
		}

		constexpr inline Vector5WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6WcCxpr
	{
	public:
		wchar_t a, b, c, d, e, f;
	public:
		// Vector6WcCxpr
		constexpr inline Vector6WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0) {}
		constexpr inline Vector6WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6WcCxpr(const Vector6WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6WcCxpr& operator=(const Vector6WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6WcCxpr(Vector6WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6WcCxpr& operator=(Vector6WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6WcCxpr operator+(const Vector6WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f) };
		}

		constexpr inline Vector6WcCxpr operator-(const Vector6WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f) };
		}

		constexpr inline Vector6WcCxpr operator*(const Vector6WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f) };
		}

		constexpr inline Vector6WcCxpr operator/(const Vector6WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f) };
		}


		constexpr inline Vector6WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number) };
		}

		constexpr inline Vector6WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number) };
		}

		constexpr inline Vector6WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number) };
		}

		constexpr inline Vector6WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number) };
		}


		// increment / decrement
		constexpr inline Vector6WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6WcCxpr operator++ (int) noexcept {
			Vector6WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6WcCxpr operator-- (int) noexcept {
			Vector6WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6WcCxpr& operator+= (const Vector6WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator-= (const Vector6WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator*= (const Vector6WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator/= (const Vector6WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f);
			return *this;
		}


		constexpr inline Vector6WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number);
			return *this;
		}

		constexpr inline Vector6WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7WcCxpr
	{
	public:
		wchar_t a, b, c, d, e, f, g;
	public:
		// Vector7WcCxpr
		constexpr inline Vector7WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		constexpr inline Vector7WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7WcCxpr(const Vector7WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7WcCxpr& operator=(const Vector7WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7WcCxpr(Vector7WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7WcCxpr& operator=(Vector7WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7WcCxpr operator+(const Vector7WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g) };
		}

		constexpr inline Vector7WcCxpr operator-(const Vector7WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g) };
		}

		constexpr inline Vector7WcCxpr operator*(const Vector7WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g) };
		}

		constexpr inline Vector7WcCxpr operator/(const Vector7WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g) };
		}


		constexpr inline Vector7WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number) };
		}

		constexpr inline Vector7WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number) };
		}

		constexpr inline Vector7WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number) };
		}

		constexpr inline Vector7WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number) };
		}


		// increment / decrement
		constexpr inline Vector7WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7WcCxpr operator++ (int) noexcept {
			Vector7WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7WcCxpr operator-- (int) noexcept {
			Vector7WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7WcCxpr& operator+= (const Vector7WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator-= (const Vector7WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator*= (const Vector7WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator/= (const Vector7WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g);
			return *this;
		}


		constexpr inline Vector7WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number);
			return *this;
		}

		constexpr inline Vector7WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8WcCxpr
	{
	public:
		wchar_t a, b, c, d, e, f, g, h;
	public:
		// Vector8WcCxpr
		constexpr inline Vector8WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		constexpr inline Vector8WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8WcCxpr(const Vector8WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8WcCxpr& operator=(const Vector8WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8WcCxpr(Vector8WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8WcCxpr& operator=(Vector8WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8WcCxpr operator+(const Vector8WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h) };
		}

		constexpr inline Vector8WcCxpr operator-(const Vector8WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h) };
		}

		constexpr inline Vector8WcCxpr operator*(const Vector8WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h) };
		}

		constexpr inline Vector8WcCxpr operator/(const Vector8WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h) };
		}


		constexpr inline Vector8WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number) };
		}

		constexpr inline Vector8WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number) };
		}

		constexpr inline Vector8WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number) };
		}

		constexpr inline Vector8WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number) };
		}


		// increment / decrement
		constexpr inline Vector8WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8WcCxpr operator++ (int) noexcept {
			Vector8WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8WcCxpr operator-- (int) noexcept {
			Vector8WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8WcCxpr& operator+= (const Vector8WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator-= (const Vector8WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator*= (const Vector8WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator/= (const Vector8WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h);
			return *this;
		}


		constexpr inline Vector8WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number);
			return *this;
		}

		constexpr inline Vector8WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9WcCxpr
	{
	public:
		wchar_t a, b, c, d, e, f, g, h, i;
	public:
		// Vector9WcCxpr
		constexpr inline Vector9WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		constexpr inline Vector9WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
			const wchar_t i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9WcCxpr(const Vector9WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9WcCxpr& operator=(const Vector9WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9WcCxpr(Vector9WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9WcCxpr& operator=(Vector9WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9WcCxpr operator+(const Vector9WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h), static_cast<wchar_t>(i + v.i) };
		}

		constexpr inline Vector9WcCxpr operator-(const Vector9WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h), static_cast<wchar_t>(i - v.i) };
		}

		constexpr inline Vector9WcCxpr operator*(const Vector9WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h), static_cast<wchar_t>(i * v.i) };
		}

		constexpr inline Vector9WcCxpr operator/(const Vector9WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h), static_cast<wchar_t>(i / v.i) };
		}


		constexpr inline Vector9WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number), static_cast<wchar_t>(i + number) };
		}

		constexpr inline Vector9WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number), static_cast<wchar_t>(i - number) };
		}

		constexpr inline Vector9WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number), static_cast<wchar_t>(i * number) };
		}

		constexpr inline Vector9WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number), static_cast<wchar_t>(i / number) };
		}


		// increment / decrement
		constexpr inline Vector9WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9WcCxpr operator++ (int) noexcept {
			Vector9WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9WcCxpr operator-- (int) noexcept {
			Vector9WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9WcCxpr& operator+= (const Vector9WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h); static_cast<wchar_t>(i += right.i);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator-= (const Vector9WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h); static_cast<wchar_t>(i -= right.i);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator*= (const Vector9WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h); static_cast<wchar_t>(i *= right.i);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator/= (const Vector9WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h); static_cast<wchar_t>(i /= right.i);
			return *this;
		}


		constexpr inline Vector9WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number); static_cast<wchar_t>(i += number);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number); static_cast<wchar_t>(i -= number);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number); static_cast<wchar_t>(i *= number);
			return *this;
		}

		constexpr inline Vector9WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number); static_cast<wchar_t>(i /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10WcCxpr
	{
	public:
		wchar_t a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10WcCxpr
		constexpr inline Vector10WcCxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		constexpr inline Vector10WcCxpr(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
			const wchar_t i, const wchar_t j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10WcCxpr(const Vector10WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10WcCxpr& operator=(const Vector10WcCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10WcCxpr(Vector10WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10WcCxpr& operator=(Vector10WcCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10WcCxpr& operator=(const wchar_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10WcCxpr operator+(const Vector10WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h), static_cast<wchar_t>(i + v.i), static_cast<wchar_t>(j + v.j) };
		}

		constexpr inline Vector10WcCxpr operator-(const Vector10WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h), static_cast<wchar_t>(i - v.i), static_cast<wchar_t>(j - v.j) };
		}

		constexpr inline Vector10WcCxpr operator*(const Vector10WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h), static_cast<wchar_t>(i * v.i), static_cast<wchar_t>(j * v.j) };
		}

		constexpr inline Vector10WcCxpr operator/(const Vector10WcCxpr& v) const noexcept {
			return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h), static_cast<wchar_t>(i / v.i), static_cast<wchar_t>(j / v.j) };
		}


		constexpr inline Vector10WcCxpr operator+(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number), static_cast<wchar_t>(i + number), static_cast<wchar_t>(j + number) };
		}

		constexpr inline Vector10WcCxpr operator-(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number), static_cast<wchar_t>(i - number), static_cast<wchar_t>(j - number) };
		}

		constexpr inline Vector10WcCxpr operator*(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number), static_cast<wchar_t>(i * number), static_cast<wchar_t>(j * number) };
		}

		constexpr inline Vector10WcCxpr operator/(const wchar_t number) const noexcept {
			return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number), static_cast<wchar_t>(i / number), static_cast<wchar_t>(j / number) };
		}


		// increment / decrement
		constexpr inline Vector10WcCxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10WcCxpr operator++ (int) noexcept {
			Vector10WcCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10WcCxpr operator-- (int) noexcept {
			Vector10WcCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10WcCxpr& operator+= (const Vector10WcCxpr& right) noexcept {
			static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h); static_cast<wchar_t>(i += right.i); static_cast<wchar_t>(j += right.j);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator-= (const Vector10WcCxpr& right) noexcept {
			static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h); static_cast<wchar_t>(i -= right.i); static_cast<wchar_t>(j -= right.j);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator*= (const Vector10WcCxpr& right) noexcept {
			static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h); static_cast<wchar_t>(i *= right.i); static_cast<wchar_t>(j *= right.j);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator/= (const Vector10WcCxpr& right) noexcept {
			static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h); static_cast<wchar_t>(i /= right.i); static_cast<wchar_t>(j /= right.j);
			return *this;
		}


		constexpr inline Vector10WcCxpr& operator+= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number); static_cast<wchar_t>(i += number); static_cast<wchar_t>(j += number);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator-= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number); static_cast<wchar_t>(i -= number); static_cast<wchar_t>(j -= number);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator*= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number); static_cast<wchar_t>(i *= number); static_cast<wchar_t>(j *= number);
			return *this;
		}

		constexpr inline Vector10WcCxpr& operator/= (const wchar_t number) noexcept {
			static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number); static_cast<wchar_t>(i /= number); static_cast<wchar_t>(j /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10WcCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10WcCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10WcCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10WcCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const wchar_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const wchar_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const wchar_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const wchar_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10WcCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10WcCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const wchar_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const wchar_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const wchar_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline wchar_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline wchar_t& at(const std::uint8_t index) noexcept
		{
			wchar_t* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::wostream& operator<<(std::wostream& os, const Vector2WcCxpr& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector3WcCxpr& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y) << " | z: " << static_cast<std::int32_t>(v.z);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector4WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector5WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector6WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector7WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector8WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector9WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector10WcCxpr& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i) << " | j: " << static_cast<std::int32_t>(v.j);
		return os;
	}
	// End
}
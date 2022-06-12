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

		Type : std::int16_t
		Bytes: 2
		Range: -32.768 to 32.767
	*/

	class Vector2i16Cxpr
	{
	public:
		std::int16_t x, y;
	public:
		// Vector2i16Cxpr
		constexpr inline Vector2i16Cxpr() noexcept : x(0), y(0) {}
		constexpr inline Vector2i16Cxpr(const std::int16_t x, const std::int16_t y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2i16Cxpr(const Vector2i16Cxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2i16Cxpr& operator=(const Vector2i16Cxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2i16Cxpr(Vector2i16Cxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2i16Cxpr& operator=(Vector2i16Cxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2i16Cxpr& operator=(const std::int16_t number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2i16Cxpr operator+(const Vector2i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x + v.x), static_cast<std::int16_t>(y + v.y) };
		}

		constexpr inline Vector2i16Cxpr operator-(const Vector2i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x - v.x), static_cast<std::int16_t>(y - v.y) };
		}

		constexpr inline Vector2i16Cxpr operator*(const Vector2i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x * v.x), static_cast<std::int16_t>(y * v.y) };
		}

		constexpr inline Vector2i16Cxpr operator/(const Vector2i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x / v.x), static_cast<std::int16_t>(y / v.y) };
		}


		constexpr inline Vector2i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x + number), static_cast<std::int16_t>(y + number) };
		}

		constexpr inline Vector2i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x - number), static_cast<std::int16_t>(y - number) };
		}

		constexpr inline Vector2i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x * number), static_cast<std::int16_t>(y * number) };
		}

		constexpr inline Vector2i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x / number), static_cast<std::int16_t>(y / number) };
		}


		// increment / decrement
		constexpr inline Vector2i16Cxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2i16Cxpr operator++ (int) noexcept {
			Vector2i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2i16Cxpr operator-- (int) noexcept {
			Vector2i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2i16Cxpr& operator+= (const Vector2i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x += right.x); static_cast<std::int16_t>(y += right.y);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator-= (const Vector2i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x -= right.x); static_cast<std::int16_t>(y -= right.y);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator*= (const Vector2i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x *= right.x); static_cast<std::int16_t>(y *= right.y);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator/= (const Vector2i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x /= right.x); static_cast<std::int16_t>(y /= right.y);
			return *this;
		}


		constexpr inline Vector2i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x += number); static_cast<std::int16_t>(y += number);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x -= number); static_cast<std::int16_t>(y -= number);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x *= number); static_cast<std::int16_t>(y *= number);
			return *this;
		}

		constexpr inline Vector2i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x /= number); static_cast<std::int16_t>(y /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2i16Cxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2i16Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2i16Cxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2i16Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2i16Cxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2i16Cxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3i16Cxpr
	{
	public:
		std::int16_t x, y, z;
	public:
		constexpr inline Vector3i16Cxpr() noexcept : x(0), y(0), z(0) {}
		constexpr inline Vector3i16Cxpr(const std::int16_t x, const std::int16_t y, const std::int16_t z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3i16Cxpr(const Vector3i16Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3i16Cxpr& operator=(const Vector3i16Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3i16Cxpr(Vector3i16Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3i16Cxpr& operator=(Vector3i16Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3i16Cxpr& operator=(const std::int16_t number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3i16Cxpr operator+(const Vector3i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x + v.x), static_cast<std::int16_t>(y + v.y), static_cast<std::int16_t>(z + v.z) };
		}

		constexpr inline Vector3i16Cxpr operator-(const Vector3i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x - v.x), static_cast<std::int16_t>(y - v.y), static_cast<std::int16_t>(z - v.z) };
		}

		constexpr inline Vector3i16Cxpr operator*(const Vector3i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x * v.x), static_cast<std::int16_t>(y * v.y), static_cast<std::int16_t>(z * v.z) };
		}

		constexpr inline Vector3i16Cxpr operator/(const Vector3i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(x / v.x), static_cast<std::int16_t>(y / v.y), static_cast<std::int16_t>(z / v.z) };
		}


		constexpr inline Vector3i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x + number), static_cast<std::int16_t>(y + number), static_cast<std::int16_t>(z + number) };
		}

		constexpr inline Vector3i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x - number), static_cast<std::int16_t>(y - number), static_cast<std::int16_t>(z - number) };
		}

		constexpr inline Vector3i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x * number), static_cast<std::int16_t>(y * number), static_cast<std::int16_t>(z * number) };
		}

		constexpr inline Vector3i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(x / number), static_cast<std::int16_t>(y / number), static_cast<std::int16_t>(z / number) };
		}


		// increment / decrement
		constexpr inline Vector3i16Cxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3i16Cxpr operator++ (int) noexcept {
			Vector3i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3i16Cxpr operator-- (int) noexcept {
			Vector3i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3i16Cxpr& operator+= (const Vector3i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x += right.x); static_cast<std::int16_t>(y += right.y); static_cast<std::int16_t>(z += right.z);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator-= (const Vector3i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x -= right.x); static_cast<std::int16_t>(y -= right.y); static_cast<std::int16_t>(z -= right.z);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator*= (const Vector3i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x *= right.x); static_cast<std::int16_t>(y *= right.y); static_cast<std::int16_t>(z *= right.z);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator/= (const Vector3i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(x /= right.x); static_cast<std::int16_t>(y /= right.y); static_cast<std::int16_t>(z /= right.z);
			return *this;
		}


		constexpr inline Vector3i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x += number); static_cast<std::int16_t>(y += number); static_cast<std::int16_t>(z += number);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x -= number); static_cast<std::int16_t>(y -= number); static_cast<std::int16_t>(z -= number);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x *= number); static_cast<std::int16_t>(y *= number); static_cast<std::int16_t>(z *= number);
			return *this;
		}

		constexpr inline Vector3i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(x /= number); static_cast<std::int16_t>(y /= number); static_cast<std::int16_t>(z /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3i16Cxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3i16Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3i16Cxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3i16Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3i16Cxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3i16Cxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4i16Cxpr
	{
	public:
		std::int16_t a, b, c, d;
	public:
		// Vector4i16Cxpr
		constexpr inline Vector4i16Cxpr() noexcept : a(0), b(0), c(0), d(0) {}
		constexpr inline Vector4i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4i16Cxpr(const Vector4i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4i16Cxpr& operator=(const Vector4i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4i16Cxpr(Vector4i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4i16Cxpr& operator=(Vector4i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4i16Cxpr operator+(const Vector4i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d) };
		}

		constexpr inline Vector4i16Cxpr operator-(const Vector4i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d) };
		}

		constexpr inline Vector4i16Cxpr operator*(const Vector4i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d) };
		}

		constexpr inline Vector4i16Cxpr operator/(const Vector4i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d) };
		}


		constexpr inline Vector4i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number) };
		}

		constexpr inline Vector4i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number) };
		}

		constexpr inline Vector4i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number) };
		}

		constexpr inline Vector4i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number) };
		}


		// increment / decrement
		constexpr inline Vector4i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4i16Cxpr operator++ (int) noexcept {
			Vector4i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4i16Cxpr operator-- (int) noexcept {
			Vector4i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4i16Cxpr& operator+= (const Vector4i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator-= (const Vector4i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator*= (const Vector4i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator/= (const Vector4i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d);
			return *this;
		}


		constexpr inline Vector4i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number);
			return *this;
		}

		constexpr inline Vector4i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e;
	public:
		// Vector5i16Cxpr
		constexpr inline Vector5i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0) {}
		constexpr inline Vector5i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5i16Cxpr(const Vector5i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5i16Cxpr& operator=(const Vector5i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5i16Cxpr(Vector5i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5i16Cxpr& operator=(Vector5i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5i16Cxpr operator+(const Vector5i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e) };
		}

		constexpr inline Vector5i16Cxpr operator-(const Vector5i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e) };
		}

		constexpr inline Vector5i16Cxpr operator*(const Vector5i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e) };
		}

		constexpr inline Vector5i16Cxpr operator/(const Vector5i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e) };
		}


		constexpr inline Vector5i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number) };
		}

		constexpr inline Vector5i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number) };
		}

		constexpr inline Vector5i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number) };
		}

		constexpr inline Vector5i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number) };
		}


		// increment / decrement
		constexpr inline Vector5i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5i16Cxpr operator++ (int) noexcept {
			Vector5i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5i16Cxpr operator-- (int) noexcept {
			Vector5i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5i16Cxpr& operator+= (const Vector5i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator-= (const Vector5i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator*= (const Vector5i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator/= (const Vector5i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e);
			return *this;
		}


		constexpr inline Vector5i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number);
			return *this;
		}

		constexpr inline Vector5i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e, f;
	public:
		// Vector6i16Cxpr
		constexpr inline Vector6i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0) {}
		constexpr inline Vector6i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6i16Cxpr(const Vector6i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6i16Cxpr& operator=(const Vector6i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6i16Cxpr(Vector6i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6i16Cxpr& operator=(Vector6i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6i16Cxpr operator+(const Vector6i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f) };
		}

		constexpr inline Vector6i16Cxpr operator-(const Vector6i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f) };
		}

		constexpr inline Vector6i16Cxpr operator*(const Vector6i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f) };
		}

		constexpr inline Vector6i16Cxpr operator/(const Vector6i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f) };
		}


		constexpr inline Vector6i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number) };
		}

		constexpr inline Vector6i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number) };
		}

		constexpr inline Vector6i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number) };
		}

		constexpr inline Vector6i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number) };
		}


		// increment / decrement
		constexpr inline Vector6i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6i16Cxpr operator++ (int) noexcept {
			Vector6i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6i16Cxpr operator-- (int) noexcept {
			Vector6i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6i16Cxpr& operator+= (const Vector6i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator-= (const Vector6i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator*= (const Vector6i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator/= (const Vector6i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f);
			return *this;
		}


		constexpr inline Vector6i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number);
			return *this;
		}

		constexpr inline Vector6i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e, f, g;
	public:
		// Vector7i16Cxpr
		constexpr inline Vector7i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		constexpr inline Vector7i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7i16Cxpr(const Vector7i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7i16Cxpr& operator=(const Vector7i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7i16Cxpr(Vector7i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7i16Cxpr& operator=(Vector7i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7i16Cxpr operator+(const Vector7i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g) };
		}

		constexpr inline Vector7i16Cxpr operator-(const Vector7i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g) };
		}

		constexpr inline Vector7i16Cxpr operator*(const Vector7i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g) };
		}

		constexpr inline Vector7i16Cxpr operator/(const Vector7i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g) };
		}


		constexpr inline Vector7i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number) };
		}

		constexpr inline Vector7i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number) };
		}

		constexpr inline Vector7i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number) };
		}

		constexpr inline Vector7i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number) };
		}


		// increment / decrement
		constexpr inline Vector7i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7i16Cxpr operator++ (int) noexcept {
			Vector7i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7i16Cxpr operator-- (int) noexcept {
			Vector7i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7i16Cxpr& operator+= (const Vector7i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator-= (const Vector7i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator*= (const Vector7i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator/= (const Vector7i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g);
			return *this;
		}


		constexpr inline Vector7i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number);
			return *this;
		}

		constexpr inline Vector7i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h;
	public:
		// Vector8i16Cxpr
		constexpr inline Vector8i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		constexpr inline Vector8i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8i16Cxpr(const Vector8i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8i16Cxpr& operator=(const Vector8i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8i16Cxpr(Vector8i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8i16Cxpr& operator=(Vector8i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8i16Cxpr operator+(const Vector8i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h) };
		}

		constexpr inline Vector8i16Cxpr operator-(const Vector8i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h) };
		}

		constexpr inline Vector8i16Cxpr operator*(const Vector8i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h) };
		}

		constexpr inline Vector8i16Cxpr operator/(const Vector8i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h) };
		}


		constexpr inline Vector8i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number) };
		}

		constexpr inline Vector8i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number) };
		}

		constexpr inline Vector8i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number) };
		}

		constexpr inline Vector8i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number) };
		}


		// increment / decrement
		constexpr inline Vector8i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8i16Cxpr operator++ (int) noexcept {
			Vector8i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8i16Cxpr operator-- (int) noexcept {
			Vector8i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8i16Cxpr& operator+= (const Vector8i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator-= (const Vector8i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator*= (const Vector8i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator/= (const Vector8i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h);
			return *this;
		}


		constexpr inline Vector8i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number);
			return *this;
		}

		constexpr inline Vector8i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h, i;
	public:
		// Vector9i16Cxpr
		constexpr inline Vector9i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		constexpr inline Vector9i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
			const std::int16_t i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9i16Cxpr(const Vector9i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9i16Cxpr& operator=(const Vector9i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9i16Cxpr(Vector9i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9i16Cxpr& operator=(Vector9i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9i16Cxpr operator+(const Vector9i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h), static_cast<std::int16_t>(i + v.i) };
		}

		constexpr inline Vector9i16Cxpr operator-(const Vector9i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h), static_cast<std::int16_t>(i - v.i) };
		}

		constexpr inline Vector9i16Cxpr operator*(const Vector9i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h), static_cast<std::int16_t>(i * v.i) };
		}

		constexpr inline Vector9i16Cxpr operator/(const Vector9i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h), static_cast<std::int16_t>(i / v.i) };
		}


		constexpr inline Vector9i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number), static_cast<std::int16_t>(i + number) };
		}

		constexpr inline Vector9i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number), static_cast<std::int16_t>(i - number) };
		}

		constexpr inline Vector9i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number), static_cast<std::int16_t>(i * number) };
		}

		constexpr inline Vector9i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number), static_cast<std::int16_t>(i / number) };
		}


		// increment / decrement
		constexpr inline Vector9i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9i16Cxpr operator++ (int) noexcept {
			Vector9i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9i16Cxpr operator-- (int) noexcept {
			Vector9i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9i16Cxpr& operator+= (const Vector9i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h); static_cast<std::int16_t>(i += right.i);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator-= (const Vector9i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h); static_cast<std::int16_t>(i -= right.i);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator*= (const Vector9i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h); static_cast<std::int16_t>(i *= right.i);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator/= (const Vector9i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h); static_cast<std::int16_t>(i /= right.i);
			return *this;
		}


		constexpr inline Vector9i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number); static_cast<std::int16_t>(i += number);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number); static_cast<std::int16_t>(i -= number);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number); static_cast<std::int16_t>(i *= number);
			return *this;
		}

		constexpr inline Vector9i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number); static_cast<std::int16_t>(i /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10i16Cxpr
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10i16Cxpr
		constexpr inline Vector10i16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		constexpr inline Vector10i16Cxpr(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
			const std::int16_t i, const std::int16_t j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10i16Cxpr(const Vector10i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10i16Cxpr& operator=(const Vector10i16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10i16Cxpr(Vector10i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10i16Cxpr& operator=(Vector10i16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10i16Cxpr& operator=(const std::int16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10i16Cxpr operator+(const Vector10i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a + v.a), static_cast<std::int16_t>(b + v.b), static_cast<std::int16_t>(c + v.c), static_cast<std::int16_t>(d + v.d), static_cast<std::int16_t>(e + v.e), static_cast<std::int16_t>(f + v.f), static_cast<std::int16_t>(g + v.g), static_cast<std::int16_t>(h + v.h), static_cast<std::int16_t>(i + v.i), static_cast<std::int16_t>(j + v.j) };
		}

		constexpr inline Vector10i16Cxpr operator-(const Vector10i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a - v.a), static_cast<std::int16_t>(b - v.b), static_cast<std::int16_t>(c - v.c), static_cast<std::int16_t>(d - v.d), static_cast<std::int16_t>(e - v.e), static_cast<std::int16_t>(f - v.f), static_cast<std::int16_t>(g - v.g), static_cast<std::int16_t>(h - v.h), static_cast<std::int16_t>(i - v.i), static_cast<std::int16_t>(j - v.j) };
		}

		constexpr inline Vector10i16Cxpr operator*(const Vector10i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a * v.a), static_cast<std::int16_t>(b * v.b), static_cast<std::int16_t>(c * v.c), static_cast<std::int16_t>(d * v.d), static_cast<std::int16_t>(e * v.e), static_cast<std::int16_t>(f * v.f), static_cast<std::int16_t>(g * v.g), static_cast<std::int16_t>(h * v.h), static_cast<std::int16_t>(i * v.i), static_cast<std::int16_t>(j * v.j) };
		}

		constexpr inline Vector10i16Cxpr operator/(const Vector10i16Cxpr& v) const noexcept {
			return { static_cast<std::int16_t>(a / v.a), static_cast<std::int16_t>(b / v.b), static_cast<std::int16_t>(c / v.c), static_cast<std::int16_t>(d / v.d), static_cast<std::int16_t>(e / v.e), static_cast<std::int16_t>(f / v.f), static_cast<std::int16_t>(g / v.g), static_cast<std::int16_t>(h / v.h), static_cast<std::int16_t>(i / v.i), static_cast<std::int16_t>(j / v.j) };
		}


		constexpr inline Vector10i16Cxpr operator+(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a + number), static_cast<std::int16_t>(b + number), static_cast<std::int16_t>(c + number), static_cast<std::int16_t>(d + number), static_cast<std::int16_t>(e + number), static_cast<std::int16_t>(f + number), static_cast<std::int16_t>(g + number), static_cast<std::int16_t>(h + number), static_cast<std::int16_t>(i + number), static_cast<std::int16_t>(j + number) };
		}

		constexpr inline Vector10i16Cxpr operator-(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a - number), static_cast<std::int16_t>(b - number), static_cast<std::int16_t>(c - number), static_cast<std::int16_t>(d - number), static_cast<std::int16_t>(e - number), static_cast<std::int16_t>(f - number), static_cast<std::int16_t>(g - number), static_cast<std::int16_t>(h - number), static_cast<std::int16_t>(i - number), static_cast<std::int16_t>(j - number) };
		}

		constexpr inline Vector10i16Cxpr operator*(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a * number), static_cast<std::int16_t>(b * number), static_cast<std::int16_t>(c * number), static_cast<std::int16_t>(d * number), static_cast<std::int16_t>(e * number), static_cast<std::int16_t>(f * number), static_cast<std::int16_t>(g * number), static_cast<std::int16_t>(h * number), static_cast<std::int16_t>(i * number), static_cast<std::int16_t>(j * number) };
		}

		constexpr inline Vector10i16Cxpr operator/(const std::int16_t number) const noexcept {
			return { static_cast<std::int16_t>(a / number), static_cast<std::int16_t>(b / number), static_cast<std::int16_t>(c / number), static_cast<std::int16_t>(d / number), static_cast<std::int16_t>(e / number), static_cast<std::int16_t>(f / number), static_cast<std::int16_t>(g / number), static_cast<std::int16_t>(h / number), static_cast<std::int16_t>(i / number), static_cast<std::int16_t>(j / number) };
		}


		// increment / decrement
		constexpr inline Vector10i16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10i16Cxpr operator++ (int) noexcept {
			Vector10i16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10i16Cxpr operator-- (int) noexcept {
			Vector10i16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10i16Cxpr& operator+= (const Vector10i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a += right.a); static_cast<std::int16_t>(b += right.b); static_cast<std::int16_t>(c += right.c); static_cast<std::int16_t>(d += right.d); static_cast<std::int16_t>(e += right.e); static_cast<std::int16_t>(f += right.f); static_cast<std::int16_t>(g += right.g); static_cast<std::int16_t>(h += right.h); static_cast<std::int16_t>(i += right.i); static_cast<std::int16_t>(j += right.j);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator-= (const Vector10i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a -= right.a); static_cast<std::int16_t>(b -= right.b); static_cast<std::int16_t>(c -= right.c); static_cast<std::int16_t>(d -= right.d); static_cast<std::int16_t>(e -= right.e); static_cast<std::int16_t>(f -= right.f); static_cast<std::int16_t>(g -= right.g); static_cast<std::int16_t>(h -= right.h); static_cast<std::int16_t>(i -= right.i); static_cast<std::int16_t>(j -= right.j);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator*= (const Vector10i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a *= right.a); static_cast<std::int16_t>(b *= right.b); static_cast<std::int16_t>(c *= right.c); static_cast<std::int16_t>(d *= right.d); static_cast<std::int16_t>(e *= right.e); static_cast<std::int16_t>(f *= right.f); static_cast<std::int16_t>(g *= right.g); static_cast<std::int16_t>(h *= right.h); static_cast<std::int16_t>(i *= right.i); static_cast<std::int16_t>(j *= right.j);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator/= (const Vector10i16Cxpr& right) noexcept {
			static_cast<std::int16_t>(a /= right.a); static_cast<std::int16_t>(b /= right.b); static_cast<std::int16_t>(c /= right.c); static_cast<std::int16_t>(d /= right.d); static_cast<std::int16_t>(e /= right.e); static_cast<std::int16_t>(f /= right.f); static_cast<std::int16_t>(g /= right.g); static_cast<std::int16_t>(h /= right.h); static_cast<std::int16_t>(i /= right.i); static_cast<std::int16_t>(j /= right.j);
			return *this;
		}


		constexpr inline Vector10i16Cxpr& operator+= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a += number); static_cast<std::int16_t>(b += number); static_cast<std::int16_t>(c += number); static_cast<std::int16_t>(d += number); static_cast<std::int16_t>(e += number); static_cast<std::int16_t>(f += number); static_cast<std::int16_t>(g += number); static_cast<std::int16_t>(h += number); static_cast<std::int16_t>(i += number); static_cast<std::int16_t>(j += number);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator-= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a -= number); static_cast<std::int16_t>(b -= number); static_cast<std::int16_t>(c -= number); static_cast<std::int16_t>(d -= number); static_cast<std::int16_t>(e -= number); static_cast<std::int16_t>(f -= number); static_cast<std::int16_t>(g -= number); static_cast<std::int16_t>(h -= number); static_cast<std::int16_t>(i -= number); static_cast<std::int16_t>(j -= number);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator*= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a *= number); static_cast<std::int16_t>(b *= number); static_cast<std::int16_t>(c *= number); static_cast<std::int16_t>(d *= number); static_cast<std::int16_t>(e *= number); static_cast<std::int16_t>(f *= number); static_cast<std::int16_t>(g *= number); static_cast<std::int16_t>(h *= number); static_cast<std::int16_t>(i *= number); static_cast<std::int16_t>(j *= number);
			return *this;
		}

		constexpr inline Vector10i16Cxpr& operator/= (const std::int16_t number) noexcept {
			static_cast<std::int16_t>(a /= number); static_cast<std::int16_t>(b /= number); static_cast<std::int16_t>(c /= number); static_cast<std::int16_t>(d /= number); static_cast<std::int16_t>(e /= number); static_cast<std::int16_t>(f /= number); static_cast<std::int16_t>(g /= number); static_cast<std::int16_t>(h /= number); static_cast<std::int16_t>(i /= number); static_cast<std::int16_t>(j /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10i16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10i16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10i16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10i16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const std::int16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const std::int16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const std::int16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const std::int16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10i16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10i16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const std::int16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const std::int16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const std::int16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::int16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::int16_t& at(const std::uint8_t index) noexcept
		{
			std::int16_t* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2i16Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3i16Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10i16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
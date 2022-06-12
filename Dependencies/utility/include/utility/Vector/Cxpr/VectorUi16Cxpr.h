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

		Type : std::uint16_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	class Vector2ui16Cxpr
	{
	public:
		std::uint16_t x, y;
	public:
		// Vector2ui16Cxpr
		constexpr inline Vector2ui16Cxpr() noexcept : x(0), y(0) {}
		constexpr inline Vector2ui16Cxpr(const std::uint16_t x, const std::uint16_t y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2ui16Cxpr(const Vector2ui16Cxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2ui16Cxpr& operator=(const Vector2ui16Cxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2ui16Cxpr(Vector2ui16Cxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2ui16Cxpr& operator=(Vector2ui16Cxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2ui16Cxpr operator+(const Vector2ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x + v.x), static_cast<std::uint16_t>(y + v.y) };
		}

		constexpr inline Vector2ui16Cxpr operator-(const Vector2ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x - v.x), static_cast<std::uint16_t>(y - v.y) };
		}

		constexpr inline Vector2ui16Cxpr operator*(const Vector2ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x * v.x), static_cast<std::uint16_t>(y * v.y) };
		}

		constexpr inline Vector2ui16Cxpr operator/(const Vector2ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x / v.x), static_cast<std::uint16_t>(y / v.y) };
		}


		constexpr inline Vector2ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x + number), static_cast<std::uint16_t>(y + number) };
		}

		constexpr inline Vector2ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x - number), static_cast<std::uint16_t>(y - number) };
		}

		constexpr inline Vector2ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x * number), static_cast<std::uint16_t>(y * number) };
		}

		constexpr inline Vector2ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x / number), static_cast<std::uint16_t>(y / number) };
		}


		// increment / decrement
		constexpr inline Vector2ui16Cxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2ui16Cxpr operator++ (int) noexcept {
			Vector2ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2ui16Cxpr operator-- (int) noexcept {
			Vector2ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2ui16Cxpr& operator+= (const Vector2ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x += right.x); static_cast<std::uint16_t>(y += right.y);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator-= (const Vector2ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x -= right.x); static_cast<std::uint16_t>(y -= right.y);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator*= (const Vector2ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x *= right.x); static_cast<std::uint16_t>(y *= right.y);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator/= (const Vector2ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x /= right.x); static_cast<std::uint16_t>(y /= right.y);
			return *this;
		}


		constexpr inline Vector2ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x += number); static_cast<std::uint16_t>(y += number);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x -= number); static_cast<std::uint16_t>(y -= number);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x *= number); static_cast<std::uint16_t>(y *= number);
			return *this;
		}

		constexpr inline Vector2ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x /= number); static_cast<std::uint16_t>(y /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2ui16Cxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2ui16Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2ui16Cxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2ui16Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2ui16Cxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2ui16Cxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3ui16Cxpr
	{
	public:
		std::uint16_t x, y, z;
	public:
		constexpr inline Vector3ui16Cxpr() noexcept : x(0), y(0), z(0) {}
		constexpr inline Vector3ui16Cxpr(const std::uint16_t x, const std::uint16_t y, const std::uint16_t z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3ui16Cxpr(const Vector3ui16Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3ui16Cxpr& operator=(const Vector3ui16Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3ui16Cxpr(Vector3ui16Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3ui16Cxpr& operator=(Vector3ui16Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3ui16Cxpr operator+(const Vector3ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x + v.x), static_cast<std::uint16_t>(y + v.y), static_cast<std::uint16_t>(z + v.z) };
		}

		constexpr inline Vector3ui16Cxpr operator-(const Vector3ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x - v.x), static_cast<std::uint16_t>(y - v.y), static_cast<std::uint16_t>(z - v.z) };
		}

		constexpr inline Vector3ui16Cxpr operator*(const Vector3ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x * v.x), static_cast<std::uint16_t>(y * v.y), static_cast<std::uint16_t>(z * v.z) };
		}

		constexpr inline Vector3ui16Cxpr operator/(const Vector3ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(x / v.x), static_cast<std::uint16_t>(y / v.y), static_cast<std::uint16_t>(z / v.z) };
		}


		constexpr inline Vector3ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x + number), static_cast<std::uint16_t>(y + number), static_cast<std::uint16_t>(z + number) };
		}

		constexpr inline Vector3ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x - number), static_cast<std::uint16_t>(y - number), static_cast<std::uint16_t>(z - number) };
		}

		constexpr inline Vector3ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x * number), static_cast<std::uint16_t>(y * number), static_cast<std::uint16_t>(z * number) };
		}

		constexpr inline Vector3ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(x / number), static_cast<std::uint16_t>(y / number), static_cast<std::uint16_t>(z / number) };
		}


		// increment / decrement
		constexpr inline Vector3ui16Cxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3ui16Cxpr operator++ (int) noexcept {
			Vector3ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3ui16Cxpr operator-- (int) noexcept {
			Vector3ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3ui16Cxpr& operator+= (const Vector3ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x += right.x); static_cast<std::uint16_t>(y += right.y); static_cast<std::uint16_t>(z += right.z);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator-= (const Vector3ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x -= right.x); static_cast<std::uint16_t>(y -= right.y); static_cast<std::uint16_t>(z -= right.z);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator*= (const Vector3ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x *= right.x); static_cast<std::uint16_t>(y *= right.y); static_cast<std::uint16_t>(z *= right.z);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator/= (const Vector3ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(x /= right.x); static_cast<std::uint16_t>(y /= right.y); static_cast<std::uint16_t>(z /= right.z);
			return *this;
		}


		constexpr inline Vector3ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x += number); static_cast<std::uint16_t>(y += number); static_cast<std::uint16_t>(z += number);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x -= number); static_cast<std::uint16_t>(y -= number); static_cast<std::uint16_t>(z -= number);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x *= number); static_cast<std::uint16_t>(y *= number); static_cast<std::uint16_t>(z *= number);
			return *this;
		}

		constexpr inline Vector3ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(x /= number); static_cast<std::uint16_t>(y /= number); static_cast<std::uint16_t>(z /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3ui16Cxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3ui16Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3ui16Cxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3ui16Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3ui16Cxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3ui16Cxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d;
	public:
		// Vector4ui16Cxpr
		constexpr inline Vector4ui16Cxpr() noexcept : a(0), b(0), c(0), d(0) {}
		constexpr inline Vector4ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4ui16Cxpr(const Vector4ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4ui16Cxpr& operator=(const Vector4ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4ui16Cxpr(Vector4ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4ui16Cxpr& operator=(Vector4ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4ui16Cxpr operator+(const Vector4ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d) };
		}

		constexpr inline Vector4ui16Cxpr operator-(const Vector4ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d) };
		}

		constexpr inline Vector4ui16Cxpr operator*(const Vector4ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d) };
		}

		constexpr inline Vector4ui16Cxpr operator/(const Vector4ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d) };
		}


		constexpr inline Vector4ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number) };
		}

		constexpr inline Vector4ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number) };
		}

		constexpr inline Vector4ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number) };
		}

		constexpr inline Vector4ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number) };
		}


		// increment / decrement
		constexpr inline Vector4ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4ui16Cxpr operator++ (int) noexcept {
			Vector4ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4ui16Cxpr operator-- (int) noexcept {
			Vector4ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4ui16Cxpr& operator+= (const Vector4ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator-= (const Vector4ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator*= (const Vector4ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator/= (const Vector4ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d);
			return *this;
		}


		constexpr inline Vector4ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number);
			return *this;
		}

		constexpr inline Vector4ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e;
	public:
		// Vector5ui16Cxpr
		constexpr inline Vector5ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0) {}
		constexpr inline Vector5ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5ui16Cxpr(const Vector5ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5ui16Cxpr& operator=(const Vector5ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5ui16Cxpr(Vector5ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5ui16Cxpr& operator=(Vector5ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5ui16Cxpr operator+(const Vector5ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e) };
		}

		constexpr inline Vector5ui16Cxpr operator-(const Vector5ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e) };
		}

		constexpr inline Vector5ui16Cxpr operator*(const Vector5ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e) };
		}

		constexpr inline Vector5ui16Cxpr operator/(const Vector5ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e) };
		}


		constexpr inline Vector5ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number) };
		}

		constexpr inline Vector5ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number) };
		}

		constexpr inline Vector5ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number) };
		}

		constexpr inline Vector5ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number) };
		}


		// increment / decrement
		constexpr inline Vector5ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5ui16Cxpr operator++ (int) noexcept {
			Vector5ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5ui16Cxpr operator-- (int) noexcept {
			Vector5ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5ui16Cxpr& operator+= (const Vector5ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator-= (const Vector5ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator*= (const Vector5ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator/= (const Vector5ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e);
			return *this;
		}


		constexpr inline Vector5ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number);
			return *this;
		}

		constexpr inline Vector5ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e, f;
	public:
		// Vector6ui16Cxpr
		constexpr inline Vector6ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0) {}
		constexpr inline Vector6ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6ui16Cxpr(const Vector6ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6ui16Cxpr& operator=(const Vector6ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6ui16Cxpr(Vector6ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6ui16Cxpr& operator=(Vector6ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6ui16Cxpr operator+(const Vector6ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f) };
		}

		constexpr inline Vector6ui16Cxpr operator-(const Vector6ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f) };
		}

		constexpr inline Vector6ui16Cxpr operator*(const Vector6ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f) };
		}

		constexpr inline Vector6ui16Cxpr operator/(const Vector6ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f) };
		}


		constexpr inline Vector6ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number) };
		}

		constexpr inline Vector6ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number) };
		}

		constexpr inline Vector6ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number) };
		}

		constexpr inline Vector6ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number) };
		}


		// increment / decrement
		constexpr inline Vector6ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6ui16Cxpr operator++ (int) noexcept {
			Vector6ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6ui16Cxpr operator-- (int) noexcept {
			Vector6ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6ui16Cxpr& operator+= (const Vector6ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator-= (const Vector6ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator*= (const Vector6ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator/= (const Vector6ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f);
			return *this;
		}


		constexpr inline Vector6ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number);
			return *this;
		}

		constexpr inline Vector6ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e, f, g;
	public:
		// Vector7ui16Cxpr
		constexpr inline Vector7ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		constexpr inline Vector7ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7ui16Cxpr(const Vector7ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7ui16Cxpr& operator=(const Vector7ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7ui16Cxpr(Vector7ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7ui16Cxpr& operator=(Vector7ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7ui16Cxpr operator+(const Vector7ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g) };
		}

		constexpr inline Vector7ui16Cxpr operator-(const Vector7ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g) };
		}

		constexpr inline Vector7ui16Cxpr operator*(const Vector7ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g) };
		}

		constexpr inline Vector7ui16Cxpr operator/(const Vector7ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g) };
		}


		constexpr inline Vector7ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number) };
		}

		constexpr inline Vector7ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number) };
		}

		constexpr inline Vector7ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number) };
		}

		constexpr inline Vector7ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number) };
		}


		// increment / decrement
		constexpr inline Vector7ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7ui16Cxpr operator++ (int) noexcept {
			Vector7ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7ui16Cxpr operator-- (int) noexcept {
			Vector7ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7ui16Cxpr& operator+= (const Vector7ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator-= (const Vector7ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator*= (const Vector7ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator/= (const Vector7ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g);
			return *this;
		}


		constexpr inline Vector7ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number);
			return *this;
		}

		constexpr inline Vector7ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h;
	public:
		// Vector8ui16Cxpr
		constexpr inline Vector8ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		constexpr inline Vector8ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8ui16Cxpr(const Vector8ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8ui16Cxpr& operator=(const Vector8ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8ui16Cxpr(Vector8ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8ui16Cxpr& operator=(Vector8ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8ui16Cxpr operator+(const Vector8ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h) };
		}

		constexpr inline Vector8ui16Cxpr operator-(const Vector8ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h) };
		}

		constexpr inline Vector8ui16Cxpr operator*(const Vector8ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h) };
		}

		constexpr inline Vector8ui16Cxpr operator/(const Vector8ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h) };
		}


		constexpr inline Vector8ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number) };
		}

		constexpr inline Vector8ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number) };
		}

		constexpr inline Vector8ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number) };
		}

		constexpr inline Vector8ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number) };
		}


		// increment / decrement
		constexpr inline Vector8ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8ui16Cxpr operator++ (int) noexcept {
			Vector8ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8ui16Cxpr operator-- (int) noexcept {
			Vector8ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8ui16Cxpr& operator+= (const Vector8ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator-= (const Vector8ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator*= (const Vector8ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator/= (const Vector8ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h);
			return *this;
		}


		constexpr inline Vector8ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number);
			return *this;
		}

		constexpr inline Vector8ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h, i;
	public:
		// Vector9ui16Cxpr
		constexpr inline Vector9ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		constexpr inline Vector9ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
			const std::uint16_t i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9ui16Cxpr(const Vector9ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9ui16Cxpr& operator=(const Vector9ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9ui16Cxpr(Vector9ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9ui16Cxpr& operator=(Vector9ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9ui16Cxpr operator+(const Vector9ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h), static_cast<std::uint16_t>(i + v.i) };
		}

		constexpr inline Vector9ui16Cxpr operator-(const Vector9ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h), static_cast<std::uint16_t>(i - v.i) };
		}

		constexpr inline Vector9ui16Cxpr operator*(const Vector9ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h), static_cast<std::uint16_t>(i * v.i) };
		}

		constexpr inline Vector9ui16Cxpr operator/(const Vector9ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h), static_cast<std::uint16_t>(i / v.i) };
		}


		constexpr inline Vector9ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number), static_cast<std::uint16_t>(i + number) };
		}

		constexpr inline Vector9ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number), static_cast<std::uint16_t>(i - number) };
		}

		constexpr inline Vector9ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number), static_cast<std::uint16_t>(i * number) };
		}

		constexpr inline Vector9ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number), static_cast<std::uint16_t>(i / number) };
		}


		// increment / decrement
		constexpr inline Vector9ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9ui16Cxpr operator++ (int) noexcept {
			Vector9ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9ui16Cxpr operator-- (int) noexcept {
			Vector9ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9ui16Cxpr& operator+= (const Vector9ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h); static_cast<std::uint16_t>(i += right.i);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator-= (const Vector9ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h); static_cast<std::uint16_t>(i -= right.i);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator*= (const Vector9ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h); static_cast<std::uint16_t>(i *= right.i);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator/= (const Vector9ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h); static_cast<std::uint16_t>(i /= right.i);
			return *this;
		}


		constexpr inline Vector9ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number); static_cast<std::uint16_t>(i += number);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number); static_cast<std::uint16_t>(i -= number);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number); static_cast<std::uint16_t>(i *= number);
			return *this;
		}

		constexpr inline Vector9ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number); static_cast<std::uint16_t>(i /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10ui16Cxpr
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10ui16Cxpr
		constexpr inline Vector10ui16Cxpr() noexcept : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		constexpr inline Vector10ui16Cxpr(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
			const std::uint16_t i, const std::uint16_t j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10ui16Cxpr(const Vector10ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10ui16Cxpr& operator=(const Vector10ui16Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10ui16Cxpr(Vector10ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10ui16Cxpr& operator=(Vector10ui16Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10ui16Cxpr& operator=(const std::uint16_t number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10ui16Cxpr operator+(const Vector10ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a + v.a), static_cast<std::uint16_t>(b + v.b), static_cast<std::uint16_t>(c + v.c), static_cast<std::uint16_t>(d + v.d), static_cast<std::uint16_t>(e + v.e), static_cast<std::uint16_t>(f + v.f), static_cast<std::uint16_t>(g + v.g), static_cast<std::uint16_t>(h + v.h), static_cast<std::uint16_t>(i + v.i), static_cast<std::uint16_t>(j + v.j) };
		}

		constexpr inline Vector10ui16Cxpr operator-(const Vector10ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a - v.a), static_cast<std::uint16_t>(b - v.b), static_cast<std::uint16_t>(c - v.c), static_cast<std::uint16_t>(d - v.d), static_cast<std::uint16_t>(e - v.e), static_cast<std::uint16_t>(f - v.f), static_cast<std::uint16_t>(g - v.g), static_cast<std::uint16_t>(h - v.h), static_cast<std::uint16_t>(i - v.i), static_cast<std::uint16_t>(j - v.j) };
		}

		constexpr inline Vector10ui16Cxpr operator*(const Vector10ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a * v.a), static_cast<std::uint16_t>(b * v.b), static_cast<std::uint16_t>(c * v.c), static_cast<std::uint16_t>(d * v.d), static_cast<std::uint16_t>(e * v.e), static_cast<std::uint16_t>(f * v.f), static_cast<std::uint16_t>(g * v.g), static_cast<std::uint16_t>(h * v.h), static_cast<std::uint16_t>(i * v.i), static_cast<std::uint16_t>(j * v.j) };
		}

		constexpr inline Vector10ui16Cxpr operator/(const Vector10ui16Cxpr& v) const noexcept {
			return { static_cast<std::uint16_t>(a / v.a), static_cast<std::uint16_t>(b / v.b), static_cast<std::uint16_t>(c / v.c), static_cast<std::uint16_t>(d / v.d), static_cast<std::uint16_t>(e / v.e), static_cast<std::uint16_t>(f / v.f), static_cast<std::uint16_t>(g / v.g), static_cast<std::uint16_t>(h / v.h), static_cast<std::uint16_t>(i / v.i), static_cast<std::uint16_t>(j / v.j) };
		}


		constexpr inline Vector10ui16Cxpr operator+(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a + number), static_cast<std::uint16_t>(b + number), static_cast<std::uint16_t>(c + number), static_cast<std::uint16_t>(d + number), static_cast<std::uint16_t>(e + number), static_cast<std::uint16_t>(f + number), static_cast<std::uint16_t>(g + number), static_cast<std::uint16_t>(h + number), static_cast<std::uint16_t>(i + number), static_cast<std::uint16_t>(j + number) };
		}

		constexpr inline Vector10ui16Cxpr operator-(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a - number), static_cast<std::uint16_t>(b - number), static_cast<std::uint16_t>(c - number), static_cast<std::uint16_t>(d - number), static_cast<std::uint16_t>(e - number), static_cast<std::uint16_t>(f - number), static_cast<std::uint16_t>(g - number), static_cast<std::uint16_t>(h - number), static_cast<std::uint16_t>(i - number), static_cast<std::uint16_t>(j - number) };
		}

		constexpr inline Vector10ui16Cxpr operator*(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a * number), static_cast<std::uint16_t>(b * number), static_cast<std::uint16_t>(c * number), static_cast<std::uint16_t>(d * number), static_cast<std::uint16_t>(e * number), static_cast<std::uint16_t>(f * number), static_cast<std::uint16_t>(g * number), static_cast<std::uint16_t>(h * number), static_cast<std::uint16_t>(i * number), static_cast<std::uint16_t>(j * number) };
		}

		constexpr inline Vector10ui16Cxpr operator/(const std::uint16_t number) const noexcept {
			return { static_cast<std::uint16_t>(a / number), static_cast<std::uint16_t>(b / number), static_cast<std::uint16_t>(c / number), static_cast<std::uint16_t>(d / number), static_cast<std::uint16_t>(e / number), static_cast<std::uint16_t>(f / number), static_cast<std::uint16_t>(g / number), static_cast<std::uint16_t>(h / number), static_cast<std::uint16_t>(i / number), static_cast<std::uint16_t>(j / number) };
		}


		// increment / decrement
		constexpr inline Vector10ui16Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10ui16Cxpr operator++ (int) noexcept {
			Vector10ui16Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10ui16Cxpr operator-- (int) noexcept {
			Vector10ui16Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10ui16Cxpr& operator+= (const Vector10ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a += right.a); static_cast<std::uint16_t>(b += right.b); static_cast<std::uint16_t>(c += right.c); static_cast<std::uint16_t>(d += right.d); static_cast<std::uint16_t>(e += right.e); static_cast<std::uint16_t>(f += right.f); static_cast<std::uint16_t>(g += right.g); static_cast<std::uint16_t>(h += right.h); static_cast<std::uint16_t>(i += right.i); static_cast<std::uint16_t>(j += right.j);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator-= (const Vector10ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a -= right.a); static_cast<std::uint16_t>(b -= right.b); static_cast<std::uint16_t>(c -= right.c); static_cast<std::uint16_t>(d -= right.d); static_cast<std::uint16_t>(e -= right.e); static_cast<std::uint16_t>(f -= right.f); static_cast<std::uint16_t>(g -= right.g); static_cast<std::uint16_t>(h -= right.h); static_cast<std::uint16_t>(i -= right.i); static_cast<std::uint16_t>(j -= right.j);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator*= (const Vector10ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a *= right.a); static_cast<std::uint16_t>(b *= right.b); static_cast<std::uint16_t>(c *= right.c); static_cast<std::uint16_t>(d *= right.d); static_cast<std::uint16_t>(e *= right.e); static_cast<std::uint16_t>(f *= right.f); static_cast<std::uint16_t>(g *= right.g); static_cast<std::uint16_t>(h *= right.h); static_cast<std::uint16_t>(i *= right.i); static_cast<std::uint16_t>(j *= right.j);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator/= (const Vector10ui16Cxpr& right) noexcept {
			static_cast<std::uint16_t>(a /= right.a); static_cast<std::uint16_t>(b /= right.b); static_cast<std::uint16_t>(c /= right.c); static_cast<std::uint16_t>(d /= right.d); static_cast<std::uint16_t>(e /= right.e); static_cast<std::uint16_t>(f /= right.f); static_cast<std::uint16_t>(g /= right.g); static_cast<std::uint16_t>(h /= right.h); static_cast<std::uint16_t>(i /= right.i); static_cast<std::uint16_t>(j /= right.j);
			return *this;
		}


		constexpr inline Vector10ui16Cxpr& operator+= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a += number); static_cast<std::uint16_t>(b += number); static_cast<std::uint16_t>(c += number); static_cast<std::uint16_t>(d += number); static_cast<std::uint16_t>(e += number); static_cast<std::uint16_t>(f += number); static_cast<std::uint16_t>(g += number); static_cast<std::uint16_t>(h += number); static_cast<std::uint16_t>(i += number); static_cast<std::uint16_t>(j += number);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator-= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a -= number); static_cast<std::uint16_t>(b -= number); static_cast<std::uint16_t>(c -= number); static_cast<std::uint16_t>(d -= number); static_cast<std::uint16_t>(e -= number); static_cast<std::uint16_t>(f -= number); static_cast<std::uint16_t>(g -= number); static_cast<std::uint16_t>(h -= number); static_cast<std::uint16_t>(i -= number); static_cast<std::uint16_t>(j -= number);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator*= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a *= number); static_cast<std::uint16_t>(b *= number); static_cast<std::uint16_t>(c *= number); static_cast<std::uint16_t>(d *= number); static_cast<std::uint16_t>(e *= number); static_cast<std::uint16_t>(f *= number); static_cast<std::uint16_t>(g *= number); static_cast<std::uint16_t>(h *= number); static_cast<std::uint16_t>(i *= number); static_cast<std::uint16_t>(j *= number);
			return *this;
		}

		constexpr inline Vector10ui16Cxpr& operator/= (const std::uint16_t number) noexcept {
			static_cast<std::uint16_t>(a /= number); static_cast<std::uint16_t>(b /= number); static_cast<std::uint16_t>(c /= number); static_cast<std::uint16_t>(d /= number); static_cast<std::uint16_t>(e /= number); static_cast<std::uint16_t>(f /= number); static_cast<std::uint16_t>(g /= number); static_cast<std::uint16_t>(h /= number); static_cast<std::uint16_t>(i /= number); static_cast<std::uint16_t>(j /= number);
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10ui16Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10ui16Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10ui16Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10ui16Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const std::uint16_t number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const std::uint16_t number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const std::uint16_t number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const std::uint16_t number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10ui16Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10ui16Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const std::uint16_t number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const std::uint16_t number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const std::uint16_t stnd_value = 0) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline std::uint16_t& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline std::uint16_t& at(const std::uint8_t index) noexcept
		{
			std::uint16_t* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui16Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui16Cxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui16Cxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
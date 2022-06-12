#pragma once
#include <iostream>

namespace util::math {

	template<class T>
	class Vector2Cxpr
	{
	public:
		T x, y;
	public:
		// Vector2Cxpr
		constexpr inline Vector2Cxpr() noexcept : x(), y() {}
		constexpr inline Vector2Cxpr(const T x, const T y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2Cxpr(const Vector2Cxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2Cxpr& operator=(const Vector2Cxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2Cxpr(Vector2Cxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2Cxpr& operator=(Vector2Cxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2Cxpr& operator=(const T number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2Cxpr operator+(const Vector2Cxpr& v) const noexcept {
			return { x + v.x, y + v.y };
		}

		constexpr inline Vector2Cxpr operator-(const Vector2Cxpr& v) const noexcept {
			return { x - v.x, y - v.y };
		}

		constexpr inline Vector2Cxpr operator*(const Vector2Cxpr& v) const noexcept {
			return { x * v.x, y * v.y };
		}

		constexpr inline Vector2Cxpr operator/(const Vector2Cxpr& v) const noexcept {
			return { x / v.x, y / v.y };
		}


		constexpr inline Vector2Cxpr operator+(const T number) const noexcept {
			return { x + number, y + number };
		}

		constexpr inline Vector2Cxpr operator-(const T number) const noexcept {
			return { x - number, y - number };
		}

		constexpr inline Vector2Cxpr operator*(const T number) const noexcept {
			return { x * number, y * number };
		}

		constexpr inline Vector2Cxpr operator/(const T number) const noexcept {
			return { x / number, y / number };
		}


		// increment / decrement
		constexpr inline Vector2Cxpr& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2Cxpr operator++ (int) noexcept {
			Vector2Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2Cxpr operator-- (int) noexcept {
			Vector2Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2Cxpr& operator+= (const Vector2Cxpr& right) noexcept {
			x += right.x; y += right.y;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator-= (const Vector2Cxpr& right) noexcept {
			x -= right.x; y -= right.y;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator*= (const Vector2Cxpr& right) noexcept {
			x *= right.x; y *= right.y;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator/= (const Vector2Cxpr& right) noexcept {
			x /= right.x; y /= right.y;
			return *this;
		}


		constexpr inline Vector2Cxpr& operator+= (const T number) noexcept {
			x += number; y += number;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator-= (const T number) noexcept {
			x -= number; y -= number;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator*= (const T number) noexcept {
			x *= number; y *= number;
			return *this;
		}

		constexpr inline Vector2Cxpr& operator/= (const T number) noexcept {
			x /= number; y /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2Cxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2Cxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2Cxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2Cxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	template<class T>
	class Vector3Cxpr
	{
	public:
		T x, y, z;
	public:
		constexpr inline Vector3Cxpr() noexcept : x(), y(), z() {}
		constexpr inline Vector3Cxpr(const T x, const T y, const T z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3Cxpr(const Vector3Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3Cxpr& operator=(const Vector3Cxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3Cxpr(Vector3Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3Cxpr& operator=(Vector3Cxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3Cxpr& operator=(const T number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3Cxpr operator+(const Vector3Cxpr& v) const noexcept {
			return { x + v.x, y + v.y, z + v.z };
		}

		constexpr inline Vector3Cxpr operator-(const Vector3Cxpr& v) const noexcept {
			return { x - v.x, y - v.y, z - v.z };
		}

		constexpr inline Vector3Cxpr operator*(const Vector3Cxpr& v) const noexcept {
			return { x * v.x, y * v.y, z * v.z };
		}

		constexpr inline Vector3Cxpr operator/(const Vector3Cxpr& v) const noexcept {
			return { x / v.x, y / v.y, z / v.z };
		}


		constexpr inline Vector3Cxpr operator+(const T number) const noexcept {
			return { x + number, y + number, z + number };
		}

		constexpr inline Vector3Cxpr operator-(const T number) const noexcept {
			return { x - number, y - number, z - number };
		}

		constexpr inline Vector3Cxpr operator*(const T number) const noexcept {
			return { x * number, y * number, z * number };
		}

		constexpr inline Vector3Cxpr operator/(const T number) const noexcept {
			return { x / number, y / number, z / number };
		}


		// increment / decrement
		constexpr inline Vector3Cxpr& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3Cxpr operator++ (int) noexcept {
			Vector3Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3Cxpr operator-- (int) noexcept {
			Vector3Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3Cxpr& operator+= (const Vector3Cxpr& right) noexcept {
			x += right.x; y += right.y; z += right.z;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator-= (const Vector3Cxpr& right) noexcept {
			x -= right.x; y -= right.y; z -= right.z;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator*= (const Vector3Cxpr& right) noexcept {
			x *= right.x; y *= right.y; z *= right.z;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator/= (const Vector3Cxpr& right) noexcept {
			x /= right.x; y /= right.y; z /= right.z;
			return *this;
		}


		constexpr inline Vector3Cxpr& operator+= (const T number) noexcept {
			x += number; y += number; z += number;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator-= (const T number) noexcept {
			x -= number; y -= number; z -= number;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator*= (const T number) noexcept {
			x *= number; y *= number; z *= number;
			return *this;
		}

		constexpr inline Vector3Cxpr& operator/= (const T number) noexcept {
			x /= number; y /= number; z /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3Cxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3Cxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3Cxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3Cxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3Cxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3Cxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector4Cxpr
	{
	public:
		T a, b, c, d;
	public:
		// Vector4Cxpr
		constexpr inline Vector4Cxpr() noexcept : a(), b(), c(), d() {}
		constexpr inline Vector4Cxpr(const T a, const T b, const T c, const T d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4Cxpr(const Vector4Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4Cxpr& operator=(const Vector4Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4Cxpr(Vector4Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4Cxpr& operator=(Vector4Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4Cxpr operator+(const Vector4Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d };
		}

		constexpr inline Vector4Cxpr operator-(const Vector4Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d };
		}

		constexpr inline Vector4Cxpr operator*(const Vector4Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d };
		}

		constexpr inline Vector4Cxpr operator/(const Vector4Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d };
		}


		constexpr inline Vector4Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number };
		}

		constexpr inline Vector4Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number };
		}

		constexpr inline Vector4Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number };
		}

		constexpr inline Vector4Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number };
		}


		// increment / decrement
		constexpr inline Vector4Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4Cxpr operator++ (int) noexcept {
			Vector4Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4Cxpr operator-- (int) noexcept {
			Vector4Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4Cxpr& operator+= (const Vector4Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator-= (const Vector4Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator*= (const Vector4Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator/= (const Vector4Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d;
			return *this;
		}


		constexpr inline Vector4Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number;
			return *this;
		}

		constexpr inline Vector4Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector5Cxpr
	{
	public:
		T a, b, c, d, e;
	public:
		// Vector5Cxpr
		constexpr inline Vector5Cxpr() noexcept : a(), b(), c(), d(), e() {}
		constexpr inline Vector5Cxpr(const T a, const T b, const T c, const T d,
			const T e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5Cxpr(const Vector5Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5Cxpr& operator=(const Vector5Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5Cxpr(Vector5Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5Cxpr& operator=(Vector5Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5Cxpr operator+(const Vector5Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
		}

		constexpr inline Vector5Cxpr operator-(const Vector5Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
		}

		constexpr inline Vector5Cxpr operator*(const Vector5Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
		}

		constexpr inline Vector5Cxpr operator/(const Vector5Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
		}


		constexpr inline Vector5Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number };
		}

		constexpr inline Vector5Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number };
		}

		constexpr inline Vector5Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number };
		}

		constexpr inline Vector5Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number };
		}


		// increment / decrement
		constexpr inline Vector5Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5Cxpr operator++ (int) noexcept {
			Vector5Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5Cxpr operator-- (int) noexcept {
			Vector5Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5Cxpr& operator+= (const Vector5Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator-= (const Vector5Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator*= (const Vector5Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator/= (const Vector5Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
			return *this;
		}


		constexpr inline Vector5Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number;
			return *this;
		}

		constexpr inline Vector5Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector6Cxpr
	{
	public:
		T a, b, c, d, e, f;
	public:
		// Vector6Cxpr
		constexpr inline Vector6Cxpr() noexcept : a(), b(), c(), d(), e(), f() {}
		constexpr inline Vector6Cxpr(const T a, const T b, const T c, const T d,
			const T e, const T f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6Cxpr(const Vector6Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6Cxpr& operator=(const Vector6Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6Cxpr(Vector6Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6Cxpr& operator=(Vector6Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6Cxpr operator+(const Vector6Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
		}

		constexpr inline Vector6Cxpr operator-(const Vector6Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
		}

		constexpr inline Vector6Cxpr operator*(const Vector6Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
		}

		constexpr inline Vector6Cxpr operator/(const Vector6Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
		}


		constexpr inline Vector6Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number };
		}

		constexpr inline Vector6Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number };
		}

		constexpr inline Vector6Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number };
		}

		constexpr inline Vector6Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number };
		}


		// increment / decrement
		constexpr inline Vector6Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6Cxpr operator++ (int) noexcept {
			Vector6Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6Cxpr operator-- (int) noexcept {
			Vector6Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6Cxpr& operator+= (const Vector6Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator-= (const Vector6Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator*= (const Vector6Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator/= (const Vector6Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
			return *this;
		}


		constexpr inline Vector6Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
			return *this;
		}

		constexpr inline Vector6Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector7Cxpr
	{
	public:
		T a, b, c, d, e, f, g;
	public:
		// Vector7Cxpr
		constexpr inline Vector7Cxpr() noexcept : a(), b(), c(), d(), e(), f(), g() {}
		constexpr inline Vector7Cxpr(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7Cxpr(const Vector7Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7Cxpr& operator=(const Vector7Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7Cxpr(Vector7Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7Cxpr& operator=(Vector7Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7Cxpr operator+(const Vector7Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
		}

		constexpr inline Vector7Cxpr operator-(const Vector7Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
		}

		constexpr inline Vector7Cxpr operator*(const Vector7Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
		}

		constexpr inline Vector7Cxpr operator/(const Vector7Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
		}


		constexpr inline Vector7Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
		}

		constexpr inline Vector7Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
		}

		constexpr inline Vector7Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
		}

		constexpr inline Vector7Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
		}


		// increment / decrement
		constexpr inline Vector7Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7Cxpr operator++ (int) noexcept {
			Vector7Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7Cxpr operator-- (int) noexcept {
			Vector7Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7Cxpr& operator+= (const Vector7Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator-= (const Vector7Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator*= (const Vector7Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator/= (const Vector7Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
			return *this;
		}


		constexpr inline Vector7Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
			return *this;
		}

		constexpr inline Vector7Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector8Cxpr
	{
	public:
		T a, b, c, d, e, f, g, h;
	public:
		// Vector8Cxpr
		constexpr inline Vector8Cxpr() noexcept : a(), b(), c(), d(), e(), f(), g(), h() {}
		constexpr inline Vector8Cxpr(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8Cxpr(const Vector8Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8Cxpr& operator=(const Vector8Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8Cxpr(Vector8Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8Cxpr& operator=(Vector8Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8Cxpr operator+(const Vector8Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
		}

		constexpr inline Vector8Cxpr operator-(const Vector8Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
		}

		constexpr inline Vector8Cxpr operator*(const Vector8Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
		}

		constexpr inline Vector8Cxpr operator/(const Vector8Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
		}


		constexpr inline Vector8Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
		}

		constexpr inline Vector8Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
		}

		constexpr inline Vector8Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
		}

		constexpr inline Vector8Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
		}


		// increment / decrement
		constexpr inline Vector8Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8Cxpr operator++ (int) noexcept {
			Vector8Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8Cxpr operator-- (int) noexcept {
			Vector8Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8Cxpr& operator+= (const Vector8Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator-= (const Vector8Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator*= (const Vector8Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator/= (const Vector8Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
			return *this;
		}


		constexpr inline Vector8Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
			return *this;
		}

		constexpr inline Vector8Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector9Cxpr
	{
	public:
		T a, b, c, d, e, f, g, h, i;
	public:
		// Vector9Cxpr
		constexpr inline Vector9Cxpr() noexcept : a(), b(), c(), d(), e(), f(), g(), h(), i() {}
		constexpr inline Vector9Cxpr(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h,
			const T i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9Cxpr(const Vector9Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9Cxpr& operator=(const Vector9Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9Cxpr(Vector9Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9Cxpr& operator=(Vector9Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9Cxpr operator+(const Vector9Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
		}

		constexpr inline Vector9Cxpr operator-(const Vector9Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
		}

		constexpr inline Vector9Cxpr operator*(const Vector9Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
		}

		constexpr inline Vector9Cxpr operator/(const Vector9Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
		}


		constexpr inline Vector9Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
		}

		constexpr inline Vector9Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
		}

		constexpr inline Vector9Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
		}

		constexpr inline Vector9Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
		}


		// increment / decrement
		constexpr inline Vector9Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9Cxpr operator++ (int) noexcept {
			Vector9Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9Cxpr operator-- (int) noexcept {
			Vector9Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9Cxpr& operator+= (const Vector9Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator-= (const Vector9Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator*= (const Vector9Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator/= (const Vector9Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
			return *this;
		}


		constexpr inline Vector9Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
			return *this;
		}

		constexpr inline Vector9Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	template<class T>
	class Vector10Cxpr
	{
	public:
		T a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10Cxpr
		constexpr inline Vector10Cxpr() noexcept : a(), b(), c(), d(), e(), f(), g(), h(), i(), j() {}
		constexpr inline Vector10Cxpr(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h,
			const T i, const T j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10Cxpr(const Vector10Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10Cxpr& operator=(const Vector10Cxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10Cxpr(Vector10Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10Cxpr& operator=(Vector10Cxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10Cxpr& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10Cxpr operator+(const Vector10Cxpr& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
		}

		constexpr inline Vector10Cxpr operator-(const Vector10Cxpr& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
		}

		constexpr inline Vector10Cxpr operator*(const Vector10Cxpr& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
		}

		constexpr inline Vector10Cxpr operator/(const Vector10Cxpr& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
		}


		constexpr inline Vector10Cxpr operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
		}

		constexpr inline Vector10Cxpr operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
		}

		constexpr inline Vector10Cxpr operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
		}

		constexpr inline Vector10Cxpr operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
		}


		// increment / decrement
		constexpr inline Vector10Cxpr& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10Cxpr operator++ (int) noexcept {
			Vector10Cxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10Cxpr operator-- (int) noexcept {
			Vector10Cxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10Cxpr& operator+= (const Vector10Cxpr& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator-= (const Vector10Cxpr& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator*= (const Vector10Cxpr& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator/= (const Vector10Cxpr& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
			return *this;
		}


		constexpr inline Vector10Cxpr& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
			return *this;
		}

		constexpr inline Vector10Cxpr& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10Cxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10Cxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10Cxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10Cxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const T number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const T number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const T number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const T number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10Cxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10Cxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const T number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const T number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const T stnd_value) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline T& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline T& at(const std::uint8_t index) noexcept
		{
			T* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector2Cxpr<T>& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector3Cxpr<T>& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector4Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector5Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector6Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector7Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector8Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector9Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector10Cxpr<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
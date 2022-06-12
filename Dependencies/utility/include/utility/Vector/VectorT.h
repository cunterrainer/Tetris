#pragma once
#include <iostream>

namespace util::math {

	template<class T>
	class Vector2
	{
	public:
		T x, y;
	public:
		// Vector2
		constexpr inline Vector2() noexcept : x(), y() {}
		constexpr inline Vector2(const T x, const T y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2(const Vector2& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2& operator=(const Vector2& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2(Vector2&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2& operator=(Vector2&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2& operator=(const T number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2 operator+(const Vector2& v) const noexcept {
			return { x + v.x, y + v.y };
		}

		constexpr inline Vector2 operator-(const Vector2& v) const noexcept {
			return { x - v.x, y - v.y };
		}

		constexpr inline Vector2 operator*(const Vector2& v) const noexcept {
			return { x * v.x, y * v.y };
		}

		constexpr inline Vector2 operator/(const Vector2& v) const noexcept {
			return { x / v.x, y / v.y };
		}


		constexpr inline Vector2 operator+(const T number) const noexcept {
			return { x + number, y + number };
		}

		constexpr inline Vector2 operator-(const T number) const noexcept {
			return { x - number, y - number };
		}

		constexpr inline Vector2 operator*(const T number) const noexcept {
			return { x * number, y * number };
		}

		constexpr inline Vector2 operator/(const T number) const noexcept {
			return { x / number, y / number };
		}


		// increment / decrement
		constexpr inline Vector2& operator++ () noexcept {
			++x; ++y;
			return *this;
		}

		constexpr inline Vector2& operator-- ()  noexcept {
			--x; --y;
			return *this;
		}

		inline Vector2 operator++ (int) noexcept {
			Vector2 temp = *this;
			++* this;
			return temp;
		}

		inline Vector2 operator-- (int) noexcept {
			Vector2 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2& operator+= (const Vector2& right) noexcept {
			x += right.x; y += right.y;
			return *this;
		}

		constexpr inline Vector2& operator-= (const Vector2& right) noexcept {
			x -= right.x; y -= right.y;
			return *this;
		}

		constexpr inline Vector2& operator*= (const Vector2& right) noexcept {
			x *= right.x; y *= right.y;
			return *this;
		}

		constexpr inline Vector2& operator/= (const Vector2& right) noexcept {
			x /= right.x; y /= right.y;
			return *this;
		}


		constexpr inline Vector2& operator+= (const T number) noexcept {
			x += number; y += number;
			return *this;
		}

		constexpr inline Vector2& operator-= (const T number) noexcept {
			x -= number; y -= number;
			return *this;
		}

		constexpr inline Vector2& operator*= (const T number) noexcept {
			x *= number; y *= number;
			return *this;
		}

		constexpr inline Vector2& operator/= (const T number) noexcept {
			x /= number; y /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2& other) const noexcept {
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
		constexpr inline bool operator==(const Vector2& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2& other) const noexcept {
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
	class Vector3
	{
	public:
		T x, y, z;
	public:
		constexpr inline Vector3() noexcept : x(), y(), z() {}
		constexpr inline Vector3(const T x, const T y, const T z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3(const Vector3& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3& operator=(const Vector3& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3(Vector3&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3& operator=(Vector3&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3& operator=(const T number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3 operator+(const Vector3& v) const noexcept {
			return { x + v.x, y + v.y, z + v.z };
		}

		constexpr inline Vector3 operator-(const Vector3& v) const noexcept {
			return { x - v.x, y - v.y, z - v.z };
		}

		constexpr inline Vector3 operator*(const Vector3& v) const noexcept {
			return { x * v.x, y * v.y, z * v.z };
		}

		constexpr inline Vector3 operator/(const Vector3& v) const noexcept {
			return { x / v.x, y / v.y, z / v.z };
		}


		constexpr inline Vector3 operator+(const T number) const noexcept {
			return { x + number, y + number, z + number };
		}

		constexpr inline Vector3 operator-(const T number) const noexcept {
			return { x - number, y - number, z - number };
		}

		constexpr inline Vector3 operator*(const T number) const noexcept {
			return { x * number, y * number, z * number };
		}

		constexpr inline Vector3 operator/(const T number) const noexcept {
			return { x / number, y / number, z / number };
		}


		// increment / decrement
		constexpr inline Vector3& operator++ () noexcept {
			++x; ++y; ++z;
			return *this;
		}

		constexpr inline Vector3& operator-- () noexcept {
			--x; --y; --z;
			return *this;
		}

		inline Vector3 operator++ (int) noexcept {
			Vector3 temp = *this;
			++* this;
			return temp;
		}

		inline Vector3 operator-- (int) noexcept {
			Vector3 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3& operator+= (const Vector3& right) noexcept {
			x += right.x; y += right.y; z += right.z;
			return *this;
		}

		constexpr inline Vector3& operator-= (const Vector3& right) noexcept {
			x -= right.x; y -= right.y; z -= right.z;
			return *this;
		}

		constexpr inline Vector3& operator*= (const Vector3& right) noexcept {
			x *= right.x; y *= right.y; z *= right.z;
			return *this;
		}

		constexpr inline Vector3& operator/= (const Vector3& right) noexcept {
			x /= right.x; y /= right.y; z /= right.z;
			return *this;
		}


		constexpr inline Vector3& operator+= (const T number) noexcept {
			x += number; y += number; z += number;
			return *this;
		}

		constexpr inline Vector3& operator-= (const T number) noexcept {
			x -= number; y -= number; z -= number;
			return *this;
		}

		constexpr inline Vector3& operator*= (const T number) noexcept {
			x *= number; y *= number; z *= number;
			return *this;
		}

		constexpr inline Vector3& operator/= (const T number) noexcept {
			x /= number; y /= number; z /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3& other) const noexcept {
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
		constexpr inline bool operator==(const Vector3& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3& other) const noexcept {
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
	class Vector4
	{
	public:
		T a, b, c, d;
	public:
		// Vector4
		constexpr inline Vector4() noexcept : a(), b(), c(), d() {}
		constexpr inline Vector4(const T a, const T b, const T c, const T d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4(const Vector4& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4& operator=(const Vector4& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4(Vector4&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4& operator=(Vector4&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4 operator+(const Vector4& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d };
		}

		constexpr inline Vector4 operator-(const Vector4& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d };
		}

		constexpr inline Vector4 operator*(const Vector4& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d };
		}

		constexpr inline Vector4 operator/(const Vector4& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d };
		}


		constexpr inline Vector4 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number };
		}

		constexpr inline Vector4 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number };
		}

		constexpr inline Vector4 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number };
		}

		constexpr inline Vector4 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number };
		}


		// increment / decrement
		constexpr inline Vector4& operator++ () noexcept {
			++a; ++b; ++c; ++d;
			return *this;
		}

		constexpr inline Vector4& operator-- () noexcept {
			--a; --b; --c; --d;
			return *this;
		}

		inline Vector4 operator++ (int) noexcept {
			Vector4 temp = *this;
			++* this;
			return temp;
		}

		inline Vector4 operator-- (int) noexcept {
			Vector4 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4& operator+= (const Vector4& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d;
			return *this;
		}

		constexpr inline Vector4& operator-= (const Vector4& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d;
			return *this;
		}

		constexpr inline Vector4& operator*= (const Vector4& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d;
			return *this;
		}

		constexpr inline Vector4& operator/= (const Vector4& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d;
			return *this;
		}


		constexpr inline Vector4& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number;
			return *this;
		}

		constexpr inline Vector4& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number;
			return *this;
		}

		constexpr inline Vector4& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number;
			return *this;
		}

		constexpr inline Vector4& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4& other) const noexcept {
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
		constexpr inline bool operator==(const Vector4& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4& other) const noexcept {
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
	class Vector5
	{
	public:
		T a, b, c, d, e;
	public:
		// Vector5
		constexpr inline Vector5() noexcept : a(), b(), c(), d(), e() {}
		constexpr inline Vector5(const T a, const T b, const T c, const T d,
			const T e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5(const Vector5& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5& operator=(const Vector5& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5(Vector5&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5& operator=(Vector5&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5 operator+(const Vector5& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e };
		}

		constexpr inline Vector5 operator-(const Vector5& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e };
		}

		constexpr inline Vector5 operator*(const Vector5& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e };
		}

		constexpr inline Vector5 operator/(const Vector5& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e };
		}


		constexpr inline Vector5 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number };
		}

		constexpr inline Vector5 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number };
		}

		constexpr inline Vector5 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number };
		}

		constexpr inline Vector5 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number };
		}


		// increment / decrement
		constexpr inline Vector5& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e;
			return *this;
		}

		constexpr inline Vector5& operator-- () noexcept {
			--a; --b; --c; --d; --e;
			return *this;
		}

		inline Vector5 operator++ (int) noexcept {
			Vector5 temp = *this;
			++* this;
			return temp;
		}

		inline Vector5 operator-- (int) noexcept {
			Vector5 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5& operator+= (const Vector5& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e;
			return *this;
		}

		constexpr inline Vector5& operator-= (const Vector5& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e;
			return *this;
		}

		constexpr inline Vector5& operator*= (const Vector5& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e;
			return *this;
		}

		constexpr inline Vector5& operator/= (const Vector5& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e;
			return *this;
		}


		constexpr inline Vector5& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number;
			return *this;
		}

		constexpr inline Vector5& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number;
			return *this;
		}

		constexpr inline Vector5& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number;
			return *this;
		}

		constexpr inline Vector5& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5& other) const noexcept {
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
		constexpr inline bool operator==(const Vector5& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5& other) const noexcept {
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
	class Vector6
	{
	public:
		T a, b, c, d, e, f;
	public:
		// Vector6
		constexpr inline Vector6() noexcept : a(), b(), c(), d(), e(), f() {}
		constexpr inline Vector6(const T a, const T b, const T c, const T d,
			const T e, const T f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6(const Vector6& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6& operator=(const Vector6& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6(Vector6&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6& operator=(Vector6&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6 operator+(const Vector6& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f };
		}

		constexpr inline Vector6 operator-(const Vector6& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f };
		}

		constexpr inline Vector6 operator*(const Vector6& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f };
		}

		constexpr inline Vector6 operator/(const Vector6& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f };
		}


		constexpr inline Vector6 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number };
		}

		constexpr inline Vector6 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number };
		}

		constexpr inline Vector6 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number };
		}

		constexpr inline Vector6 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number };
		}


		// increment / decrement
		constexpr inline Vector6& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f;
			return *this;
		}

		constexpr inline Vector6& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f;
			return *this;
		}

		inline Vector6 operator++ (int) noexcept {
			Vector6 temp = *this;
			++* this;
			return temp;
		}

		inline Vector6 operator-- (int) noexcept {
			Vector6 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6& operator+= (const Vector6& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f;
			return *this;
		}

		constexpr inline Vector6& operator-= (const Vector6& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f;
			return *this;
		}

		constexpr inline Vector6& operator*= (const Vector6& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f;
			return *this;
		}

		constexpr inline Vector6& operator/= (const Vector6& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f;
			return *this;
		}


		constexpr inline Vector6& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number;
			return *this;
		}

		constexpr inline Vector6& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number;
			return *this;
		}

		constexpr inline Vector6& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number;
			return *this;
		}

		constexpr inline Vector6& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6& other) const noexcept {
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
		constexpr inline bool operator==(const Vector6& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6& other) const noexcept {
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
	class Vector7
	{
	public:
		T a, b, c, d, e, f, g;
	public:
		// Vector7
		constexpr inline Vector7() noexcept : a(), b(), c(), d(), e(), f(), g() {}
		constexpr inline Vector7(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7(const Vector7& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7& operator=(const Vector7& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7(Vector7&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7& operator=(Vector7&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7 operator+(const Vector7& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g };
		}

		constexpr inline Vector7 operator-(const Vector7& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g };
		}

		constexpr inline Vector7 operator*(const Vector7& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g };
		}

		constexpr inline Vector7 operator/(const Vector7& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g };
		}


		constexpr inline Vector7 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number };
		}

		constexpr inline Vector7 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number };
		}

		constexpr inline Vector7 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number };
		}

		constexpr inline Vector7 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number };
		}


		// increment / decrement
		constexpr inline Vector7& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g;
			return *this;
		}

		constexpr inline Vector7& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g;
			return *this;
		}

		inline Vector7 operator++ (int) noexcept {
			Vector7 temp = *this;
			++* this;
			return temp;
		}

		inline Vector7 operator-- (int) noexcept {
			Vector7 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7& operator+= (const Vector7& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g;
			return *this;
		}

		constexpr inline Vector7& operator-= (const Vector7& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g;
			return *this;
		}

		constexpr inline Vector7& operator*= (const Vector7& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g;
			return *this;
		}

		constexpr inline Vector7& operator/= (const Vector7& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g;
			return *this;
		}


		constexpr inline Vector7& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number;
			return *this;
		}

		constexpr inline Vector7& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number;
			return *this;
		}

		constexpr inline Vector7& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number;
			return *this;
		}

		constexpr inline Vector7& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7& other) const noexcept {
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
		constexpr inline bool operator==(const Vector7& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7& other) const noexcept {
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
	class Vector8
	{
	public:
		T a, b, c, d, e, f, g, h;
	public:
		// Vector8
		constexpr inline Vector8() noexcept : a(), b(), c(), d(), e(), f(), g(), h() {}
		constexpr inline Vector8(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8(const Vector8& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8& operator=(const Vector8& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8(Vector8&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8& operator=(Vector8&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8 operator+(const Vector8& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h };
		}

		constexpr inline Vector8 operator-(const Vector8& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h };
		}

		constexpr inline Vector8 operator*(const Vector8& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h };
		}

		constexpr inline Vector8 operator/(const Vector8& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h };
		}


		constexpr inline Vector8 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number };
		}

		constexpr inline Vector8 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number };
		}

		constexpr inline Vector8 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number };
		}

		constexpr inline Vector8 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number };
		}


		// increment / decrement
		constexpr inline Vector8& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
			return *this;
		}

		constexpr inline Vector8& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h;
			return *this;
		}

		inline Vector8 operator++ (int) noexcept {
			Vector8 temp = *this;
			++* this;
			return temp;
		}

		inline Vector8 operator-- (int) noexcept {
			Vector8 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8& operator+= (const Vector8& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h;
			return *this;
		}

		constexpr inline Vector8& operator-= (const Vector8& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h;
			return *this;
		}

		constexpr inline Vector8& operator*= (const Vector8& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h;
			return *this;
		}

		constexpr inline Vector8& operator/= (const Vector8& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h;
			return *this;
		}


		constexpr inline Vector8& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number;
			return *this;
		}

		constexpr inline Vector8& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number;
			return *this;
		}

		constexpr inline Vector8& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number;
			return *this;
		}

		constexpr inline Vector8& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8& other) const noexcept {
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
		constexpr inline bool operator==(const Vector8& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8& other) const noexcept {
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
	class Vector9
	{
	public:
		T a, b, c, d, e, f, g, h, i;
	public:
		// Vector9
		constexpr inline Vector9() noexcept : a(), b(), c(), d(), e(), f(), g(), h(), i() {}
		constexpr inline Vector9(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h,
			const T i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9(const Vector9& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9& operator=(const Vector9& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9(Vector9&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9& operator=(Vector9&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9 operator+(const Vector9& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i };
		}

		constexpr inline Vector9 operator-(const Vector9& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i };
		}

		constexpr inline Vector9 operator*(const Vector9& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i };
		}

		constexpr inline Vector9 operator/(const Vector9& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i };
		}


		constexpr inline Vector9 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number };
		}

		constexpr inline Vector9 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number };
		}

		constexpr inline Vector9 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number };
		}

		constexpr inline Vector9 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number };
		}


		// increment / decrement
		constexpr inline Vector9& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
			return *this;
		}

		constexpr inline Vector9& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i;
			return *this;
		}

		inline Vector9 operator++ (int) noexcept {
			Vector9 temp = *this;
			++* this;
			return temp;
		}

		inline Vector9 operator-- (int) noexcept {
			Vector9 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9& operator+= (const Vector9& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i;
			return *this;
		}

		constexpr inline Vector9& operator-= (const Vector9& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i;
			return *this;
		}

		constexpr inline Vector9& operator*= (const Vector9& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i;
			return *this;
		}

		constexpr inline Vector9& operator/= (const Vector9& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i;
			return *this;
		}


		constexpr inline Vector9& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number;
			return *this;
		}

		constexpr inline Vector9& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number;
			return *this;
		}

		constexpr inline Vector9& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number;
			return *this;
		}

		constexpr inline Vector9& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9& other) const noexcept {
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
		constexpr inline bool operator==(const Vector9& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9& other) const noexcept {
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
	class Vector10
	{
	public:
		T a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10
		constexpr inline Vector10() noexcept : a(), b(), c(), d(), e(), f(), g(), h(), i(), j() {}
		constexpr inline Vector10(const T a, const T b, const T c, const T d,
			const T e, const T f, const T g, const T h,
			const T i, const T j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10(const Vector10& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10& operator=(const Vector10& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10(Vector10&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10& operator=(Vector10&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10& operator=(const T number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10 operator+(const Vector10& v) const noexcept {
			return { a + v.a, b + v.b, c + v.c, d + v.d, e + v.e, f + v.f, g + v.g, h + v.h, i + v.i, j + v.j };
		}

		constexpr inline Vector10 operator-(const Vector10& v) const noexcept {
			return { a - v.a, b - v.b, c - v.c, d - v.d, e - v.e, f - v.f, g - v.g, h - v.h, i - v.i, j - v.j };
		}

		constexpr inline Vector10 operator*(const Vector10& v) const noexcept {
			return { a * v.a, b * v.b, c * v.c, d * v.d, e * v.e, f * v.f, g * v.g, h * v.h, i * v.i, j * v.j };
		}

		constexpr inline Vector10 operator/(const Vector10& v) const noexcept {
			return { a / v.a, b / v.b, c / v.c, d / v.d, e / v.e, f / v.f, g / v.g, h / v.h, i / v.i, j / v.j };
		}


		constexpr inline Vector10 operator+(const T number) const noexcept {
			return { a + number, b + number, c + number, d + number, e + number, f + number, g + number, h + number, i + number, j + number };
		}

		constexpr inline Vector10 operator-(const T number) const noexcept {
			return { a - number, b - number, c - number, d - number, e - number, f - number, g - number, h - number, i - number, j - number };
		}

		constexpr inline Vector10 operator*(const T number) const noexcept {
			return { a * number, b * number, c * number, d * number, e * number, f * number, g * number, h * number, i * number, j * number };
		}

		constexpr inline Vector10 operator/(const T number) const noexcept {
			return { a / number, b / number, c / number, d / number, e / number, f / number, g / number, h / number, i / number, j / number };
		}


		// increment / decrement
		constexpr inline Vector10& operator++ () noexcept {
			++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
			return *this;
		}

		constexpr inline Vector10& operator-- () noexcept {
			--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
			return *this;
		}

		inline Vector10 operator++ (int) noexcept {
			Vector10 temp = *this;
			++* this;
			return temp;
		}

		inline Vector10 operator-- (int) noexcept {
			Vector10 temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10& operator+= (const Vector10& right) noexcept {
			a += right.a; b += right.b; c += right.c; d += right.d; e += right.e; f += right.f; g += right.g; h += right.h; i += right.i; j += right.j;
			return *this;
		}

		constexpr inline Vector10& operator-= (const Vector10& right) noexcept {
			a -= right.a; b -= right.b; c -= right.c; d -= right.d; e -= right.e; f -= right.f; g -= right.g; h -= right.h; i -= right.i; j -= right.j;
			return *this;
		}

		constexpr inline Vector10& operator*= (const Vector10& right) noexcept {
			a *= right.a; b *= right.b; c *= right.c; d *= right.d; e *= right.e; f *= right.f; g *= right.g; h *= right.h; i *= right.i; j *= right.j;
			return *this;
		}

		constexpr inline Vector10& operator/= (const Vector10& right) noexcept {
			a /= right.a; b /= right.b; c /= right.c; d /= right.d; e /= right.e; f /= right.f; g /= right.g; h /= right.h; i /= right.i; j /= right.j;
			return *this;
		}


		constexpr inline Vector10& operator+= (const T number) noexcept {
			a += number; b += number; c += number; d += number; e += number; f += number; g += number; h += number; i += number; j += number;
			return *this;
		}

		constexpr inline Vector10& operator-= (const T number) noexcept {
			a -= number; b -= number; c -= number; d -= number; e -= number; f -= number; g -= number; h -= number; i -= number; j -= number;
			return *this;
		}

		constexpr inline Vector10& operator*= (const T number) noexcept {
			a *= number; b *= number; c *= number; d *= number; e *= number; f *= number; g *= number; h *= number; i *= number; j *= number;
			return *this;
		}

		constexpr inline Vector10& operator/= (const T number) noexcept {
			a /= number; b /= number; c /= number; d /= number; e /= number; f /= number; g /= number; h /= number; i /= number; j /= number;
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10& other) const noexcept {
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
		constexpr inline bool operator==(const Vector10& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10& other) const noexcept {
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
	static inline std::ostream& operator<<(std::ostream& os, const Vector2<T>& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector3<T>& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector4<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector5<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector6<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector7<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector8<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector9<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	template<class T>
	static inline std::ostream& operator<<(std::ostream& os, const Vector10<T>& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
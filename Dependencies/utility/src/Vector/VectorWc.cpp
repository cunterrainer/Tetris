#include "VectorWc.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : wchar_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	// Vector2Wc
	Vector2Wc::Vector2Wc(const wchar_t x, const wchar_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2Wc::Vector2Wc(const Vector2Wc& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Wc& Vector2Wc::operator=(const Vector2Wc& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2Wc::Vector2Wc(Vector2Wc&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2Wc& Vector2Wc::operator=(Vector2Wc&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2Wc& Vector2Wc::operator=(const wchar_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2Wc Vector2Wc::operator+(const Vector2Wc& v) const noexcept {
		return { static_cast<wchar_t>(x + v.x), static_cast<wchar_t>(y + v.y) };
	}

	Vector2Wc Vector2Wc::operator-(const Vector2Wc& v) const noexcept {
		return { static_cast<wchar_t>(x - v.x), static_cast<wchar_t>(y - v.y) };
	}

	Vector2Wc Vector2Wc::operator*(const Vector2Wc& v) const noexcept {
		return { static_cast<wchar_t>(x * v.x), static_cast<wchar_t>(y * v.y) };
	}

	Vector2Wc Vector2Wc::operator/(const Vector2Wc& v) const noexcept {
		return { static_cast<wchar_t>(x / v.x), static_cast<wchar_t>(y / v.y) };
	}


	Vector2Wc Vector2Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x + number), static_cast<wchar_t>(y + number) };
	}

	Vector2Wc Vector2Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x - number), static_cast<wchar_t>(y - number) };
	}

	Vector2Wc Vector2Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x * number), static_cast<wchar_t>(y * number) };
	}

	Vector2Wc Vector2Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x / number), static_cast<wchar_t>(y / number) };
	}


	// increment / decrement
	Vector2Wc& Vector2Wc::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2Wc& Vector2Wc::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2Wc Vector2Wc::operator++ (int) noexcept {
		Vector2Wc temp = *this;
		++* this;
		return temp;
	}

	Vector2Wc Vector2Wc::operator-- (int) noexcept {
		Vector2Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2Wc& Vector2Wc::operator+= (const Vector2Wc& right) noexcept {
		static_cast<wchar_t>(x += right.x); static_cast<wchar_t>(y += right.y);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator-= (const Vector2Wc& right) noexcept {
		static_cast<wchar_t>(x -= right.x); static_cast<wchar_t>(y -= right.y);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator*= (const Vector2Wc& right) noexcept {
		static_cast<wchar_t>(x *= right.x); static_cast<wchar_t>(y *= right.y);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator/= (const Vector2Wc& right) noexcept {
		static_cast<wchar_t>(x /= right.x); static_cast<wchar_t>(y /= right.y);
		return *this;
	}


	Vector2Wc& Vector2Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x += number); static_cast<wchar_t>(y += number);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x -= number); static_cast<wchar_t>(y -= number);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x *= number); static_cast<wchar_t>(y *= number);
		return *this;
	}

	Vector2Wc& Vector2Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x /= number); static_cast<wchar_t>(y /= number);
		return *this;
	}


	// less than / greater than
	bool Vector2Wc::operator< (const Vector2Wc& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2Wc::operator<= (const Vector2Wc& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2Wc::operator>  (const Vector2Wc& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2Wc::operator>= (const Vector2Wc& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2Wc::operator<  (const wchar_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2Wc::operator<= (const wchar_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2Wc::operator>  (const wchar_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2Wc::operator>= (const wchar_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2Wc::operator==(const Vector2Wc& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2Wc::operator!=(const Vector2Wc& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2Wc::operator==(const wchar_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2Wc::operator!=(const wchar_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2Wc::size() const noexcept { return 2; }
	void Vector2Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector2Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector2Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3Wc
	Vector3Wc::Vector3Wc(const wchar_t x, const wchar_t y, const wchar_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3Wc::Vector3Wc(const Vector3Wc& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Wc& Vector3Wc::operator=(const Vector3Wc& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3Wc::Vector3Wc(Vector3Wc&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3Wc& Vector3Wc::operator=(Vector3Wc&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3Wc& Vector3Wc::operator=(const wchar_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3Wc Vector3Wc::operator+(const Vector3Wc& v) const noexcept {
		return { static_cast<wchar_t>(x + v.x), static_cast<wchar_t>(y + v.y), static_cast<wchar_t>(z + v.z) };
	}

	Vector3Wc Vector3Wc::operator-(const Vector3Wc& v) const noexcept {
		return { static_cast<wchar_t>(x - v.x), static_cast<wchar_t>(y - v.y), static_cast<wchar_t>(z - v.z) };
	}

	Vector3Wc Vector3Wc::operator*(const Vector3Wc& v) const noexcept {
		return { static_cast<wchar_t>(x * v.x), static_cast<wchar_t>(y * v.y), static_cast<wchar_t>(z * v.z) };
	}

	Vector3Wc Vector3Wc::operator/(const Vector3Wc& v) const noexcept {
		return { static_cast<wchar_t>(x / v.x), static_cast<wchar_t>(y / v.y), static_cast<wchar_t>(z / v.z) };
	}

 
	Vector3Wc Vector3Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x + number), static_cast<wchar_t>(y + number), static_cast<wchar_t>(z + number) };
	}

	Vector3Wc Vector3Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x - number), static_cast<wchar_t>(y - number), static_cast<wchar_t>(z - number) };
	}

	Vector3Wc Vector3Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x * number), static_cast<wchar_t>(y * number), static_cast<wchar_t>(z * number) };
	}

	Vector3Wc Vector3Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(x / number), static_cast<wchar_t>(y / number), static_cast<wchar_t>(z / number) };
	}


	// increment / decrement
	Vector3Wc& Vector3Wc::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3Wc& Vector3Wc::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3Wc Vector3Wc::operator++ (int) noexcept {
		Vector3Wc temp = *this;
		++* this;
		return temp;
	}

	Vector3Wc Vector3Wc::operator-- (int) noexcept {
		Vector3Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3Wc& Vector3Wc::operator+= (const Vector3Wc& right) noexcept {
		static_cast<wchar_t>(x += right.x); static_cast<wchar_t>(y += right.y); static_cast<wchar_t>(z += right.z);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator-= (const Vector3Wc& right) noexcept {
		static_cast<wchar_t>(x -= right.x); static_cast<wchar_t>(y -= right.y); static_cast<wchar_t>(z -= right.z);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator*= (const Vector3Wc& right) noexcept {
		static_cast<wchar_t>(x *= right.x); static_cast<wchar_t>(y *= right.y); static_cast<wchar_t>(z *= right.z);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator/= (const Vector3Wc& right) noexcept {
		static_cast<wchar_t>(x /= right.x); static_cast<wchar_t>(y /= right.y); static_cast<wchar_t>(z /= right.z);
		return *this;
	}


	Vector3Wc& Vector3Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x += number); static_cast<wchar_t>(y += number); static_cast<wchar_t>(z += number);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x -= number); static_cast<wchar_t>(y -= number); static_cast<wchar_t>(z -= number);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x *= number); static_cast<wchar_t>(y *= number); static_cast<wchar_t>(z *= number);
		return *this;
	}

	Vector3Wc& Vector3Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(x /= number); static_cast<wchar_t>(y /= number); static_cast<wchar_t>(z /= number);
		return *this;
	}


	// less than / greater than
	bool Vector3Wc::operator< (const Vector3Wc& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3Wc::operator<= (const Vector3Wc& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3Wc::operator>  (const Vector3Wc& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3Wc::operator>= (const Vector3Wc& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3Wc::operator<  (const wchar_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3Wc::operator<= (const wchar_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3Wc::operator>  (const wchar_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3Wc::operator>= (const wchar_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3Wc::operator==(const Vector3Wc& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3Wc::operator!=(const Vector3Wc& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3Wc::operator==(const wchar_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3Wc::operator!=(const wchar_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3Wc::size() const noexcept { return 3; }
	void Vector3Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector3Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector3Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4Wc
	Vector4Wc::Vector4Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4Wc::Vector4Wc(const Vector4Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Wc& Vector4Wc::operator=(const Vector4Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4Wc::Vector4Wc(Vector4Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4Wc& Vector4Wc::operator=(Vector4Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4Wc& Vector4Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4Wc Vector4Wc::operator+(const Vector4Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d) };
	}

	Vector4Wc Vector4Wc::operator-(const Vector4Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d) };
	}

	Vector4Wc Vector4Wc::operator*(const Vector4Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d) };
	}

	Vector4Wc Vector4Wc::operator/(const Vector4Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d) };
	}


	Vector4Wc Vector4Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number) };
	}

	Vector4Wc Vector4Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number) };
	}

	Vector4Wc Vector4Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number) };
	}

	Vector4Wc Vector4Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number) };
	}


	// increment / decrement
	Vector4Wc& Vector4Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4Wc& Vector4Wc::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4Wc Vector4Wc::operator++ (int) noexcept {
		Vector4Wc temp = *this;
		++* this;
		return temp;
	}

	Vector4Wc Vector4Wc::operator-- (int) noexcept {
		Vector4Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4Wc& Vector4Wc::operator+= (const Vector4Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator-= (const Vector4Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator*= (const Vector4Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator/= (const Vector4Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d);
		return *this;
	}


	Vector4Wc& Vector4Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number);
		return *this;
	}

	Vector4Wc& Vector4Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number);
		return *this;
	}


	// less than / greater than
	bool Vector4Wc::operator< (const Vector4Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4Wc::operator<= (const Vector4Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4Wc::operator>  (const Vector4Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4Wc::operator>= (const Vector4Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4Wc::operator==(const Vector4Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4Wc::operator!=(const Vector4Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4Wc::size() const noexcept { return 4; }
	void Vector4Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector4Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector4Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5Wc
	Vector5Wc::Vector5Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5Wc::Vector5Wc(const Vector5Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Wc& Vector5Wc::operator=(const Vector5Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5Wc::Vector5Wc(Vector5Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5Wc& Vector5Wc::operator=(Vector5Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5Wc& Vector5Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5Wc Vector5Wc::operator+(const Vector5Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e) };
	}

	Vector5Wc Vector5Wc::operator-(const Vector5Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e) };
	}

	Vector5Wc Vector5Wc::operator*(const Vector5Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e) };
	}

	Vector5Wc Vector5Wc::operator/(const Vector5Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e) };
	}


	Vector5Wc Vector5Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number) };
	}

	Vector5Wc Vector5Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number) };
	}

	Vector5Wc Vector5Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number) };
	}

	Vector5Wc Vector5Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number) };
	}


	// increment / decrement
	Vector5Wc& Vector5Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5Wc& Vector5Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5Wc Vector5Wc::operator++ (int) noexcept {
		Vector5Wc temp = *this;
		++* this;
		return temp;
	}

	Vector5Wc Vector5Wc::operator-- (int) noexcept {
		Vector5Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5Wc& Vector5Wc::operator+= (const Vector5Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator-= (const Vector5Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator*= (const Vector5Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator/= (const Vector5Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e);
		return *this;
	}


	Vector5Wc& Vector5Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number);
		return *this;
	}

	Vector5Wc& Vector5Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number);
		return *this;
	}


	// less than / greater than
	bool Vector5Wc::operator< (const Vector5Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5Wc::operator<= (const Vector5Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5Wc::operator>  (const Vector5Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5Wc::operator>= (const Vector5Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5Wc::operator==(const Vector5Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5Wc::operator!=(const Vector5Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5Wc::size() const noexcept { return 5; }
	void Vector5Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector5Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector5Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6Wc
	Vector6Wc::Vector6Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e, const wchar_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6Wc::Vector6Wc(const Vector6Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Wc& Vector6Wc::operator=(const Vector6Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6Wc::Vector6Wc(Vector6Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6Wc& Vector6Wc::operator=(Vector6Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6Wc& Vector6Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6Wc Vector6Wc::operator+(const Vector6Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f) };
	}

	Vector6Wc Vector6Wc::operator-(const Vector6Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f) };
	}

	Vector6Wc Vector6Wc::operator*(const Vector6Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f) };
	}

	Vector6Wc Vector6Wc::operator/(const Vector6Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f) };
	}


	Vector6Wc Vector6Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number) };
	}

	Vector6Wc Vector6Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number) };
	}

	Vector6Wc Vector6Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number) };
	}

	Vector6Wc Vector6Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number) };
	}


	// increment / decrement
	Vector6Wc& Vector6Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6Wc& Vector6Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6Wc Vector6Wc::operator++ (int) noexcept {
		Vector6Wc temp = *this;
		++* this;
		return temp;
	}

	Vector6Wc Vector6Wc::operator-- (int) noexcept {
		Vector6Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6Wc& Vector6Wc::operator+= (const Vector6Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator-= (const Vector6Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator*= (const Vector6Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator/= (const Vector6Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f);
		return *this;
	}


	Vector6Wc& Vector6Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number);
		return *this;
	}

	Vector6Wc& Vector6Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number);
		return *this;
	}


	// less than / greater than
	bool Vector6Wc::operator< (const Vector6Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6Wc::operator<= (const Vector6Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6Wc::operator>  (const Vector6Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6Wc::operator>= (const Vector6Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6Wc::operator==(const Vector6Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6Wc::operator!=(const Vector6Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6Wc::size() const noexcept { return 6; }
	void Vector6Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector6Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector6Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7Wc
	Vector7Wc::Vector7Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e, const wchar_t f, const wchar_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7Wc::Vector7Wc(const Vector7Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Wc& Vector7Wc::operator=(const Vector7Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7Wc::Vector7Wc(Vector7Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7Wc& Vector7Wc::operator=(Vector7Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7Wc& Vector7Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7Wc Vector7Wc::operator+(const Vector7Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g) };
	}

	Vector7Wc Vector7Wc::operator-(const Vector7Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g) };
	}

	Vector7Wc Vector7Wc::operator*(const Vector7Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g) };
	}

	Vector7Wc Vector7Wc::operator/(const Vector7Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g) };
	}


	Vector7Wc Vector7Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number) };
	}

	Vector7Wc Vector7Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number) };
	}

	Vector7Wc Vector7Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number) };
	}

	Vector7Wc Vector7Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number) };
	}


	// increment / decrement
	Vector7Wc& Vector7Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7Wc& Vector7Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7Wc Vector7Wc::operator++ (int) noexcept {
		Vector7Wc temp = *this;
		++* this;
		return temp;
	}

	Vector7Wc Vector7Wc::operator-- (int) noexcept {
		Vector7Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7Wc& Vector7Wc::operator+= (const Vector7Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator-= (const Vector7Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator*= (const Vector7Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator/= (const Vector7Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g);
		return *this;
	}


	Vector7Wc& Vector7Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number);
		return *this;
	}

	Vector7Wc& Vector7Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number);
		return *this;
	}


	// less than / greater than
	bool Vector7Wc::operator< (const Vector7Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7Wc::operator<= (const Vector7Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7Wc::operator>  (const Vector7Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7Wc::operator>= (const Vector7Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7Wc::operator==(const Vector7Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7Wc::operator!=(const Vector7Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7Wc::size() const noexcept { return 7; }
	void Vector7Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector7Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector7Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8Wc
	Vector8Wc::Vector8Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8Wc::Vector8Wc(const Vector8Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Wc& Vector8Wc::operator=(const Vector8Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8Wc::Vector8Wc(Vector8Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8Wc& Vector8Wc::operator=(Vector8Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8Wc& Vector8Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8Wc Vector8Wc::operator+(const Vector8Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h) };
	}

	Vector8Wc Vector8Wc::operator-(const Vector8Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h) };
	}

	Vector8Wc Vector8Wc::operator*(const Vector8Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h) };
	}

	Vector8Wc Vector8Wc::operator/(const Vector8Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h) };
	}


	Vector8Wc Vector8Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number) };
	}

	Vector8Wc Vector8Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number) };
	}

	Vector8Wc Vector8Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number) };
	}

	Vector8Wc Vector8Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number) };
	}


	// increment / decrement
	Vector8Wc& Vector8Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8Wc& Vector8Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8Wc Vector8Wc::operator++ (int) noexcept {
		Vector8Wc temp = *this;
		++* this;
		return temp;
	}

	Vector8Wc Vector8Wc::operator-- (int) noexcept {
		Vector8Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8Wc& Vector8Wc::operator+= (const Vector8Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator-= (const Vector8Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator*= (const Vector8Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator/= (const Vector8Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h);
		return *this;
	}


	Vector8Wc& Vector8Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number);
		return *this;
	}

	Vector8Wc& Vector8Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number);
		return *this;
	}


	// less than / greater than
	bool Vector8Wc::operator< (const Vector8Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8Wc::operator<= (const Vector8Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8Wc::operator>  (const Vector8Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8Wc::operator>= (const Vector8Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8Wc::operator==(const Vector8Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8Wc::operator!=(const Vector8Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8Wc::size() const noexcept { return 8; }
	void Vector8Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector8Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector8Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9Wc
	Vector9Wc::Vector9Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
		const wchar_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9Wc::Vector9Wc(const Vector9Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Wc& Vector9Wc::operator=(const Vector9Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9Wc::Vector9Wc(Vector9Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9Wc& Vector9Wc::operator=(Vector9Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9Wc& Vector9Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9Wc Vector9Wc::operator+(const Vector9Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h), static_cast<wchar_t>(i + v.i) };
	}

	Vector9Wc Vector9Wc::operator-(const Vector9Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h), static_cast<wchar_t>(i - v.i) };
	}

	Vector9Wc Vector9Wc::operator*(const Vector9Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h), static_cast<wchar_t>(i * v.i) };
	}

	Vector9Wc Vector9Wc::operator/(const Vector9Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h), static_cast<wchar_t>(i / v.i) };
	}


	Vector9Wc Vector9Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number), static_cast<wchar_t>(i + number) };
	}

	Vector9Wc Vector9Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number), static_cast<wchar_t>(i - number) };
	}

	Vector9Wc Vector9Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number), static_cast<wchar_t>(i * number) };
	}

	Vector9Wc Vector9Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number), static_cast<wchar_t>(i / number) };
	}


	// increment / decrement
	Vector9Wc& Vector9Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9Wc& Vector9Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9Wc Vector9Wc::operator++ (int) noexcept {
		Vector9Wc temp = *this;
		++* this;
		return temp;
	}

	Vector9Wc Vector9Wc::operator-- (int) noexcept {
		Vector9Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9Wc& Vector9Wc::operator+= (const Vector9Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h); static_cast<wchar_t>(i += right.i);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator-= (const Vector9Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h); static_cast<wchar_t>(i -= right.i);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator*= (const Vector9Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h); static_cast<wchar_t>(i *= right.i);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator/= (const Vector9Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h); static_cast<wchar_t>(i /= right.i);
		return *this;
	}


	Vector9Wc& Vector9Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number); static_cast<wchar_t>(i += number);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number); static_cast<wchar_t>(i -= number);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number); static_cast<wchar_t>(i *= number);
		return *this;
	}

	Vector9Wc& Vector9Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number); static_cast<wchar_t>(i /= number);
		return *this;
	}


	// less than / greater than
	bool Vector9Wc::operator< (const Vector9Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9Wc::operator<= (const Vector9Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9Wc::operator>  (const Vector9Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9Wc::operator>= (const Vector9Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9Wc::operator==(const Vector9Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9Wc::operator!=(const Vector9Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9Wc::size() const noexcept { return 9; }
	void Vector9Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector9Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector9Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10Wc
	Vector10Wc::Vector10Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
		const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
		const wchar_t i, const wchar_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10Wc::Vector10Wc(const Vector10Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Wc& Vector10Wc::operator=(const Vector10Wc& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10Wc::Vector10Wc(Vector10Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10Wc& Vector10Wc::operator=(Vector10Wc&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10Wc& Vector10Wc::operator=(const wchar_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10Wc Vector10Wc::operator+(const Vector10Wc& v) const noexcept {
		return { static_cast<wchar_t>(a + v.a), static_cast<wchar_t>(b + v.b), static_cast<wchar_t>(c + v.c), static_cast<wchar_t>(d + v.d), static_cast<wchar_t>(e + v.e), static_cast<wchar_t>(f + v.f), static_cast<wchar_t>(g + v.g), static_cast<wchar_t>(h + v.h), static_cast<wchar_t>(i + v.i), static_cast<wchar_t>(j + v.j) };
	}

	Vector10Wc Vector10Wc::operator-(const Vector10Wc& v) const noexcept {
		return { static_cast<wchar_t>(a - v.a), static_cast<wchar_t>(b - v.b), static_cast<wchar_t>(c - v.c), static_cast<wchar_t>(d - v.d), static_cast<wchar_t>(e - v.e), static_cast<wchar_t>(f - v.f), static_cast<wchar_t>(g - v.g), static_cast<wchar_t>(h - v.h), static_cast<wchar_t>(i - v.i), static_cast<wchar_t>(j - v.j) };
	}

	Vector10Wc Vector10Wc::operator*(const Vector10Wc& v) const noexcept {
		return { static_cast<wchar_t>(a * v.a), static_cast<wchar_t>(b * v.b), static_cast<wchar_t>(c * v.c), static_cast<wchar_t>(d * v.d), static_cast<wchar_t>(e * v.e), static_cast<wchar_t>(f * v.f), static_cast<wchar_t>(g * v.g), static_cast<wchar_t>(h * v.h), static_cast<wchar_t>(i * v.i), static_cast<wchar_t>(j * v.j) };
	}

	Vector10Wc Vector10Wc::operator/(const Vector10Wc& v) const noexcept {
		return { static_cast<wchar_t>(a / v.a), static_cast<wchar_t>(b / v.b), static_cast<wchar_t>(c / v.c), static_cast<wchar_t>(d / v.d), static_cast<wchar_t>(e / v.e), static_cast<wchar_t>(f / v.f), static_cast<wchar_t>(g / v.g), static_cast<wchar_t>(h / v.h), static_cast<wchar_t>(i / v.i), static_cast<wchar_t>(j / v.j) };
	}


	Vector10Wc Vector10Wc::operator+(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a + number), static_cast<wchar_t>(b + number), static_cast<wchar_t>(c + number), static_cast<wchar_t>(d + number), static_cast<wchar_t>(e + number), static_cast<wchar_t>(f + number), static_cast<wchar_t>(g + number), static_cast<wchar_t>(h + number), static_cast<wchar_t>(i + number), static_cast<wchar_t>(j + number) };
	}

	Vector10Wc Vector10Wc::operator-(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a - number), static_cast<wchar_t>(b - number), static_cast<wchar_t>(c - number), static_cast<wchar_t>(d - number), static_cast<wchar_t>(e - number), static_cast<wchar_t>(f - number), static_cast<wchar_t>(g - number), static_cast<wchar_t>(h - number), static_cast<wchar_t>(i - number), static_cast<wchar_t>(j - number) };
	}

	Vector10Wc Vector10Wc::operator*(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a * number), static_cast<wchar_t>(b * number), static_cast<wchar_t>(c * number), static_cast<wchar_t>(d * number), static_cast<wchar_t>(e * number), static_cast<wchar_t>(f * number), static_cast<wchar_t>(g * number), static_cast<wchar_t>(h * number), static_cast<wchar_t>(i * number), static_cast<wchar_t>(j * number) };
	}

	Vector10Wc Vector10Wc::operator/(const wchar_t number) const noexcept {
		return { static_cast<wchar_t>(a / number), static_cast<wchar_t>(b / number), static_cast<wchar_t>(c / number), static_cast<wchar_t>(d / number), static_cast<wchar_t>(e / number), static_cast<wchar_t>(f / number), static_cast<wchar_t>(g / number), static_cast<wchar_t>(h / number), static_cast<wchar_t>(i / number), static_cast<wchar_t>(j / number) };
	}


	// increment / decrement
	Vector10Wc& Vector10Wc::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10Wc& Vector10Wc::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10Wc Vector10Wc::operator++ (int) noexcept {
		Vector10Wc temp = *this;
		++* this;
		return temp;
	}

	Vector10Wc Vector10Wc::operator-- (int) noexcept {
		Vector10Wc temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10Wc& Vector10Wc::operator+= (const Vector10Wc& right) noexcept {
		static_cast<wchar_t>(a += right.a); static_cast<wchar_t>(b += right.b); static_cast<wchar_t>(c += right.c); static_cast<wchar_t>(d += right.d); static_cast<wchar_t>(e += right.e); static_cast<wchar_t>(f += right.f); static_cast<wchar_t>(g += right.g); static_cast<wchar_t>(h += right.h); static_cast<wchar_t>(i += right.i); static_cast<wchar_t>(j += right.j);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator-= (const Vector10Wc& right) noexcept {
		static_cast<wchar_t>(a -= right.a); static_cast<wchar_t>(b -= right.b); static_cast<wchar_t>(c -= right.c); static_cast<wchar_t>(d -= right.d); static_cast<wchar_t>(e -= right.e); static_cast<wchar_t>(f -= right.f); static_cast<wchar_t>(g -= right.g); static_cast<wchar_t>(h -= right.h); static_cast<wchar_t>(i -= right.i); static_cast<wchar_t>(j -= right.j);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator*= (const Vector10Wc& right) noexcept {
		static_cast<wchar_t>(a *= right.a); static_cast<wchar_t>(b *= right.b); static_cast<wchar_t>(c *= right.c); static_cast<wchar_t>(d *= right.d); static_cast<wchar_t>(e *= right.e); static_cast<wchar_t>(f *= right.f); static_cast<wchar_t>(g *= right.g); static_cast<wchar_t>(h *= right.h); static_cast<wchar_t>(i *= right.i); static_cast<wchar_t>(j *= right.j);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator/= (const Vector10Wc& right) noexcept {
		static_cast<wchar_t>(a /= right.a); static_cast<wchar_t>(b /= right.b); static_cast<wchar_t>(c /= right.c); static_cast<wchar_t>(d /= right.d); static_cast<wchar_t>(e /= right.e); static_cast<wchar_t>(f /= right.f); static_cast<wchar_t>(g /= right.g); static_cast<wchar_t>(h /= right.h); static_cast<wchar_t>(i /= right.i); static_cast<wchar_t>(j /= right.j);
		return *this;
	}


	Vector10Wc& Vector10Wc::operator+= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a += number); static_cast<wchar_t>(b += number); static_cast<wchar_t>(c += number); static_cast<wchar_t>(d += number); static_cast<wchar_t>(e += number); static_cast<wchar_t>(f += number); static_cast<wchar_t>(g += number); static_cast<wchar_t>(h += number); static_cast<wchar_t>(i += number); static_cast<wchar_t>(j += number);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator-= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a -= number); static_cast<wchar_t>(b -= number); static_cast<wchar_t>(c -= number); static_cast<wchar_t>(d -= number); static_cast<wchar_t>(e -= number); static_cast<wchar_t>(f -= number); static_cast<wchar_t>(g -= number); static_cast<wchar_t>(h -= number); static_cast<wchar_t>(i -= number); static_cast<wchar_t>(j -= number);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator*= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a *= number); static_cast<wchar_t>(b *= number); static_cast<wchar_t>(c *= number); static_cast<wchar_t>(d *= number); static_cast<wchar_t>(e *= number); static_cast<wchar_t>(f *= number); static_cast<wchar_t>(g *= number); static_cast<wchar_t>(h *= number); static_cast<wchar_t>(i *= number); static_cast<wchar_t>(j *= number);
		return *this;
	}

	Vector10Wc& Vector10Wc::operator/= (const wchar_t number) noexcept {
		static_cast<wchar_t>(a /= number); static_cast<wchar_t>(b /= number); static_cast<wchar_t>(c /= number); static_cast<wchar_t>(d /= number); static_cast<wchar_t>(e /= number); static_cast<wchar_t>(f /= number); static_cast<wchar_t>(g /= number); static_cast<wchar_t>(h /= number); static_cast<wchar_t>(i /= number); static_cast<wchar_t>(j /= number);
		return *this;
	}


	// less than / greater than
	bool Vector10Wc::operator< (const Vector10Wc& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10Wc::operator<= (const Vector10Wc& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10Wc::operator>  (const Vector10Wc& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10Wc::operator>= (const Vector10Wc& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10Wc::operator<  (const wchar_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10Wc::operator<= (const wchar_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10Wc::operator>  (const wchar_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10Wc::operator>= (const wchar_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10Wc::operator==(const Vector10Wc& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10Wc::operator!=(const Vector10Wc& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10Wc::operator==(const wchar_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10Wc::operator!=(const wchar_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10Wc::size() const noexcept { return 10; }
	void Vector10Wc::reset(const wchar_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	wchar_t& Vector10Wc::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	wchar_t& Vector10Wc::at(const std::uint8_t index) noexcept
	{
		wchar_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
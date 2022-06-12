#include "Vectori8.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : std::int8_t
		Bytes: 1
		Range: -128 to 127
	*/

	// Vector2i8
	Vector2i8::Vector2i8(const std::int8_t x, const std::int8_t y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2i8::Vector2i8(const Vector2i8& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i8& Vector2i8::operator=(const Vector2i8& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2i8::Vector2i8(Vector2i8&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2i8& Vector2i8::operator=(Vector2i8&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2i8& Vector2i8::operator=(const std::int8_t number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2i8 Vector2i8::operator+(const Vector2i8& v) const noexcept {
		return { static_cast<std::int8_t>(x + v.x), static_cast<std::int8_t>(y + v.y) };
	}

	Vector2i8 Vector2i8::operator-(const Vector2i8& v) const noexcept {
		return { static_cast<std::int8_t>(x - v.x), static_cast<std::int8_t>(y - v.y) };
	}

	Vector2i8 Vector2i8::operator*(const Vector2i8& v) const noexcept {
		return { static_cast<std::int8_t>(x * v.x), static_cast<std::int8_t>(y * v.y) };
	}

	Vector2i8 Vector2i8::operator/(const Vector2i8& v) const noexcept {
		return { static_cast<std::int8_t>(x / v.x), static_cast<std::int8_t>(y / v.y) };
	}


	Vector2i8 Vector2i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x + number), static_cast<std::int8_t>(y + number) };
	}

	Vector2i8 Vector2i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x - number), static_cast<std::int8_t>(y - number) };
	}

	Vector2i8 Vector2i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x * number), static_cast<std::int8_t>(y * number) };
	}

	Vector2i8 Vector2i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x / number), static_cast<std::int8_t>(y / number) };
	}


	// increment / decrement
	Vector2i8& Vector2i8::operator++ () noexcept {
		++x; ++y;
		return *this;
	}

	Vector2i8& Vector2i8::operator-- ()  noexcept {
		--x; --y;
		return *this;
	}

	Vector2i8 Vector2i8::operator++ (int) noexcept {
		Vector2i8 temp = *this;
		++* this;
		return temp;
	}

	Vector2i8 Vector2i8::operator-- (int) noexcept {
		Vector2i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2i8& Vector2i8::operator+= (const Vector2i8& right) noexcept {
		static_cast<std::int8_t>(x += right.x); static_cast<std::int8_t>(y += right.y);
		return *this;
	}

	Vector2i8& Vector2i8::operator-= (const Vector2i8& right) noexcept {
		static_cast<std::int8_t>(x -= right.x); static_cast<std::int8_t>(y -= right.y);
		return *this;
	}

	Vector2i8& Vector2i8::operator*= (const Vector2i8& right) noexcept {
		static_cast<std::int8_t>(x *= right.x); static_cast<std::int8_t>(y *= right.y);
		return *this;
	}

	Vector2i8& Vector2i8::operator/= (const Vector2i8& right) noexcept {
		static_cast<std::int8_t>(x /= right.x); static_cast<std::int8_t>(y /= right.y);
		return *this;
	}


	Vector2i8& Vector2i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x += number); static_cast<std::int8_t>(y += number);
		return *this;
	}

	Vector2i8& Vector2i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x -= number); static_cast<std::int8_t>(y -= number);
		return *this;
	}

	Vector2i8& Vector2i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x *= number); static_cast<std::int8_t>(y *= number);
		return *this;
	}

	Vector2i8& Vector2i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x /= number); static_cast<std::int8_t>(y /= number);
		return *this;
	}


	// less than / greater than
	bool Vector2i8::operator< (const Vector2i8& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2i8::operator<= (const Vector2i8& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2i8::operator>  (const Vector2i8& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2i8::operator>= (const Vector2i8& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2i8::operator<  (const std::int8_t number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2i8::operator<= (const std::int8_t number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2i8::operator>  (const std::int8_t number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2i8::operator>= (const std::int8_t number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2i8::operator==(const Vector2i8& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2i8::operator!=(const Vector2i8& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2i8::operator==(const std::int8_t number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2i8::operator!=(const std::int8_t number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2i8::size() const noexcept { return 2; }
	void Vector2i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector2i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector2i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3i8
	Vector3i8::Vector3i8(const std::int8_t x, const std::int8_t y, const std::int8_t z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3i8::Vector3i8(const Vector3i8& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i8& Vector3i8::operator=(const Vector3i8& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3i8::Vector3i8(Vector3i8&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3i8& Vector3i8::operator=(Vector3i8&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3i8& Vector3i8::operator=(const std::int8_t number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3i8 Vector3i8::operator+(const Vector3i8& v) const noexcept {
		return { static_cast<std::int8_t>(x + v.x), static_cast<std::int8_t>(y + v.y), static_cast<std::int8_t>(z + v.z) };
	}

	Vector3i8 Vector3i8::operator-(const Vector3i8& v) const noexcept {
		return { static_cast<std::int8_t>(x - v.x), static_cast<std::int8_t>(y - v.y), static_cast<std::int8_t>(z - v.z) };
	}

	Vector3i8 Vector3i8::operator*(const Vector3i8& v) const noexcept {
		return { static_cast<std::int8_t>(x * v.x), static_cast<std::int8_t>(y * v.y), static_cast<std::int8_t>(z * v.z) };
	}

	Vector3i8 Vector3i8::operator/(const Vector3i8& v) const noexcept {
		return { static_cast<std::int8_t>(x / v.x), static_cast<std::int8_t>(y / v.y), static_cast<std::int8_t>(z / v.z) };
	}

 
	Vector3i8 Vector3i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x + number), static_cast<std::int8_t>(y + number), static_cast<std::int8_t>(z + number) };
	}

	Vector3i8 Vector3i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x - number), static_cast<std::int8_t>(y - number), static_cast<std::int8_t>(z - number) };
	}

	Vector3i8 Vector3i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x * number), static_cast<std::int8_t>(y * number), static_cast<std::int8_t>(z * number) };
	}

	Vector3i8 Vector3i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(x / number), static_cast<std::int8_t>(y / number), static_cast<std::int8_t>(z / number) };
	}


	// increment / decrement
	Vector3i8& Vector3i8::operator++ () noexcept {
		++x; ++y; ++z;
		return *this;
	}

	Vector3i8& Vector3i8::operator-- () noexcept {
		--x; --y; --z;
		return *this;
	}

	Vector3i8 Vector3i8::operator++ (int) noexcept {
		Vector3i8 temp = *this;
		++* this;
		return temp;
	}

	Vector3i8 Vector3i8::operator-- (int) noexcept {
		Vector3i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3i8& Vector3i8::operator+= (const Vector3i8& right) noexcept {
		static_cast<std::int8_t>(x += right.x); static_cast<std::int8_t>(y += right.y); static_cast<std::int8_t>(z += right.z);
		return *this;
	}

	Vector3i8& Vector3i8::operator-= (const Vector3i8& right) noexcept {
		static_cast<std::int8_t>(x -= right.x); static_cast<std::int8_t>(y -= right.y); static_cast<std::int8_t>(z -= right.z);
		return *this;
	}

	Vector3i8& Vector3i8::operator*= (const Vector3i8& right) noexcept {
		static_cast<std::int8_t>(x *= right.x); static_cast<std::int8_t>(y *= right.y); static_cast<std::int8_t>(z *= right.z);
		return *this;
	}

	Vector3i8& Vector3i8::operator/= (const Vector3i8& right) noexcept {
		static_cast<std::int8_t>(x /= right.x); static_cast<std::int8_t>(y /= right.y); static_cast<std::int8_t>(z /= right.z);
		return *this;
	}


	Vector3i8& Vector3i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x += number); static_cast<std::int8_t>(y += number); static_cast<std::int8_t>(z += number);
		return *this;
	}

	Vector3i8& Vector3i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x -= number); static_cast<std::int8_t>(y -= number); static_cast<std::int8_t>(z -= number);
		return *this;
	}

	Vector3i8& Vector3i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x *= number); static_cast<std::int8_t>(y *= number); static_cast<std::int8_t>(z *= number);
		return *this;
	}

	Vector3i8& Vector3i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(x /= number); static_cast<std::int8_t>(y /= number); static_cast<std::int8_t>(z /= number);
		return *this;
	}


	// less than / greater than
	bool Vector3i8::operator< (const Vector3i8& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3i8::operator<= (const Vector3i8& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3i8::operator>  (const Vector3i8& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3i8::operator>= (const Vector3i8& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3i8::operator<  (const std::int8_t number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3i8::operator<= (const std::int8_t number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3i8::operator>  (const std::int8_t number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3i8::operator>= (const std::int8_t number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3i8::operator==(const Vector3i8& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3i8::operator!=(const Vector3i8& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3i8::operator==(const std::int8_t number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3i8::operator!=(const std::int8_t number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3i8::size() const noexcept { return 3; }
	void Vector3i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector3i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector3i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4i8
	Vector4i8::Vector4i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4i8::Vector4i8(const Vector4i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i8& Vector4i8::operator=(const Vector4i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4i8::Vector4i8(Vector4i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4i8& Vector4i8::operator=(Vector4i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4i8& Vector4i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4i8 Vector4i8::operator+(const Vector4i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d) };
	}

	Vector4i8 Vector4i8::operator-(const Vector4i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d) };
	}

	Vector4i8 Vector4i8::operator*(const Vector4i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d) };
	}

	Vector4i8 Vector4i8::operator/(const Vector4i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d) };
	}


	Vector4i8 Vector4i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number) };
	}

	Vector4i8 Vector4i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number) };
	}

	Vector4i8 Vector4i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number) };
	}

	Vector4i8 Vector4i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number) };
	}


	// increment / decrement
	Vector4i8& Vector4i8::operator++ () noexcept {
		++a; ++b; ++c; ++d;
		return *this;
	}

	Vector4i8& Vector4i8::operator-- () noexcept {
		--a; --b; --c; --d;
		return *this;
	}

	Vector4i8 Vector4i8::operator++ (int) noexcept {
		Vector4i8 temp = *this;
		++* this;
		return temp;
	}

	Vector4i8 Vector4i8::operator-- (int) noexcept {
		Vector4i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4i8& Vector4i8::operator+= (const Vector4i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d);
		return *this;
	}

	Vector4i8& Vector4i8::operator-= (const Vector4i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d);
		return *this;
	}

	Vector4i8& Vector4i8::operator*= (const Vector4i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d);
		return *this;
	}

	Vector4i8& Vector4i8::operator/= (const Vector4i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d);
		return *this;
	}


	Vector4i8& Vector4i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number);
		return *this;
	}

	Vector4i8& Vector4i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number);
		return *this;
	}

	Vector4i8& Vector4i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number);
		return *this;
	}

	Vector4i8& Vector4i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number);
		return *this;
	}


	// less than / greater than
	bool Vector4i8::operator< (const Vector4i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4i8::operator<= (const Vector4i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4i8::operator>  (const Vector4i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4i8::operator>= (const Vector4i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4i8::operator==(const Vector4i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4i8::operator!=(const Vector4i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4i8::size() const noexcept { return 4; }
	void Vector4i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector4i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector4i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5i8
	Vector5i8::Vector5i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5i8::Vector5i8(const Vector5i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i8& Vector5i8::operator=(const Vector5i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5i8::Vector5i8(Vector5i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5i8& Vector5i8::operator=(Vector5i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5i8& Vector5i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5i8 Vector5i8::operator+(const Vector5i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e) };
	}

	Vector5i8 Vector5i8::operator-(const Vector5i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e) };
	}

	Vector5i8 Vector5i8::operator*(const Vector5i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e) };
	}

	Vector5i8 Vector5i8::operator/(const Vector5i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e) };
	}


	Vector5i8 Vector5i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number) };
	}

	Vector5i8 Vector5i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number) };
	}

	Vector5i8 Vector5i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number) };
	}

	Vector5i8 Vector5i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number) };
	}


	// increment / decrement
	Vector5i8& Vector5i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e;
		return *this;
	}

	Vector5i8& Vector5i8::operator-- () noexcept {
		--a; --b; --c; --d; --e;
		return *this;
	}

	Vector5i8 Vector5i8::operator++ (int) noexcept {
		Vector5i8 temp = *this;
		++* this;
		return temp;
	}

	Vector5i8 Vector5i8::operator-- (int) noexcept {
		Vector5i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5i8& Vector5i8::operator+= (const Vector5i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e);
		return *this;
	}

	Vector5i8& Vector5i8::operator-= (const Vector5i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e);
		return *this;
	}

	Vector5i8& Vector5i8::operator*= (const Vector5i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e);
		return *this;
	}

	Vector5i8& Vector5i8::operator/= (const Vector5i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e);
		return *this;
	}


	Vector5i8& Vector5i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number);
		return *this;
	}

	Vector5i8& Vector5i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number);
		return *this;
	}

	Vector5i8& Vector5i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number);
		return *this;
	}

	Vector5i8& Vector5i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number);
		return *this;
	}


	// less than / greater than
	bool Vector5i8::operator< (const Vector5i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5i8::operator<= (const Vector5i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5i8::operator>  (const Vector5i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5i8::operator>= (const Vector5i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5i8::operator==(const Vector5i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5i8::operator!=(const Vector5i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5i8::size() const noexcept { return 5; }
	void Vector5i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector5i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector5i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6i8
	Vector6i8::Vector6i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e, const std::int8_t f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6i8::Vector6i8(const Vector6i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i8& Vector6i8::operator=(const Vector6i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6i8::Vector6i8(Vector6i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6i8& Vector6i8::operator=(Vector6i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6i8& Vector6i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6i8 Vector6i8::operator+(const Vector6i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e), static_cast<std::int8_t>(f + v.f) };
	}

	Vector6i8 Vector6i8::operator-(const Vector6i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e), static_cast<std::int8_t>(f - v.f) };
	}

	Vector6i8 Vector6i8::operator*(const Vector6i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e), static_cast<std::int8_t>(f * v.f) };
	}

	Vector6i8 Vector6i8::operator/(const Vector6i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e), static_cast<std::int8_t>(f / v.f) };
	}


	Vector6i8 Vector6i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number), static_cast<std::int8_t>(f + number) };
	}

	Vector6i8 Vector6i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number), static_cast<std::int8_t>(f - number) };
	}

	Vector6i8 Vector6i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number), static_cast<std::int8_t>(f * number) };
	}

	Vector6i8 Vector6i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number), static_cast<std::int8_t>(f / number) };
	}


	// increment / decrement
	Vector6i8& Vector6i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f;
		return *this;
	}

	Vector6i8& Vector6i8::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f;
		return *this;
	}

	Vector6i8 Vector6i8::operator++ (int) noexcept {
		Vector6i8 temp = *this;
		++* this;
		return temp;
	}

	Vector6i8 Vector6i8::operator-- (int) noexcept {
		Vector6i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6i8& Vector6i8::operator+= (const Vector6i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e); static_cast<std::int8_t>(f += right.f);
		return *this;
	}

	Vector6i8& Vector6i8::operator-= (const Vector6i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e); static_cast<std::int8_t>(f -= right.f);
		return *this;
	}

	Vector6i8& Vector6i8::operator*= (const Vector6i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e); static_cast<std::int8_t>(f *= right.f);
		return *this;
	}

	Vector6i8& Vector6i8::operator/= (const Vector6i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e); static_cast<std::int8_t>(f /= right.f);
		return *this;
	}


	Vector6i8& Vector6i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number); static_cast<std::int8_t>(f += number);
		return *this;
	}

	Vector6i8& Vector6i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number); static_cast<std::int8_t>(f -= number);
		return *this;
	}

	Vector6i8& Vector6i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number); static_cast<std::int8_t>(f *= number);
		return *this;
	}

	Vector6i8& Vector6i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number); static_cast<std::int8_t>(f /= number);
		return *this;
	}


	// less than / greater than
	bool Vector6i8::operator< (const Vector6i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6i8::operator<= (const Vector6i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6i8::operator>  (const Vector6i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6i8::operator>= (const Vector6i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6i8::operator==(const Vector6i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6i8::operator!=(const Vector6i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6i8::size() const noexcept { return 6; }
	void Vector6i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector6i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector6i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7i8
	Vector7i8::Vector7i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e, const std::int8_t f, const std::int8_t g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7i8::Vector7i8(const Vector7i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i8& Vector7i8::operator=(const Vector7i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7i8::Vector7i8(Vector7i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7i8& Vector7i8::operator=(Vector7i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7i8& Vector7i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7i8 Vector7i8::operator+(const Vector7i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e), static_cast<std::int8_t>(f + v.f), static_cast<std::int8_t>(g + v.g) };
	}

	Vector7i8 Vector7i8::operator-(const Vector7i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e), static_cast<std::int8_t>(f - v.f), static_cast<std::int8_t>(g - v.g) };
	}

	Vector7i8 Vector7i8::operator*(const Vector7i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e), static_cast<std::int8_t>(f * v.f), static_cast<std::int8_t>(g * v.g) };
	}

	Vector7i8 Vector7i8::operator/(const Vector7i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e), static_cast<std::int8_t>(f / v.f), static_cast<std::int8_t>(g / v.g) };
	}


	Vector7i8 Vector7i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number), static_cast<std::int8_t>(f + number), static_cast<std::int8_t>(g + number) };
	}

	Vector7i8 Vector7i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number), static_cast<std::int8_t>(f - number), static_cast<std::int8_t>(g - number) };
	}

	Vector7i8 Vector7i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number), static_cast<std::int8_t>(f * number), static_cast<std::int8_t>(g * number) };
	}

	Vector7i8 Vector7i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number), static_cast<std::int8_t>(f / number), static_cast<std::int8_t>(g / number) };
	}


	// increment / decrement
	Vector7i8& Vector7i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g;
		return *this;
	}

	Vector7i8& Vector7i8::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g;
		return *this;
	}

	Vector7i8 Vector7i8::operator++ (int) noexcept {
		Vector7i8 temp = *this;
		++* this;
		return temp;
	}

	Vector7i8 Vector7i8::operator-- (int) noexcept {
		Vector7i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7i8& Vector7i8::operator+= (const Vector7i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e); static_cast<std::int8_t>(f += right.f); static_cast<std::int8_t>(g += right.g);
		return *this;
	}

	Vector7i8& Vector7i8::operator-= (const Vector7i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e); static_cast<std::int8_t>(f -= right.f); static_cast<std::int8_t>(g -= right.g);
		return *this;
	}

	Vector7i8& Vector7i8::operator*= (const Vector7i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e); static_cast<std::int8_t>(f *= right.f); static_cast<std::int8_t>(g *= right.g);
		return *this;
	}

	Vector7i8& Vector7i8::operator/= (const Vector7i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e); static_cast<std::int8_t>(f /= right.f); static_cast<std::int8_t>(g /= right.g);
		return *this;
	}


	Vector7i8& Vector7i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number); static_cast<std::int8_t>(f += number); static_cast<std::int8_t>(g += number);
		return *this;
	}

	Vector7i8& Vector7i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number); static_cast<std::int8_t>(f -= number); static_cast<std::int8_t>(g -= number);
		return *this;
	}

	Vector7i8& Vector7i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number); static_cast<std::int8_t>(f *= number); static_cast<std::int8_t>(g *= number);
		return *this;
	}

	Vector7i8& Vector7i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number); static_cast<std::int8_t>(f /= number); static_cast<std::int8_t>(g /= number);
		return *this;
	}


	// less than / greater than
	bool Vector7i8::operator< (const Vector7i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7i8::operator<= (const Vector7i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7i8::operator>  (const Vector7i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7i8::operator>= (const Vector7i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7i8::operator==(const Vector7i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7i8::operator!=(const Vector7i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7i8::size() const noexcept { return 7; }
	void Vector7i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector7i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector7i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8i8
	Vector8i8::Vector8i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8i8::Vector8i8(const Vector8i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i8& Vector8i8::operator=(const Vector8i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8i8::Vector8i8(Vector8i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8i8& Vector8i8::operator=(Vector8i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8i8& Vector8i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8i8 Vector8i8::operator+(const Vector8i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e), static_cast<std::int8_t>(f + v.f), static_cast<std::int8_t>(g + v.g), static_cast<std::int8_t>(h + v.h) };
	}

	Vector8i8 Vector8i8::operator-(const Vector8i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e), static_cast<std::int8_t>(f - v.f), static_cast<std::int8_t>(g - v.g), static_cast<std::int8_t>(h - v.h) };
	}

	Vector8i8 Vector8i8::operator*(const Vector8i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e), static_cast<std::int8_t>(f * v.f), static_cast<std::int8_t>(g * v.g), static_cast<std::int8_t>(h * v.h) };
	}

	Vector8i8 Vector8i8::operator/(const Vector8i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e), static_cast<std::int8_t>(f / v.f), static_cast<std::int8_t>(g / v.g), static_cast<std::int8_t>(h / v.h) };
	}


	Vector8i8 Vector8i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number), static_cast<std::int8_t>(f + number), static_cast<std::int8_t>(g + number), static_cast<std::int8_t>(h + number) };
	}

	Vector8i8 Vector8i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number), static_cast<std::int8_t>(f - number), static_cast<std::int8_t>(g - number), static_cast<std::int8_t>(h - number) };
	}

	Vector8i8 Vector8i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number), static_cast<std::int8_t>(f * number), static_cast<std::int8_t>(g * number), static_cast<std::int8_t>(h * number) };
	}

	Vector8i8 Vector8i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number), static_cast<std::int8_t>(f / number), static_cast<std::int8_t>(g / number), static_cast<std::int8_t>(h / number) };
	}


	// increment / decrement
	Vector8i8& Vector8i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h;
		return *this;
	}

	Vector8i8& Vector8i8::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h;
		return *this;
	}

	Vector8i8 Vector8i8::operator++ (int) noexcept {
		Vector8i8 temp = *this;
		++* this;
		return temp;
	}

	Vector8i8 Vector8i8::operator-- (int) noexcept {
		Vector8i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8i8& Vector8i8::operator+= (const Vector8i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e); static_cast<std::int8_t>(f += right.f); static_cast<std::int8_t>(g += right.g); static_cast<std::int8_t>(h += right.h);
		return *this;
	}

	Vector8i8& Vector8i8::operator-= (const Vector8i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e); static_cast<std::int8_t>(f -= right.f); static_cast<std::int8_t>(g -= right.g); static_cast<std::int8_t>(h -= right.h);
		return *this;
	}

	Vector8i8& Vector8i8::operator*= (const Vector8i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e); static_cast<std::int8_t>(f *= right.f); static_cast<std::int8_t>(g *= right.g); static_cast<std::int8_t>(h *= right.h);
		return *this;
	}

	Vector8i8& Vector8i8::operator/= (const Vector8i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e); static_cast<std::int8_t>(f /= right.f); static_cast<std::int8_t>(g /= right.g); static_cast<std::int8_t>(h /= right.h);
		return *this;
	}


	Vector8i8& Vector8i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number); static_cast<std::int8_t>(f += number); static_cast<std::int8_t>(g += number); static_cast<std::int8_t>(h += number);
		return *this;
	}

	Vector8i8& Vector8i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number); static_cast<std::int8_t>(f -= number); static_cast<std::int8_t>(g -= number); static_cast<std::int8_t>(h -= number);
		return *this;
	}

	Vector8i8& Vector8i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number); static_cast<std::int8_t>(f *= number); static_cast<std::int8_t>(g *= number); static_cast<std::int8_t>(h *= number);
		return *this;
	}

	Vector8i8& Vector8i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number); static_cast<std::int8_t>(f /= number); static_cast<std::int8_t>(g /= number); static_cast<std::int8_t>(h /= number);
		return *this;
	}


	// less than / greater than
	bool Vector8i8::operator< (const Vector8i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8i8::operator<= (const Vector8i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8i8::operator>  (const Vector8i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8i8::operator>= (const Vector8i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8i8::operator==(const Vector8i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8i8::operator!=(const Vector8i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8i8::size() const noexcept { return 8; }
	void Vector8i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector8i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector8i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9i8
	Vector9i8::Vector9i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h,
		const std::int8_t i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9i8::Vector9i8(const Vector9i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i8& Vector9i8::operator=(const Vector9i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9i8::Vector9i8(Vector9i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9i8& Vector9i8::operator=(Vector9i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9i8& Vector9i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9i8 Vector9i8::operator+(const Vector9i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e), static_cast<std::int8_t>(f + v.f), static_cast<std::int8_t>(g + v.g), static_cast<std::int8_t>(h + v.h), static_cast<std::int8_t>(i + v.i) };
	}

	Vector9i8 Vector9i8::operator-(const Vector9i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e), static_cast<std::int8_t>(f - v.f), static_cast<std::int8_t>(g - v.g), static_cast<std::int8_t>(h - v.h), static_cast<std::int8_t>(i - v.i) };
	}

	Vector9i8 Vector9i8::operator*(const Vector9i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e), static_cast<std::int8_t>(f * v.f), static_cast<std::int8_t>(g * v.g), static_cast<std::int8_t>(h * v.h), static_cast<std::int8_t>(i * v.i) };
	}

	Vector9i8 Vector9i8::operator/(const Vector9i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e), static_cast<std::int8_t>(f / v.f), static_cast<std::int8_t>(g / v.g), static_cast<std::int8_t>(h / v.h), static_cast<std::int8_t>(i / v.i) };
	}


	Vector9i8 Vector9i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number), static_cast<std::int8_t>(f + number), static_cast<std::int8_t>(g + number), static_cast<std::int8_t>(h + number), static_cast<std::int8_t>(i + number) };
	}

	Vector9i8 Vector9i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number), static_cast<std::int8_t>(f - number), static_cast<std::int8_t>(g - number), static_cast<std::int8_t>(h - number), static_cast<std::int8_t>(i - number) };
	}

	Vector9i8 Vector9i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number), static_cast<std::int8_t>(f * number), static_cast<std::int8_t>(g * number), static_cast<std::int8_t>(h * number), static_cast<std::int8_t>(i * number) };
	}

	Vector9i8 Vector9i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number), static_cast<std::int8_t>(f / number), static_cast<std::int8_t>(g / number), static_cast<std::int8_t>(h / number), static_cast<std::int8_t>(i / number) };
	}


	// increment / decrement
	Vector9i8& Vector9i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i;
		return *this;
	}

	Vector9i8& Vector9i8::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i;
		return *this;
	}

	Vector9i8 Vector9i8::operator++ (int) noexcept {
		Vector9i8 temp = *this;
		++* this;
		return temp;
	}

	Vector9i8 Vector9i8::operator-- (int) noexcept {
		Vector9i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9i8& Vector9i8::operator+= (const Vector9i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e); static_cast<std::int8_t>(f += right.f); static_cast<std::int8_t>(g += right.g); static_cast<std::int8_t>(h += right.h); static_cast<std::int8_t>(i += right.i);
		return *this;
	}

	Vector9i8& Vector9i8::operator-= (const Vector9i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e); static_cast<std::int8_t>(f -= right.f); static_cast<std::int8_t>(g -= right.g); static_cast<std::int8_t>(h -= right.h); static_cast<std::int8_t>(i -= right.i);
		return *this;
	}

	Vector9i8& Vector9i8::operator*= (const Vector9i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e); static_cast<std::int8_t>(f *= right.f); static_cast<std::int8_t>(g *= right.g); static_cast<std::int8_t>(h *= right.h); static_cast<std::int8_t>(i *= right.i);
		return *this;
	}

	Vector9i8& Vector9i8::operator/= (const Vector9i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e); static_cast<std::int8_t>(f /= right.f); static_cast<std::int8_t>(g /= right.g); static_cast<std::int8_t>(h /= right.h); static_cast<std::int8_t>(i /= right.i);
		return *this;
	}


	Vector9i8& Vector9i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number); static_cast<std::int8_t>(f += number); static_cast<std::int8_t>(g += number); static_cast<std::int8_t>(h += number); static_cast<std::int8_t>(i += number);
		return *this;
	}

	Vector9i8& Vector9i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number); static_cast<std::int8_t>(f -= number); static_cast<std::int8_t>(g -= number); static_cast<std::int8_t>(h -= number); static_cast<std::int8_t>(i -= number);
		return *this;
	}

	Vector9i8& Vector9i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number); static_cast<std::int8_t>(f *= number); static_cast<std::int8_t>(g *= number); static_cast<std::int8_t>(h *= number); static_cast<std::int8_t>(i *= number);
		return *this;
	}

	Vector9i8& Vector9i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number); static_cast<std::int8_t>(f /= number); static_cast<std::int8_t>(g /= number); static_cast<std::int8_t>(h /= number); static_cast<std::int8_t>(i /= number);
		return *this;
	}


	// less than / greater than
	bool Vector9i8::operator< (const Vector9i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9i8::operator<= (const Vector9i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9i8::operator>  (const Vector9i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9i8::operator>= (const Vector9i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9i8::operator==(const Vector9i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9i8::operator!=(const Vector9i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9i8::size() const noexcept { return 9; }
	void Vector9i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector9i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector9i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10i8
	Vector10i8::Vector10i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
		const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h,
		const std::int8_t i, const std::int8_t j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10i8::Vector10i8(const Vector10i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i8& Vector10i8::operator=(const Vector10i8& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10i8::Vector10i8(Vector10i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10i8& Vector10i8::operator=(Vector10i8&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10i8& Vector10i8::operator=(const std::int8_t number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10i8 Vector10i8::operator+(const Vector10i8& v) const noexcept {
		return { static_cast<std::int8_t>(a + v.a), static_cast<std::int8_t>(b + v.b), static_cast<std::int8_t>(c + v.c), static_cast<std::int8_t>(d + v.d), static_cast<std::int8_t>(e + v.e), static_cast<std::int8_t>(f + v.f), static_cast<std::int8_t>(g + v.g), static_cast<std::int8_t>(h + v.h), static_cast<std::int8_t>(i + v.i), static_cast<std::int8_t>(j + v.j) };
	}

	Vector10i8 Vector10i8::operator-(const Vector10i8& v) const noexcept {
		return { static_cast<std::int8_t>(a - v.a), static_cast<std::int8_t>(b - v.b), static_cast<std::int8_t>(c - v.c), static_cast<std::int8_t>(d - v.d), static_cast<std::int8_t>(e - v.e), static_cast<std::int8_t>(f - v.f), static_cast<std::int8_t>(g - v.g), static_cast<std::int8_t>(h - v.h), static_cast<std::int8_t>(i - v.i), static_cast<std::int8_t>(j - v.j) };
	}

	Vector10i8 Vector10i8::operator*(const Vector10i8& v) const noexcept {
		return { static_cast<std::int8_t>(a * v.a), static_cast<std::int8_t>(b * v.b), static_cast<std::int8_t>(c * v.c), static_cast<std::int8_t>(d * v.d), static_cast<std::int8_t>(e * v.e), static_cast<std::int8_t>(f * v.f), static_cast<std::int8_t>(g * v.g), static_cast<std::int8_t>(h * v.h), static_cast<std::int8_t>(i * v.i), static_cast<std::int8_t>(j * v.j) };
	}

	Vector10i8 Vector10i8::operator/(const Vector10i8& v) const noexcept {
		return { static_cast<std::int8_t>(a / v.a), static_cast<std::int8_t>(b / v.b), static_cast<std::int8_t>(c / v.c), static_cast<std::int8_t>(d / v.d), static_cast<std::int8_t>(e / v.e), static_cast<std::int8_t>(f / v.f), static_cast<std::int8_t>(g / v.g), static_cast<std::int8_t>(h / v.h), static_cast<std::int8_t>(i / v.i), static_cast<std::int8_t>(j / v.j) };
	}


	Vector10i8 Vector10i8::operator+(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a + number), static_cast<std::int8_t>(b + number), static_cast<std::int8_t>(c + number), static_cast<std::int8_t>(d + number), static_cast<std::int8_t>(e + number), static_cast<std::int8_t>(f + number), static_cast<std::int8_t>(g + number), static_cast<std::int8_t>(h + number), static_cast<std::int8_t>(i + number), static_cast<std::int8_t>(j + number) };
	}

	Vector10i8 Vector10i8::operator-(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a - number), static_cast<std::int8_t>(b - number), static_cast<std::int8_t>(c - number), static_cast<std::int8_t>(d - number), static_cast<std::int8_t>(e - number), static_cast<std::int8_t>(f - number), static_cast<std::int8_t>(g - number), static_cast<std::int8_t>(h - number), static_cast<std::int8_t>(i - number), static_cast<std::int8_t>(j - number) };
	}

	Vector10i8 Vector10i8::operator*(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a * number), static_cast<std::int8_t>(b * number), static_cast<std::int8_t>(c * number), static_cast<std::int8_t>(d * number), static_cast<std::int8_t>(e * number), static_cast<std::int8_t>(f * number), static_cast<std::int8_t>(g * number), static_cast<std::int8_t>(h * number), static_cast<std::int8_t>(i * number), static_cast<std::int8_t>(j * number) };
	}

	Vector10i8 Vector10i8::operator/(const std::int8_t number) const noexcept {
		return { static_cast<std::int8_t>(a / number), static_cast<std::int8_t>(b / number), static_cast<std::int8_t>(c / number), static_cast<std::int8_t>(d / number), static_cast<std::int8_t>(e / number), static_cast<std::int8_t>(f / number), static_cast<std::int8_t>(g / number), static_cast<std::int8_t>(h / number), static_cast<std::int8_t>(i / number), static_cast<std::int8_t>(j / number) };
	}


	// increment / decrement
	Vector10i8& Vector10i8::operator++ () noexcept {
		++a; ++b; ++c; ++d; ++e; ++f; ++g; ++h; ++i; ++j;
		return *this;
	}

	Vector10i8& Vector10i8::operator-- () noexcept {
		--a; --b; --c; --d; --e; --f; --g; --h; --i; --j;
		return *this;
	}

	Vector10i8 Vector10i8::operator++ (int) noexcept {
		Vector10i8 temp = *this;
		++* this;
		return temp;
	}

	Vector10i8 Vector10i8::operator-- (int) noexcept {
		Vector10i8 temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10i8& Vector10i8::operator+= (const Vector10i8& right) noexcept {
		static_cast<std::int8_t>(a += right.a); static_cast<std::int8_t>(b += right.b); static_cast<std::int8_t>(c += right.c); static_cast<std::int8_t>(d += right.d); static_cast<std::int8_t>(e += right.e); static_cast<std::int8_t>(f += right.f); static_cast<std::int8_t>(g += right.g); static_cast<std::int8_t>(h += right.h); static_cast<std::int8_t>(i += right.i); static_cast<std::int8_t>(j += right.j);
		return *this;
	}

	Vector10i8& Vector10i8::operator-= (const Vector10i8& right) noexcept {
		static_cast<std::int8_t>(a -= right.a); static_cast<std::int8_t>(b -= right.b); static_cast<std::int8_t>(c -= right.c); static_cast<std::int8_t>(d -= right.d); static_cast<std::int8_t>(e -= right.e); static_cast<std::int8_t>(f -= right.f); static_cast<std::int8_t>(g -= right.g); static_cast<std::int8_t>(h -= right.h); static_cast<std::int8_t>(i -= right.i); static_cast<std::int8_t>(j -= right.j);
		return *this;
	}

	Vector10i8& Vector10i8::operator*= (const Vector10i8& right) noexcept {
		static_cast<std::int8_t>(a *= right.a); static_cast<std::int8_t>(b *= right.b); static_cast<std::int8_t>(c *= right.c); static_cast<std::int8_t>(d *= right.d); static_cast<std::int8_t>(e *= right.e); static_cast<std::int8_t>(f *= right.f); static_cast<std::int8_t>(g *= right.g); static_cast<std::int8_t>(h *= right.h); static_cast<std::int8_t>(i *= right.i); static_cast<std::int8_t>(j *= right.j);
		return *this;
	}

	Vector10i8& Vector10i8::operator/= (const Vector10i8& right) noexcept {
		static_cast<std::int8_t>(a /= right.a); static_cast<std::int8_t>(b /= right.b); static_cast<std::int8_t>(c /= right.c); static_cast<std::int8_t>(d /= right.d); static_cast<std::int8_t>(e /= right.e); static_cast<std::int8_t>(f /= right.f); static_cast<std::int8_t>(g /= right.g); static_cast<std::int8_t>(h /= right.h); static_cast<std::int8_t>(i /= right.i); static_cast<std::int8_t>(j /= right.j);
		return *this;
	}


	Vector10i8& Vector10i8::operator+= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a += number); static_cast<std::int8_t>(b += number); static_cast<std::int8_t>(c += number); static_cast<std::int8_t>(d += number); static_cast<std::int8_t>(e += number); static_cast<std::int8_t>(f += number); static_cast<std::int8_t>(g += number); static_cast<std::int8_t>(h += number); static_cast<std::int8_t>(i += number); static_cast<std::int8_t>(j += number);
		return *this;
	}

	Vector10i8& Vector10i8::operator-= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a -= number); static_cast<std::int8_t>(b -= number); static_cast<std::int8_t>(c -= number); static_cast<std::int8_t>(d -= number); static_cast<std::int8_t>(e -= number); static_cast<std::int8_t>(f -= number); static_cast<std::int8_t>(g -= number); static_cast<std::int8_t>(h -= number); static_cast<std::int8_t>(i -= number); static_cast<std::int8_t>(j -= number);
		return *this;
	}

	Vector10i8& Vector10i8::operator*= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a *= number); static_cast<std::int8_t>(b *= number); static_cast<std::int8_t>(c *= number); static_cast<std::int8_t>(d *= number); static_cast<std::int8_t>(e *= number); static_cast<std::int8_t>(f *= number); static_cast<std::int8_t>(g *= number); static_cast<std::int8_t>(h *= number); static_cast<std::int8_t>(i *= number); static_cast<std::int8_t>(j *= number);
		return *this;
	}

	Vector10i8& Vector10i8::operator/= (const std::int8_t number) noexcept {
		static_cast<std::int8_t>(a /= number); static_cast<std::int8_t>(b /= number); static_cast<std::int8_t>(c /= number); static_cast<std::int8_t>(d /= number); static_cast<std::int8_t>(e /= number); static_cast<std::int8_t>(f /= number); static_cast<std::int8_t>(g /= number); static_cast<std::int8_t>(h /= number); static_cast<std::int8_t>(i /= number); static_cast<std::int8_t>(j /= number);
		return *this;
	}


	// less than / greater than
	bool Vector10i8::operator< (const Vector10i8& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10i8::operator<= (const Vector10i8& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10i8::operator>  (const Vector10i8& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10i8::operator>= (const Vector10i8& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10i8::operator<  (const std::int8_t number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10i8::operator<= (const std::int8_t number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10i8::operator>  (const std::int8_t number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10i8::operator>= (const std::int8_t number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10i8::operator==(const Vector10i8& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10i8::operator!=(const Vector10i8& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10i8::operator==(const std::int8_t number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10i8::operator!=(const std::int8_t number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10i8::size() const noexcept { return 10; }
	void Vector10i8::reset(const std::int8_t stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	std::int8_t& Vector10i8::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	std::int8_t& Vector10i8::at(const std::uint8_t index) noexcept
	{
		std::int8_t* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
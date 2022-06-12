#include "VectorB.h"

namespace util::math {

	/*
		According to the MSVC C++ specification for Windows 10.
		Bytes and the associated Range may differ with other specifications
		but are also dependent on the compiler and platform.

		Type : bool
		Bytes: 1
		Range: true or false
	*/

	// Vector2b
	Vector2b::Vector2b(const bool x, const bool y) noexcept : x(x), y(y) {}

	// copy/move constructor and assignment
	Vector2b::Vector2b(const Vector2b& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2b& Vector2b::operator=(const Vector2b& other) noexcept {
		x = other.x; y = other.y; return *this;
	}

	Vector2b::Vector2b(Vector2b&& other) noexcept {
		x = other.x; y = other.y;
	}

	Vector2b& Vector2b::operator=(Vector2b&& other) noexcept {
		x = other.x; y = other.y; return *this;
	}
	// .....................................
	Vector2b& Vector2b::operator=(const bool number) noexcept {
		x = number; y = number; return *this;
	}


	Vector2b Vector2b::operator+(const Vector2b& v) const noexcept {
		return { static_cast<bool>(x + v.x), static_cast<bool>(y + v.y) };
	}

	Vector2b Vector2b::operator-(const Vector2b& v) const noexcept {
		return { static_cast<bool>(x - v.x), static_cast<bool>(y - v.y) };
	}

	Vector2b Vector2b::operator*(const Vector2b& v) const noexcept {
		return { static_cast<bool>(x * v.x), static_cast<bool>(y * v.y) };
	}

	Vector2b Vector2b::operator/(const Vector2b& v) const noexcept {
		return {   };
	}


	Vector2b Vector2b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(x + number), static_cast<bool>(y + number) };
	}

	Vector2b Vector2b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(x - number), static_cast<bool>(y - number) };
	}

	Vector2b Vector2b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(x * number), static_cast<bool>(y * number) };
	}

	Vector2b Vector2b::operator/(const bool number) const noexcept {
		return {   };
	}


	// increment / decrement
	Vector2b& Vector2b::operator++ () noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator-- ()  noexcept {
		 
		return *this;
	}

	Vector2b Vector2b::operator++ (int) noexcept {
		Vector2b temp = *this;
		++* this;
		return temp;
	}

	Vector2b Vector2b::operator-- (int) noexcept {
		Vector2b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector2b& Vector2b::operator+= (const Vector2b& right) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator-= (const Vector2b& right) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator*= (const Vector2b& right) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator/= (const Vector2b& right) noexcept {
		 
		return *this;
	}


	Vector2b& Vector2b::operator+= (const bool number) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator-= (const bool number) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator*= (const bool number) noexcept {
		 
		return *this;
	}

	Vector2b& Vector2b::operator/= (const bool number) noexcept {
		 
		return *this;
	}


	// less than / greater than
	bool Vector2b::operator< (const Vector2b& other) const noexcept {
		return x < other.x && y < other.y;
	}

	bool Vector2b::operator<= (const Vector2b& other) const noexcept {
		return x <= other.x && y <= other.y;
	}

	bool Vector2b::operator>  (const Vector2b& other) const noexcept {
		return x > other.x && y > other.y;
	}

	bool Vector2b::operator>= (const Vector2b& other) const noexcept {
		return x >= other.x && y >= other.y;
	}


	bool Vector2b::operator<  (const bool number) const noexcept {
		return x < number && y < number;
	}

	bool Vector2b::operator<= (const bool number) const noexcept {
		return x <= number && y <= number;
	}

	bool Vector2b::operator>  (const bool number) const noexcept {
		return x > number && y > number;
	}

	bool Vector2b::operator>= (const bool number) const noexcept {
		return x >= number && y >= number;
	}


	// equal / not equal
	bool Vector2b::operator==(const Vector2b& other) const noexcept {
		return x == other.x && y == other.y;
	}

	bool Vector2b::operator!=(const Vector2b& other) const noexcept {
		return x != other.x || y != other.y;
	}

	bool Vector2b::operator==(const bool number) const noexcept {
		return x == number && y == number;
	}

	bool Vector2b::operator!=(const bool number) const noexcept {
		return x != number || y != number;
	}


	std::uint8_t Vector2b::size() const noexcept { return 2; }
	void Vector2b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector2b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector2b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &x;
		if (index > 1)
			return ptr[0];
		return ptr[index];
	}



	// Vector3b
	Vector3b::Vector3b(const bool x, const bool y, const bool z) noexcept
		: x(x), y(y), z(z) {}

	// copy/move constructor and assignment
	Vector3b::Vector3b(const Vector3b& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3b& Vector3b::operator=(const Vector3b& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}

	Vector3b::Vector3b(Vector3b&& other) noexcept {
		x = other.x; y = other.y; z = other.z;
	}

	Vector3b& Vector3b::operator=(Vector3b&& other) noexcept {
		x = other.x; y = other.y; z = other.z; return *this;
	}
	// .....................................
	Vector3b& Vector3b::operator=(const bool number) noexcept {
		x = number; y = number; z = number; return *this;
	}


	Vector3b Vector3b::operator+(const Vector3b& v) const noexcept {
		return { static_cast<bool>(x + v.x), static_cast<bool>(y + v.y), static_cast<bool>(z + v.z) };
	}

	Vector3b Vector3b::operator-(const Vector3b& v) const noexcept {
		return { static_cast<bool>(x - v.x), static_cast<bool>(y - v.y), static_cast<bool>(z - v.z) };
	}

	Vector3b Vector3b::operator*(const Vector3b& v) const noexcept {
		return { static_cast<bool>(x * v.x), static_cast<bool>(y * v.y), static_cast<bool>(z * v.z) };
	}

	Vector3b Vector3b::operator/(const Vector3b& v) const noexcept {
		return {    };
	}

 
	Vector3b Vector3b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(x + number), static_cast<bool>(y + number), static_cast<bool>(z + number) };
	}

	Vector3b Vector3b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(x - number), static_cast<bool>(y - number), static_cast<bool>(z - number) };
	}

	Vector3b Vector3b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(x * number), static_cast<bool>(y * number), static_cast<bool>(z * number) };
	}

	Vector3b Vector3b::operator/(const bool number) const noexcept {
		return {    };
	}


	// increment / decrement
	Vector3b& Vector3b::operator++ () noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator-- () noexcept {
		  
		return *this;
	}

	Vector3b Vector3b::operator++ (int) noexcept {
		Vector3b temp = *this;
		++* this;
		return temp;
	}

	Vector3b Vector3b::operator-- (int) noexcept {
		Vector3b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector3b& Vector3b::operator+= (const Vector3b& right) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator-= (const Vector3b& right) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator*= (const Vector3b& right) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator/= (const Vector3b& right) noexcept {
		  
		return *this;
	}


	Vector3b& Vector3b::operator+= (const bool number) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator-= (const bool number) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator*= (const bool number) noexcept {
		  
		return *this;
	}

	Vector3b& Vector3b::operator/= (const bool number) noexcept {
		  
		return *this;
	}


	// less than / greater than
	bool Vector3b::operator< (const Vector3b& other) const noexcept {
		return x < other.x && y < other.y&& z < other.z;
	}

	bool Vector3b::operator<= (const Vector3b& other) const noexcept {
		return x <= other.x && y <= other.y && z <= other.z;
	}

	bool Vector3b::operator>  (const Vector3b& other) const noexcept {
		return x > other.x && y > other.y && z > other.z;
	}

	bool Vector3b::operator>= (const Vector3b& other) const noexcept {
		return x >= other.x && y >= other.y && z >= other.z;
	}


	bool Vector3b::operator<  (const bool number) const noexcept {
		return x < number && y < number && z < number;
	}

	bool Vector3b::operator<= (const bool number) const noexcept {
		return x <= number && y <= number && z <= number;
	}

	bool Vector3b::operator>  (const bool number) const noexcept {
		return x > number && y > number && z > number;
	}

	bool Vector3b::operator>= (const bool number) const noexcept {
		return x >= number && y >= number && z >= number;
	}


	// equal / not equal
	bool Vector3b::operator==(const Vector3b& other) const noexcept {
		return x == other.x && y == other.y && z == other.z;
	}

	bool Vector3b::operator!=(const Vector3b& other) const noexcept {
		return x != other.x || y != other.y || z != other.z;
	}

	bool Vector3b::operator==(const bool number) const noexcept {
		return x == number && y == number && z == number;
	}

	bool Vector3b::operator!=(const bool number) const noexcept {
		return x != number || y != number || z != number;
	}


	std::uint8_t Vector3b::size() const noexcept { return 3; }
	void Vector3b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector3b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector3b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &x;
		if (index > 2)
			return ptr[0];
		return ptr[index];
	}



	// Vector4b
	Vector4b::Vector4b(const bool a, const bool b, const bool c, const bool d) noexcept
		: a(a), b(b), c(c), d(d) {}

	// copy/move constructor and assignment
	Vector4b::Vector4b(const Vector4b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4b& Vector4b::operator=(const Vector4b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}

	Vector4b::Vector4b(Vector4b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d;
	}

	Vector4b& Vector4b::operator=(Vector4b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; return *this;
	}
	// .....................................
	Vector4b& Vector4b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; return *this;
	}


	Vector4b Vector4b::operator+(const Vector4b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d) };
	}

	Vector4b Vector4b::operator-(const Vector4b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d) };
	}

	Vector4b Vector4b::operator*(const Vector4b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d) };
	}

	Vector4b Vector4b::operator/(const Vector4b& v) const noexcept {
		return {     };
	}


	Vector4b Vector4b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number) };
	}

	Vector4b Vector4b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number) };
	}

	Vector4b Vector4b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number) };
	}

	Vector4b Vector4b::operator/(const bool number) const noexcept {
		return {     };
	}


	// increment / decrement
	Vector4b& Vector4b::operator++ () noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator-- () noexcept {
		   
		return *this;
	}

	Vector4b Vector4b::operator++ (int) noexcept {
		Vector4b temp = *this;
		++* this;
		return temp;
	}

	Vector4b Vector4b::operator-- (int) noexcept {
		Vector4b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector4b& Vector4b::operator+= (const Vector4b& right) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator-= (const Vector4b& right) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator*= (const Vector4b& right) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator/= (const Vector4b& right) noexcept {
		   
		return *this;
	}


	Vector4b& Vector4b::operator+= (const bool number) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator-= (const bool number) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator*= (const bool number) noexcept {
		   
		return *this;
	}

	Vector4b& Vector4b::operator/= (const bool number) noexcept {
		   
		return *this;
	}


	// less than / greater than
	bool Vector4b::operator< (const Vector4b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d;
	}

	bool Vector4b::operator<= (const Vector4b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
	}

	bool Vector4b::operator>  (const Vector4b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d;
	}

	bool Vector4b::operator>= (const Vector4b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
	}


	bool Vector4b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number;
	}

	bool Vector4b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number;
	}

	bool Vector4b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number;
	}

	bool Vector4b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number;
	}


	// equal / not equal
	bool Vector4b::operator==(const Vector4b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d;
	}

	bool Vector4b::operator!=(const Vector4b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d;
	}

	bool Vector4b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number;
	}

	bool Vector4b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number;
	}


	std::uint8_t Vector4b::size() const noexcept { return 4; }
	void Vector4b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector4b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector4b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 3)
			return ptr[0];
		return ptr[index];
	}



	// Vector5b
	Vector5b::Vector5b(const bool a, const bool b, const bool c, const bool d,
		const bool e) noexcept
		: a(a), b(b), c(c), d(d), e(e) {}

	// copy/move constructor and assignment
	Vector5b::Vector5b(const Vector5b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5b& Vector5b::operator=(const Vector5b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}

	Vector5b::Vector5b(Vector5b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
	}

	Vector5b& Vector5b::operator=(Vector5b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
	}
	// .....................................
	Vector5b& Vector5b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; return *this;
	}


	Vector5b Vector5b::operator+(const Vector5b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e) };
	}

	Vector5b Vector5b::operator-(const Vector5b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e) };
	}

	Vector5b Vector5b::operator*(const Vector5b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e) };
	}

	Vector5b Vector5b::operator/(const Vector5b& v) const noexcept {
		return {      };
	}


	Vector5b Vector5b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number) };
	}

	Vector5b Vector5b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number) };
	}

	Vector5b Vector5b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number) };
	}

	Vector5b Vector5b::operator/(const bool number) const noexcept {
		return {      };
	}


	// increment / decrement
	Vector5b& Vector5b::operator++ () noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator-- () noexcept {
		    
		return *this;
	}

	Vector5b Vector5b::operator++ (int) noexcept {
		Vector5b temp = *this;
		++* this;
		return temp;
	}

	Vector5b Vector5b::operator-- (int) noexcept {
		Vector5b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector5b& Vector5b::operator+= (const Vector5b& right) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator-= (const Vector5b& right) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator*= (const Vector5b& right) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator/= (const Vector5b& right) noexcept {
		    
		return *this;
	}


	Vector5b& Vector5b::operator+= (const bool number) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator-= (const bool number) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator*= (const bool number) noexcept {
		    
		return *this;
	}

	Vector5b& Vector5b::operator/= (const bool number) noexcept {
		    
		return *this;
	}


	// less than / greater than
	bool Vector5b::operator< (const Vector5b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e;
	}

	bool Vector5b::operator<= (const Vector5b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
	}

	bool Vector5b::operator>  (const Vector5b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
	}

	bool Vector5b::operator>= (const Vector5b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
	}


	bool Vector5b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number;
	}

	bool Vector5b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number;
	}

	bool Vector5b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number;
	}

	bool Vector5b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number;
	}


	// equal / not equal
	bool Vector5b::operator==(const Vector5b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
	}

	bool Vector5b::operator!=(const Vector5b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
	}

	bool Vector5b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number;
	}

	bool Vector5b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number;
	}


	std::uint8_t Vector5b::size() const noexcept { return 5; }
	void Vector5b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector5b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector5b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 4)
			return ptr[0];
		return ptr[index];
	}



	// Vector6b
	Vector6b::Vector6b(const bool a, const bool b, const bool c, const bool d,
		const bool e, const bool f) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f) {}

	// copy/move constructor and assignment
	Vector6b::Vector6b(const Vector6b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6b& Vector6b::operator=(const Vector6b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}

	Vector6b::Vector6b(Vector6b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
	}

	Vector6b& Vector6b::operator=(Vector6b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
	}
	// .....................................
	Vector6b& Vector6b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; return *this;
	}


	Vector6b Vector6b::operator+(const Vector6b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f) };
	}

	Vector6b Vector6b::operator-(const Vector6b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f) };
	}

	Vector6b Vector6b::operator*(const Vector6b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f) };
	}

	Vector6b Vector6b::operator/(const Vector6b& v) const noexcept {
		return {       };
	}


	Vector6b Vector6b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number) };
	}

	Vector6b Vector6b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number) };
	}

	Vector6b Vector6b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number) };
	}

	Vector6b Vector6b::operator/(const bool number) const noexcept {
		return {       };
	}


	// increment / decrement
	Vector6b& Vector6b::operator++ () noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator-- () noexcept {
		     
		return *this;
	}

	Vector6b Vector6b::operator++ (int) noexcept {
		Vector6b temp = *this;
		++* this;
		return temp;
	}

	Vector6b Vector6b::operator-- (int) noexcept {
		Vector6b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector6b& Vector6b::operator+= (const Vector6b& right) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator-= (const Vector6b& right) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator*= (const Vector6b& right) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator/= (const Vector6b& right) noexcept {
		     
		return *this;
	}


	Vector6b& Vector6b::operator+= (const bool number) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator-= (const bool number) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator*= (const bool number) noexcept {
		     
		return *this;
	}

	Vector6b& Vector6b::operator/= (const bool number) noexcept {
		     
		return *this;
	}


	// less than / greater than
	bool Vector6b::operator< (const Vector6b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
	}

	bool Vector6b::operator<= (const Vector6b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
	}

	bool Vector6b::operator>  (const Vector6b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
	}

	bool Vector6b::operator>= (const Vector6b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
	}


	bool Vector6b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number;
	}

	bool Vector6b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
	}

	bool Vector6b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number;
	}

	bool Vector6b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
	}


	// equal / not equal
	bool Vector6b::operator==(const Vector6b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
	}

	bool Vector6b::operator!=(const Vector6b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
	}

	bool Vector6b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number;
	}

	bool Vector6b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number;
	}


	std::uint8_t Vector6b::size() const noexcept { return 6; }
	void Vector6b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector6b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector6b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 5)
			return ptr[0];
		return ptr[index];
	}



	// Vector7b
	Vector7b::Vector7b(const bool a, const bool b, const bool c, const bool d,
		const bool e, const bool f, const bool g) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

	// copy/move constructor and assignment
	Vector7b::Vector7b(const Vector7b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7b& Vector7b::operator=(const Vector7b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}

	Vector7b::Vector7b(Vector7b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
	}

	Vector7b& Vector7b::operator=(Vector7b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
	}
	// .....................................
	Vector7b& Vector7b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
	}


	Vector7b Vector7b::operator+(const Vector7b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g) };
	}

	Vector7b Vector7b::operator-(const Vector7b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g) };
	}

	Vector7b Vector7b::operator*(const Vector7b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g) };
	}

	Vector7b Vector7b::operator/(const Vector7b& v) const noexcept {
		return {        };
	}


	Vector7b Vector7b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number) };
	}

	Vector7b Vector7b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number) };
	}

	Vector7b Vector7b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number) };
	}

	Vector7b Vector7b::operator/(const bool number) const noexcept {
		return {        };
	}


	// increment / decrement
	Vector7b& Vector7b::operator++ () noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator-- () noexcept {
		      
		return *this;
	}

	Vector7b Vector7b::operator++ (int) noexcept {
		Vector7b temp = *this;
		++* this;
		return temp;
	}

	Vector7b Vector7b::operator-- (int) noexcept {
		Vector7b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector7b& Vector7b::operator+= (const Vector7b& right) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator-= (const Vector7b& right) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator*= (const Vector7b& right) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator/= (const Vector7b& right) noexcept {
		      
		return *this;
	}


	Vector7b& Vector7b::operator+= (const bool number) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator-= (const bool number) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator*= (const bool number) noexcept {
		      
		return *this;
	}

	Vector7b& Vector7b::operator/= (const bool number) noexcept {
		      
		return *this;
	}


	// less than / greater than
	bool Vector7b::operator< (const Vector7b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
	}

	bool Vector7b::operator<= (const Vector7b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
	}

	bool Vector7b::operator>  (const Vector7b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
	}

	bool Vector7b::operator>= (const Vector7b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
	}


	bool Vector7b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number;
	}

	bool Vector7b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
	}

	bool Vector7b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
	}

	bool Vector7b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
	}


	// equal / not equal
	bool Vector7b::operator==(const Vector7b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
	}

	bool Vector7b::operator!=(const Vector7b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
	}

	bool Vector7b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
	}

	bool Vector7b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
	}


	std::uint8_t Vector7b::size() const noexcept { return 7; }
	void Vector7b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector7b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector7b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 6)
			return ptr[0];
		return ptr[index];
	}



	// Vector8b
	Vector8b::Vector8b(const bool a, const bool b, const bool c, const bool d,
		const bool e, const bool f, const bool g, const bool h) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

	// copy/move constructor and assignment
	Vector8b::Vector8b(const Vector8b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8b& Vector8b::operator=(const Vector8b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}

	Vector8b::Vector8b(Vector8b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
	}

	Vector8b& Vector8b::operator=(Vector8b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
	}
	// .....................................
	Vector8b& Vector8b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
	}


	Vector8b Vector8b::operator+(const Vector8b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h) };
	}

	Vector8b Vector8b::operator-(const Vector8b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h) };
	}

	Vector8b Vector8b::operator*(const Vector8b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h) };
	}

	Vector8b Vector8b::operator/(const Vector8b& v) const noexcept {
		return {         };
	}


	Vector8b Vector8b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number) };
	}

	Vector8b Vector8b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number) };
	}

	Vector8b Vector8b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number) };
	}

	Vector8b Vector8b::operator/(const bool number) const noexcept {
		return {         };
	}


	// increment / decrement
	Vector8b& Vector8b::operator++ () noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator-- () noexcept {
		       
		return *this;
	}

	Vector8b Vector8b::operator++ (int) noexcept {
		Vector8b temp = *this;
		++* this;
		return temp;
	}

	Vector8b Vector8b::operator-- (int) noexcept {
		Vector8b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector8b& Vector8b::operator+= (const Vector8b& right) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator-= (const Vector8b& right) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator*= (const Vector8b& right) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator/= (const Vector8b& right) noexcept {
		       
		return *this;
	}


	Vector8b& Vector8b::operator+= (const bool number) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator-= (const bool number) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator*= (const bool number) noexcept {
		       
		return *this;
	}

	Vector8b& Vector8b::operator/= (const bool number) noexcept {
		       
		return *this;
	}


	// less than / greater than
	bool Vector8b::operator< (const Vector8b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
	}

	bool Vector8b::operator<= (const Vector8b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
	}

	bool Vector8b::operator>  (const Vector8b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
	}

	bool Vector8b::operator>= (const Vector8b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
	}


	bool Vector8b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number;
	}

	bool Vector8b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
	}

	bool Vector8b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
	}

	bool Vector8b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
	}


	// equal / not equal
	bool Vector8b::operator==(const Vector8b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
	}

	bool Vector8b::operator!=(const Vector8b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
	}

	bool Vector8b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
	}

	bool Vector8b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
	}


	std::uint8_t Vector8b::size() const noexcept { return 8; }
	void Vector8b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector8b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector8b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 7)
			return ptr[0];
		return ptr[index];
	}



	// Vector9b
	Vector9b::Vector9b(const bool a, const bool b, const bool c, const bool d,
		const bool e, const bool f, const bool g, const bool h,
		const bool i) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

	// copy/move constructor and assignment
	Vector9b::Vector9b(const Vector9b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9b& Vector9b::operator=(const Vector9b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}

	Vector9b::Vector9b(Vector9b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
	}

	Vector9b& Vector9b::operator=(Vector9b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
	}
	// .....................................
	Vector9b& Vector9b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
	}


	Vector9b Vector9b::operator+(const Vector9b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h), static_cast<bool>(i + v.i) };
	}

	Vector9b Vector9b::operator-(const Vector9b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h), static_cast<bool>(i - v.i) };
	}

	Vector9b Vector9b::operator*(const Vector9b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h), static_cast<bool>(i * v.i) };
	}

	Vector9b Vector9b::operator/(const Vector9b& v) const noexcept {
		return {          };
	}


	Vector9b Vector9b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number), static_cast<bool>(i + number) };
	}

	Vector9b Vector9b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number), static_cast<bool>(i - number) };
	}

	Vector9b Vector9b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number), static_cast<bool>(i * number) };
	}

	Vector9b Vector9b::operator/(const bool number) const noexcept {
		return {          };
	}


	// increment / decrement
	Vector9b& Vector9b::operator++ () noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator-- () noexcept {
		        
		return *this;
	}

	Vector9b Vector9b::operator++ (int) noexcept {
		Vector9b temp = *this;
		++* this;
		return temp;
	}

	Vector9b Vector9b::operator-- (int) noexcept {
		Vector9b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector9b& Vector9b::operator+= (const Vector9b& right) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator-= (const Vector9b& right) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator*= (const Vector9b& right) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator/= (const Vector9b& right) noexcept {
		        
		return *this;
	}


	Vector9b& Vector9b::operator+= (const bool number) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator-= (const bool number) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator*= (const bool number) noexcept {
		        
		return *this;
	}

	Vector9b& Vector9b::operator/= (const bool number) noexcept {
		        
		return *this;
	}


	// less than / greater than
	bool Vector9b::operator< (const Vector9b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
	}

	bool Vector9b::operator<= (const Vector9b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
	}

	bool Vector9b::operator>  (const Vector9b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
	}

	bool Vector9b::operator>= (const Vector9b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
	}


	bool Vector9b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number;
	}

	bool Vector9b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
	}

	bool Vector9b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
	}

	bool Vector9b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
	}


	// equal / not equal
	bool Vector9b::operator==(const Vector9b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
	}

	bool Vector9b::operator!=(const Vector9b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
	}

	bool Vector9b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
	}

	bool Vector9b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
	}


	std::uint8_t Vector9b::size() const noexcept { return 9; }
	void Vector9b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector9b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector9b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 8)
			return ptr[0];
		return ptr[index];
	}



	// Vector10b
	Vector10b::Vector10b(const bool a, const bool b, const bool c, const bool d,
		const bool e, const bool f, const bool g, const bool h,
		const bool i, const bool j) noexcept
		: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

	// copy/move constructor and assignment
	Vector10b::Vector10b(const Vector10b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10b& Vector10b::operator=(const Vector10b& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}

	Vector10b::Vector10b(Vector10b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
	}

	Vector10b& Vector10b::operator=(Vector10b&& other) noexcept {
		a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
	}
	// .....................................
	Vector10b& Vector10b::operator=(const bool number) noexcept {
		a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
	}


	Vector10b Vector10b::operator+(const Vector10b& v) const noexcept {
		return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h), static_cast<bool>(i + v.i), static_cast<bool>(j + v.j) };
	}

	Vector10b Vector10b::operator-(const Vector10b& v) const noexcept {
		return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h), static_cast<bool>(i - v.i), static_cast<bool>(j - v.j) };
	}

	Vector10b Vector10b::operator*(const Vector10b& v) const noexcept {
		return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h), static_cast<bool>(i * v.i), static_cast<bool>(j * v.j) };
	}

	Vector10b Vector10b::operator/(const Vector10b& v) const noexcept {
		return {           };
	}


	Vector10b Vector10b::operator+(const bool number) const noexcept {
		return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number), static_cast<bool>(i + number), static_cast<bool>(j + number) };
	}

	Vector10b Vector10b::operator-(const bool number) const noexcept {
		return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number), static_cast<bool>(i - number), static_cast<bool>(j - number) };
	}

	Vector10b Vector10b::operator*(const bool number) const noexcept {
		return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number), static_cast<bool>(i * number), static_cast<bool>(j * number) };
	}

	Vector10b Vector10b::operator/(const bool number) const noexcept {
		return {           };
	}


	// increment / decrement
	Vector10b& Vector10b::operator++ () noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator-- () noexcept {
		         
		return *this;
	}

	Vector10b Vector10b::operator++ (int) noexcept {
		Vector10b temp = *this;
		++* this;
		return temp;
	}

	Vector10b Vector10b::operator-- (int) noexcept {
		Vector10b temp = *this;
		--* this;
		return temp;
	}


	// assignments
	Vector10b& Vector10b::operator+= (const Vector10b& right) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator-= (const Vector10b& right) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator*= (const Vector10b& right) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator/= (const Vector10b& right) noexcept {
		         
		return *this;
	}


	Vector10b& Vector10b::operator+= (const bool number) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator-= (const bool number) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator*= (const bool number) noexcept {
		         
		return *this;
	}

	Vector10b& Vector10b::operator/= (const bool number) noexcept {
		         
		return *this;
	}


	// less than / greater than
	bool Vector10b::operator< (const Vector10b& other) const noexcept {
		return a < other.a && b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
	}

	bool Vector10b::operator<= (const Vector10b& other) const noexcept {
		return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
	}

	bool Vector10b::operator>  (const Vector10b& other) const noexcept {
		return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
	}

	bool Vector10b::operator>= (const Vector10b& other) const noexcept {
		return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
	}


	bool Vector10b::operator<  (const bool number) const noexcept {
		return a < number && b < number && c < number && d < number && e < number && f < number && g < number && h < number && i < number && j < number;
	}

	bool Vector10b::operator<= (const bool number) const noexcept {
		return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
	}

	bool Vector10b::operator>  (const bool number) const noexcept {
		return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
	}

	bool Vector10b::operator>= (const bool number) const noexcept {
		return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
	}


	// equal / not equal
	bool Vector10b::operator==(const Vector10b& other) const noexcept {
		return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
	}

	bool Vector10b::operator!=(const Vector10b& other) const noexcept {
		return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
	}

	bool Vector10b::operator==(const bool number) const noexcept {
		return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
	}

	bool Vector10b::operator!=(const bool number) const noexcept {
		return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
	}


	std::uint8_t Vector10b::size() const noexcept { return 10; }
	void Vector10b::reset(const bool stnd_value) noexcept {
		for (std::uint8_t i = 0; i < size(); ++i)
			this->at(i) = stnd_value;
	}

	bool& Vector10b::operator[](const std::uint8_t index) noexcept {
		return at(index);
	}
	bool& Vector10b::at(const std::uint8_t index) noexcept
	{
		bool* ptr = &a;
		if (index > 9)
			return ptr[0];
		return ptr[index];
	}
	// End
}
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

		Type : bool
		Bytes: 1
		Range: true or false
	*/

	class Vector2bCxpr
	{
	public:
		bool x, y;
	public:
		// Vector2bCxpr
		constexpr inline Vector2bCxpr() noexcept : x(false), y(false) {}
		constexpr inline Vector2bCxpr(const bool x, const bool y) noexcept : x(x), y(y) {}

		// copy/move constructor and assignment
		inline Vector2bCxpr(const Vector2bCxpr& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2bCxpr& operator=(const Vector2bCxpr& other) noexcept {
			x = other.x; y = other.y; return *this;
		}

		inline Vector2bCxpr(Vector2bCxpr&& other) noexcept {
			x = other.x; y = other.y;
		}

		constexpr inline Vector2bCxpr& operator=(Vector2bCxpr&& other) noexcept {
			x = other.x; y = other.y; return *this;
		}
		// .....................................
		constexpr inline Vector2bCxpr& operator=(const bool number) noexcept {
			x = number; y = number; return *this;
		}


		constexpr inline Vector2bCxpr operator+(const Vector2bCxpr& v) const noexcept {
			return { static_cast<bool>(x + v.x), static_cast<bool>(y + v.y) };
		}

		constexpr inline Vector2bCxpr operator-(const Vector2bCxpr& v) const noexcept {
			return { static_cast<bool>(x - v.x), static_cast<bool>(y - v.y) };
		}

		constexpr inline Vector2bCxpr operator*(const Vector2bCxpr& v) const noexcept {
			return { static_cast<bool>(x * v.x), static_cast<bool>(y * v.y) };
		}

		constexpr inline Vector2bCxpr operator/(const Vector2bCxpr& v) const noexcept {
			return {   };
		}


		constexpr inline Vector2bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(x + number), static_cast<bool>(y + number) };
		}

		constexpr inline Vector2bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(x - number), static_cast<bool>(y - number) };
		}

		constexpr inline Vector2bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(x * number), static_cast<bool>(y * number) };
		}

		constexpr inline Vector2bCxpr operator/(const bool number) const noexcept {
			return {   };
		}


		// increment / decrement
		constexpr inline Vector2bCxpr& operator++ () noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator-- ()  noexcept {
			 
			return *this;
		}

		inline Vector2bCxpr operator++ (int) noexcept {
			Vector2bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector2bCxpr operator-- (int) noexcept {
			Vector2bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector2bCxpr& operator+= (const Vector2bCxpr& right) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator-= (const Vector2bCxpr& right) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator*= (const Vector2bCxpr& right) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator/= (const Vector2bCxpr& right) noexcept {
			 
			return *this;
		}


		constexpr inline Vector2bCxpr& operator+= (const bool number) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator-= (const bool number) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator*= (const bool number) noexcept {
			 
			return *this;
		}

		constexpr inline Vector2bCxpr& operator/= (const bool number) noexcept {
			 
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector2bCxpr& other) const noexcept {
			return x < other.x&& y < other.y;
		}

		constexpr inline bool operator<= (const Vector2bCxpr& other) const noexcept {
			return x <= other.x && y <= other.y;
		}

		constexpr inline bool operator>  (const Vector2bCxpr& other) const noexcept {
			return x > other.x && y > other.y;
		}

		constexpr inline bool operator>= (const Vector2bCxpr& other) const noexcept {
			return x >= other.x && y >= other.y;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return x < number&& y < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return x <= number && y <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return x > number && y > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return x >= number && y >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector2bCxpr& other) const noexcept {
			return x == other.x && y == other.y;
		}

		constexpr inline bool operator!=(const Vector2bCxpr& other) const noexcept {
			return x != other.x || y != other.y;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return x == number && y == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return x != number || y != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 2; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &x;
			if (index > 1)
				return ptr[0];
			return ptr[index];
		}
	};


	class Vector3bCxpr
	{
	public:
		bool x, y, z;
	public:
		constexpr inline Vector3bCxpr() noexcept : x(false), y(false), z(false) {}
		constexpr inline Vector3bCxpr(const bool x, const bool y, const bool z) noexcept
			: x(x), y(y), z(z) {}

		// copy/move constructor and assignment
		inline Vector3bCxpr(const Vector3bCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3bCxpr& operator=(const Vector3bCxpr& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}

		inline Vector3bCxpr(Vector3bCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z;
		}

		constexpr inline Vector3bCxpr& operator=(Vector3bCxpr&& other) noexcept {
			x = other.x; y = other.y; z = other.z; return *this;
		}
		// .....................................
		constexpr inline Vector3bCxpr& operator=(const bool number) noexcept {
			x = number; y = number; z = number; return *this;
		}


		constexpr inline Vector3bCxpr operator+(const Vector3bCxpr& v) const noexcept {
			return { static_cast<bool>(x + v.x), static_cast<bool>(y + v.y), static_cast<bool>(z + v.z) };
		}

		constexpr inline Vector3bCxpr operator-(const Vector3bCxpr& v) const noexcept {
			return { static_cast<bool>(x - v.x), static_cast<bool>(y - v.y), static_cast<bool>(z - v.z) };
		}

		constexpr inline Vector3bCxpr operator*(const Vector3bCxpr& v) const noexcept {
			return { static_cast<bool>(x * v.x), static_cast<bool>(y * v.y), static_cast<bool>(z * v.z) };
		}

		constexpr inline Vector3bCxpr operator/(const Vector3bCxpr& v) const noexcept {
			return {    };
		}


		constexpr inline Vector3bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(x + number), static_cast<bool>(y + number), static_cast<bool>(z + number) };
		}

		constexpr inline Vector3bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(x - number), static_cast<bool>(y - number), static_cast<bool>(z - number) };
		}

		constexpr inline Vector3bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(x * number), static_cast<bool>(y * number), static_cast<bool>(z * number) };
		}

		constexpr inline Vector3bCxpr operator/(const bool number) const noexcept {
			return {    };
		}


		// increment / decrement
		constexpr inline Vector3bCxpr& operator++ () noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator-- () noexcept {
			  
			return *this;
		}

		inline Vector3bCxpr operator++ (int) noexcept {
			Vector3bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector3bCxpr operator-- (int) noexcept {
			Vector3bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector3bCxpr& operator+= (const Vector3bCxpr& right) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator-= (const Vector3bCxpr& right) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator*= (const Vector3bCxpr& right) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator/= (const Vector3bCxpr& right) noexcept {
			  
			return *this;
		}


		constexpr inline Vector3bCxpr& operator+= (const bool number) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator-= (const bool number) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator*= (const bool number) noexcept {
			  
			return *this;
		}

		constexpr inline Vector3bCxpr& operator/= (const bool number) noexcept {
			  
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector3bCxpr& other) const noexcept {
			return x < other.x&& y < other.y&& z < other.z;
		}

		constexpr inline bool operator<= (const Vector3bCxpr& other) const noexcept {
			return x <= other.x && y <= other.y && z <= other.z;
		}

		constexpr inline bool operator>  (const Vector3bCxpr& other) const noexcept {
			return x > other.x && y > other.y && z > other.z;
		}

		constexpr inline bool operator>= (const Vector3bCxpr& other) const noexcept {
			return x >= other.x && y >= other.y && z >= other.z;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return x < number&& y < number&& z < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return x <= number && y <= number && z <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return x > number && y > number && z > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return x >= number && y >= number && z >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector3bCxpr& other) const noexcept {
			return x == other.x && y == other.y && z == other.z;
		}

		constexpr inline bool operator!=(const Vector3bCxpr& other) const noexcept {
			return x != other.x || y != other.y || z != other.z;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return x == number && y == number && z == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return x != number || y != number || z != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 3; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &x;
			if (index > 2)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector4bCxpr
	{
	public:
		bool a, b, c, d;
	public:
		// Vector4bCxpr
		constexpr inline Vector4bCxpr() noexcept : a(false), b(false), c(false), d(false) {}
		constexpr inline Vector4bCxpr(const bool a, const bool b, const bool c, const bool d) noexcept
			: a(a), b(b), c(c), d(d) {}

		// copy/move constructor and assignment
		inline Vector4bCxpr(const Vector4bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4bCxpr& operator=(const Vector4bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}

		inline Vector4bCxpr(Vector4bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d;
		}

		constexpr inline Vector4bCxpr& operator=(Vector4bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; return *this;
		}
		// .....................................
		constexpr inline Vector4bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; return *this;
		}


		constexpr inline Vector4bCxpr operator+(const Vector4bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d) };
		}

		constexpr inline Vector4bCxpr operator-(const Vector4bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d) };
		}

		constexpr inline Vector4bCxpr operator*(const Vector4bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d) };
		}

		constexpr inline Vector4bCxpr operator/(const Vector4bCxpr& v) const noexcept {
			return {     };
		}


		constexpr inline Vector4bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number) };
		}

		constexpr inline Vector4bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number) };
		}

		constexpr inline Vector4bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number) };
		}

		constexpr inline Vector4bCxpr operator/(const bool number) const noexcept {
			return {     };
		}


		// increment / decrement
		constexpr inline Vector4bCxpr& operator++ () noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator-- () noexcept {
			   
			return *this;
		}

		inline Vector4bCxpr operator++ (int) noexcept {
			Vector4bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector4bCxpr operator-- (int) noexcept {
			Vector4bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector4bCxpr& operator+= (const Vector4bCxpr& right) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator-= (const Vector4bCxpr& right) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator*= (const Vector4bCxpr& right) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator/= (const Vector4bCxpr& right) noexcept {
			   
			return *this;
		}


		constexpr inline Vector4bCxpr& operator+= (const bool number) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator-= (const bool number) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator*= (const bool number) noexcept {
			   
			return *this;
		}

		constexpr inline Vector4bCxpr& operator/= (const bool number) noexcept {
			   
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector4bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d;
		}

		constexpr inline bool operator<= (const Vector4bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d;
		}

		constexpr inline bool operator>  (const Vector4bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d;
		}

		constexpr inline bool operator>= (const Vector4bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector4bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d;
		}

		constexpr inline bool operator!=(const Vector4bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 4; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 3)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector5bCxpr
	{
	public:
		bool a, b, c, d, e;
	public:
		// Vector5bCxpr
		constexpr inline Vector5bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false) {}
		constexpr inline Vector5bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e) noexcept
			: a(a), b(b), c(c), d(d), e(e) {}

		// copy/move constructor and assignment
		inline Vector5bCxpr(const Vector5bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5bCxpr& operator=(const Vector5bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}

		inline Vector5bCxpr(Vector5bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e;
		}

		constexpr inline Vector5bCxpr& operator=(Vector5bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; return *this;
		}
		// .....................................
		constexpr inline Vector5bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; return *this;
		}


		constexpr inline Vector5bCxpr operator+(const Vector5bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e) };
		}

		constexpr inline Vector5bCxpr operator-(const Vector5bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e) };
		}

		constexpr inline Vector5bCxpr operator*(const Vector5bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e) };
		}

		constexpr inline Vector5bCxpr operator/(const Vector5bCxpr& v) const noexcept {
			return {      };
		}


		constexpr inline Vector5bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number) };
		}

		constexpr inline Vector5bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number) };
		}

		constexpr inline Vector5bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number) };
		}

		constexpr inline Vector5bCxpr operator/(const bool number) const noexcept {
			return {      };
		}


		// increment / decrement
		constexpr inline Vector5bCxpr& operator++ () noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator-- () noexcept {
			    
			return *this;
		}

		inline Vector5bCxpr operator++ (int) noexcept {
			Vector5bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector5bCxpr operator-- (int) noexcept {
			Vector5bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector5bCxpr& operator+= (const Vector5bCxpr& right) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator-= (const Vector5bCxpr& right) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator*= (const Vector5bCxpr& right) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator/= (const Vector5bCxpr& right) noexcept {
			    
			return *this;
		}


		constexpr inline Vector5bCxpr& operator+= (const bool number) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator-= (const bool number) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator*= (const bool number) noexcept {
			    
			return *this;
		}

		constexpr inline Vector5bCxpr& operator/= (const bool number) noexcept {
			    
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector5bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e;
		}

		constexpr inline bool operator<= (const Vector5bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e;
		}

		constexpr inline bool operator>  (const Vector5bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e;
		}

		constexpr inline bool operator>= (const Vector5bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector5bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e;
		}

		constexpr inline bool operator!=(const Vector5bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 5; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 4)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector6bCxpr
	{
	public:
		bool a, b, c, d, e, f;
	public:
		// Vector6bCxpr
		constexpr inline Vector6bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false), f(false) {}
		constexpr inline Vector6bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f) {}

		// copy/move constructor and assignment
		inline Vector6bCxpr(const Vector6bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6bCxpr& operator=(const Vector6bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}

		inline Vector6bCxpr(Vector6bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f;
		}

		constexpr inline Vector6bCxpr& operator=(Vector6bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; return *this;
		}
		// .....................................
		constexpr inline Vector6bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; return *this;
		}


		constexpr inline Vector6bCxpr operator+(const Vector6bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f) };
		}

		constexpr inline Vector6bCxpr operator-(const Vector6bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f) };
		}

		constexpr inline Vector6bCxpr operator*(const Vector6bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f) };
		}

		constexpr inline Vector6bCxpr operator/(const Vector6bCxpr& v) const noexcept {
			return {       };
		}


		constexpr inline Vector6bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number) };
		}

		constexpr inline Vector6bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number) };
		}

		constexpr inline Vector6bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number) };
		}

		constexpr inline Vector6bCxpr operator/(const bool number) const noexcept {
			return {       };
		}


		// increment / decrement
		constexpr inline Vector6bCxpr& operator++ () noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator-- () noexcept {
			     
			return *this;
		}

		inline Vector6bCxpr operator++ (int) noexcept {
			Vector6bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector6bCxpr operator-- (int) noexcept {
			Vector6bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector6bCxpr& operator+= (const Vector6bCxpr& right) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator-= (const Vector6bCxpr& right) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator*= (const Vector6bCxpr& right) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator/= (const Vector6bCxpr& right) noexcept {
			     
			return *this;
		}


		constexpr inline Vector6bCxpr& operator+= (const bool number) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator-= (const bool number) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator*= (const bool number) noexcept {
			     
			return *this;
		}

		constexpr inline Vector6bCxpr& operator/= (const bool number) noexcept {
			     
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector6bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f;
		}

		constexpr inline bool operator<= (const Vector6bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f;
		}

		constexpr inline bool operator>  (const Vector6bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f;
		}

		constexpr inline bool operator>= (const Vector6bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector6bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f;
		}

		constexpr inline bool operator!=(const Vector6bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 6; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 5)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector7bCxpr
	{
	public:
		bool a, b, c, d, e, f, g;
	public:
		// Vector7bCxpr
		constexpr inline Vector7bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false), f(false), g(false) {}
		constexpr inline Vector7bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g) {}

		// copy/move constructor and assignment
		inline Vector7bCxpr(const Vector7bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7bCxpr& operator=(const Vector7bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}

		inline Vector7bCxpr(Vector7bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g;
		}

		constexpr inline Vector7bCxpr& operator=(Vector7bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; return *this;
		}
		// .....................................
		constexpr inline Vector7bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; return *this;
		}


		constexpr inline Vector7bCxpr operator+(const Vector7bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g) };
		}

		constexpr inline Vector7bCxpr operator-(const Vector7bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g) };
		}

		constexpr inline Vector7bCxpr operator*(const Vector7bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g) };
		}

		constexpr inline Vector7bCxpr operator/(const Vector7bCxpr& v) const noexcept {
			return {        };
		}


		constexpr inline Vector7bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number) };
		}

		constexpr inline Vector7bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number) };
		}

		constexpr inline Vector7bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number) };
		}

		constexpr inline Vector7bCxpr operator/(const bool number) const noexcept {
			return {        };
		}


		// increment / decrement
		constexpr inline Vector7bCxpr& operator++ () noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator-- () noexcept {
			      
			return *this;
		}

		inline Vector7bCxpr operator++ (int) noexcept {
			Vector7bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector7bCxpr operator-- (int) noexcept {
			Vector7bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector7bCxpr& operator+= (const Vector7bCxpr& right) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator-= (const Vector7bCxpr& right) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator*= (const Vector7bCxpr& right) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator/= (const Vector7bCxpr& right) noexcept {
			      
			return *this;
		}


		constexpr inline Vector7bCxpr& operator+= (const bool number) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator-= (const bool number) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator*= (const bool number) noexcept {
			      
			return *this;
		}

		constexpr inline Vector7bCxpr& operator/= (const bool number) noexcept {
			      
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector7bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g;
		}

		constexpr inline bool operator<= (const Vector7bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g;
		}

		constexpr inline bool operator>  (const Vector7bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g;
		}

		constexpr inline bool operator>= (const Vector7bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector7bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g;
		}

		constexpr inline bool operator!=(const Vector7bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 7; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 6)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector8bCxpr
	{
	public:
		bool a, b, c, d, e, f, g, h;
	public:
		// Vector8bCxpr
		constexpr inline Vector8bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false) {}
		constexpr inline Vector8bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h) {}

		// copy/move constructor and assignment
		inline Vector8bCxpr(const Vector8bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8bCxpr& operator=(const Vector8bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}

		inline Vector8bCxpr(Vector8bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h;
		}

		constexpr inline Vector8bCxpr& operator=(Vector8bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; return *this;
		}
		// .....................................
		constexpr inline Vector8bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; return *this;
		}


		constexpr inline Vector8bCxpr operator+(const Vector8bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h) };
		}

		constexpr inline Vector8bCxpr operator-(const Vector8bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h) };
		}

		constexpr inline Vector8bCxpr operator*(const Vector8bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h) };
		}

		constexpr inline Vector8bCxpr operator/(const Vector8bCxpr& v) const noexcept {
			return {         };
		}


		constexpr inline Vector8bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number) };
		}

		constexpr inline Vector8bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number) };
		}

		constexpr inline Vector8bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number) };
		}

		constexpr inline Vector8bCxpr operator/(const bool number) const noexcept {
			return {         };
		}


		// increment / decrement
		constexpr inline Vector8bCxpr& operator++ () noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator-- () noexcept {
			       
			return *this;
		}

		inline Vector8bCxpr operator++ (int) noexcept {
			Vector8bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector8bCxpr operator-- (int) noexcept {
			Vector8bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector8bCxpr& operator+= (const Vector8bCxpr& right) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator-= (const Vector8bCxpr& right) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator*= (const Vector8bCxpr& right) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator/= (const Vector8bCxpr& right) noexcept {
			       
			return *this;
		}


		constexpr inline Vector8bCxpr& operator+= (const bool number) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator-= (const bool number) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator*= (const bool number) noexcept {
			       
			return *this;
		}

		constexpr inline Vector8bCxpr& operator/= (const bool number) noexcept {
			       
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector8bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h;
		}

		constexpr inline bool operator<= (const Vector8bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h;
		}

		constexpr inline bool operator>  (const Vector8bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h;
		}

		constexpr inline bool operator>= (const Vector8bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector8bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h;
		}

		constexpr inline bool operator!=(const Vector8bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 8; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 7)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector9bCxpr
	{
	public:
		bool a, b, c, d, e, f, g, h, i;
	public:
		// Vector9bCxpr
		constexpr inline Vector9bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false), i(false) {}
		constexpr inline Vector9bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h,
			const bool i) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}

		// copy/move constructor and assignment
		inline Vector9bCxpr(const Vector9bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9bCxpr& operator=(const Vector9bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}

		inline Vector9bCxpr(Vector9bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i;
		}

		constexpr inline Vector9bCxpr& operator=(Vector9bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; return *this;
		}
		// .....................................
		constexpr inline Vector9bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; return *this;
		}


		constexpr inline Vector9bCxpr operator+(const Vector9bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h), static_cast<bool>(i + v.i) };
		}

		constexpr inline Vector9bCxpr operator-(const Vector9bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h), static_cast<bool>(i - v.i) };
		}

		constexpr inline Vector9bCxpr operator*(const Vector9bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h), static_cast<bool>(i * v.i) };
		}

		constexpr inline Vector9bCxpr operator/(const Vector9bCxpr& v) const noexcept {
			return {          };
		}


		constexpr inline Vector9bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number), static_cast<bool>(i + number) };
		}

		constexpr inline Vector9bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number), static_cast<bool>(i - number) };
		}

		constexpr inline Vector9bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number), static_cast<bool>(i * number) };
		}

		constexpr inline Vector9bCxpr operator/(const bool number) const noexcept {
			return {          };
		}


		// increment / decrement
		constexpr inline Vector9bCxpr& operator++ () noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator-- () noexcept {
			        
			return *this;
		}

		inline Vector9bCxpr operator++ (int) noexcept {
			Vector9bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector9bCxpr operator-- (int) noexcept {
			Vector9bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector9bCxpr& operator+= (const Vector9bCxpr& right) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator-= (const Vector9bCxpr& right) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator*= (const Vector9bCxpr& right) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator/= (const Vector9bCxpr& right) noexcept {
			        
			return *this;
		}


		constexpr inline Vector9bCxpr& operator+= (const bool number) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator-= (const bool number) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator*= (const bool number) noexcept {
			        
			return *this;
		}

		constexpr inline Vector9bCxpr& operator/= (const bool number) noexcept {
			        
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector9bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i;
		}

		constexpr inline bool operator<= (const Vector9bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i;
		}

		constexpr inline bool operator>  (const Vector9bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i;
		}

		constexpr inline bool operator>= (const Vector9bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector9bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i;
		}

		constexpr inline bool operator!=(const Vector9bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 9; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 8)
				return ptr[0];
			return ptr[index];
		}
	};



	class Vector10bCxpr
	{
	public:
		bool a, b, c, d, e, f, g, h, i, j;
	public:
		// Vector10bCxpr
		constexpr inline Vector10bCxpr() noexcept : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false), i(false), j(false) {}
		constexpr inline Vector10bCxpr(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h,
			const bool i, const bool j) noexcept
			: a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i), j(j) {}

		// copy/move constructor and assignment
		inline Vector10bCxpr(const Vector10bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10bCxpr& operator=(const Vector10bCxpr& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}

		inline Vector10bCxpr(Vector10bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j;
		}

		constexpr inline Vector10bCxpr& operator=(Vector10bCxpr&& other) noexcept {
			a = other.a; b = other.b; c = other.c; d = other.d; e = other.e; f = other.f; g = other.g; h = other.h; i = other.i; j = other.j; return *this;
		}
		// .....................................
		constexpr inline Vector10bCxpr& operator=(const bool number) noexcept {
			a = number; b = number; c = number; d = number; e = number; f = number; g = number; h = number; i = number; j = number; return *this;
		}


		constexpr inline Vector10bCxpr operator+(const Vector10bCxpr& v) const noexcept {
			return { static_cast<bool>(a + v.a), static_cast<bool>(b + v.b), static_cast<bool>(c + v.c), static_cast<bool>(d + v.d), static_cast<bool>(e + v.e), static_cast<bool>(f + v.f), static_cast<bool>(g + v.g), static_cast<bool>(h + v.h), static_cast<bool>(i + v.i), static_cast<bool>(j + v.j) };
		}

		constexpr inline Vector10bCxpr operator-(const Vector10bCxpr& v) const noexcept {
			return { static_cast<bool>(a - v.a), static_cast<bool>(b - v.b), static_cast<bool>(c - v.c), static_cast<bool>(d - v.d), static_cast<bool>(e - v.e), static_cast<bool>(f - v.f), static_cast<bool>(g - v.g), static_cast<bool>(h - v.h), static_cast<bool>(i - v.i), static_cast<bool>(j - v.j) };
		}

		constexpr inline Vector10bCxpr operator*(const Vector10bCxpr& v) const noexcept {
			return { static_cast<bool>(a * v.a), static_cast<bool>(b * v.b), static_cast<bool>(c * v.c), static_cast<bool>(d * v.d), static_cast<bool>(e * v.e), static_cast<bool>(f * v.f), static_cast<bool>(g * v.g), static_cast<bool>(h * v.h), static_cast<bool>(i * v.i), static_cast<bool>(j * v.j) };
		}

		constexpr inline Vector10bCxpr operator/(const Vector10bCxpr& v) const noexcept {
			return {           };
		}


		constexpr inline Vector10bCxpr operator+(const bool number) const noexcept {
			return { static_cast<bool>(a + number), static_cast<bool>(b + number), static_cast<bool>(c + number), static_cast<bool>(d + number), static_cast<bool>(e + number), static_cast<bool>(f + number), static_cast<bool>(g + number), static_cast<bool>(h + number), static_cast<bool>(i + number), static_cast<bool>(j + number) };
		}

		constexpr inline Vector10bCxpr operator-(const bool number) const noexcept {
			return { static_cast<bool>(a - number), static_cast<bool>(b - number), static_cast<bool>(c - number), static_cast<bool>(d - number), static_cast<bool>(e - number), static_cast<bool>(f - number), static_cast<bool>(g - number), static_cast<bool>(h - number), static_cast<bool>(i - number), static_cast<bool>(j - number) };
		}

		constexpr inline Vector10bCxpr operator*(const bool number) const noexcept {
			return { static_cast<bool>(a * number), static_cast<bool>(b * number), static_cast<bool>(c * number), static_cast<bool>(d * number), static_cast<bool>(e * number), static_cast<bool>(f * number), static_cast<bool>(g * number), static_cast<bool>(h * number), static_cast<bool>(i * number), static_cast<bool>(j * number) };
		}

		constexpr inline Vector10bCxpr operator/(const bool number) const noexcept {
			return {           };
		}


		// increment / decrement
		constexpr inline Vector10bCxpr& operator++ () noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator-- () noexcept {
			         
			return *this;
		}

		inline Vector10bCxpr operator++ (int) noexcept {
			Vector10bCxpr temp = *this;
			++* this;
			return temp;
		}

		inline Vector10bCxpr operator-- (int) noexcept {
			Vector10bCxpr temp = *this;
			--* this;
			return temp;
		}


		// assignments
		constexpr inline Vector10bCxpr& operator+= (const Vector10bCxpr& right) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator-= (const Vector10bCxpr& right) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator*= (const Vector10bCxpr& right) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator/= (const Vector10bCxpr& right) noexcept {
			         
			return *this;
		}


		constexpr inline Vector10bCxpr& operator+= (const bool number) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator-= (const bool number) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator*= (const bool number) noexcept {
			         
			return *this;
		}

		constexpr inline Vector10bCxpr& operator/= (const bool number) noexcept {
			         
			return *this;
		}


		// less than / greater than
		constexpr inline bool operator< (const Vector10bCxpr& other) const noexcept {
			return a < other.a&& b < other.b&& c < other.c&& d < other.d&& e < other.e&& f < other.f&& g < other.g&& h < other.h&& i < other.i&& j < other.j;
		}

		constexpr inline bool operator<= (const Vector10bCxpr& other) const noexcept {
			return a <= other.a && b <= other.b && c <= other.c && d <= other.d && e <= other.e && f <= other.f && g <= other.g && h <= other.h && i <= other.i && j <= other.j;
		}

		constexpr inline bool operator>  (const Vector10bCxpr& other) const noexcept {
			return a > other.a && b > other.b && c > other.c && d > other.d && e > other.e && f > other.f && g > other.g && h > other.h && i > other.i && j > other.j;
		}

		constexpr inline bool operator>= (const Vector10bCxpr& other) const noexcept {
			return a >= other.a && b >= other.b && c >= other.c && d >= other.d && e >= other.e && f >= other.f && g >= other.g && h >= other.h && i >= other.i && j >= other.j;
		}


		constexpr inline bool operator<  (const bool number) const noexcept {
			return a < number&& b < number&& c < number&& d < number&& e < number&& f < number&& g < number&& h < number&& i < number&& j < number;
		}

		constexpr inline bool operator<= (const bool number) const noexcept {
			return a <= number && b <= number && c <= number && d <= number && e <= number && f <= number && g <= number && h <= number && i <= number && j <= number;
		}

		constexpr inline bool operator>  (const bool number) const noexcept {
			return a > number && b > number && c > number && d > number && e > number && f > number && g > number && h > number && i > number && j > number;
		}

		constexpr inline bool operator>= (const bool number) const noexcept {
			return a >= number && b >= number && c >= number && d >= number && e >= number && f >= number && g >= number && h >= number && i >= number && j >= number;
		}


		// equal / not equal
		constexpr inline bool operator==(const Vector10bCxpr& other) const noexcept {
			return a == other.a && b == other.b && c == other.c && d == other.d && e == other.e && f == other.f && g == other.g && h == other.h && i == other.i && j == other.j;
		}

		constexpr inline bool operator!=(const Vector10bCxpr& other) const noexcept {
			return a != other.a || b != other.b || c != other.c || d != other.d || e != other.e || f != other.f || g != other.g || h != other.h || i != other.i || j != other.j;
		}

		constexpr inline bool operator==(const bool number) const noexcept {
			return a == number && b == number && c == number && d == number && e == number && f == number && g == number && h == number && i == number && j == number;
		}

		constexpr inline bool operator!=(const bool number) const noexcept {
			return a != number || b != number || c != number || d != number || e != number || f != number || g != number || h != number || i != number || j != number;
		}


		constexpr inline std::uint8_t size() const noexcept { return 10; }
		constexpr inline void reset(const bool stnd_value = false) noexcept {
			for (std::uint8_t i = 0; i < size(); ++i)
				this->at(i) = stnd_value;
		}

		constexpr inline bool& operator[](const std::uint8_t index) noexcept {
			return at(index);
		}
		constexpr inline bool& at(const std::uint8_t index) noexcept
		{
			bool* ptr = &a;
			if (index > 9)
				return ptr[0];
			return ptr[index];
		}
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2bCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3bCxpr& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10bCxpr& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
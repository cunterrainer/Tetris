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

		Type : unsigned long
		Bytes: 4
		Range: 0 to 4.294.967.295
	*/

	class Vector2Ul
	{
	public:
		unsigned long x, y;
	public:
		Vector2Ul() noexcept : x(0Ul), y(0Ul) {}
		Vector2Ul(const unsigned long x, const unsigned long y) noexcept;
		// copy
		Vector2Ul(const Vector2Ul& other) noexcept;
		Vector2Ul& operator=(const Vector2Ul& other) noexcept;
		// move
		Vector2Ul(Vector2Ul&& other) noexcept;
		Vector2Ul& operator=(Vector2Ul&& other) noexcept;
		// assignment
		Vector2Ul& operator=(const unsigned long number) noexcept;

		// math operator
		Vector2Ul operator+(const Vector2Ul& v) const noexcept;
		Vector2Ul operator-(const Vector2Ul& v) const noexcept;
		Vector2Ul operator*(const Vector2Ul& v) const noexcept;
		Vector2Ul operator/(const Vector2Ul& v) const noexcept;

		Vector2Ul operator+(const unsigned long number) const noexcept;
		Vector2Ul operator-(const unsigned long number) const noexcept;
		Vector2Ul operator*(const unsigned long number) const noexcept;
		Vector2Ul operator/(const unsigned long number) const noexcept;

		// increment / decrement
		Vector2Ul& operator++ () noexcept;		// prefix increment
		Vector2Ul& operator-- () noexcept;		// prefix decrement
		Vector2Ul  operator++ (int) noexcept;		// postfix increment
		Vector2Ul  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2Ul& operator+= (const Vector2Ul& right) noexcept;
		Vector2Ul& operator-= (const Vector2Ul& right) noexcept;
		Vector2Ul& operator*= (const Vector2Ul& right) noexcept;
		Vector2Ul& operator/= (const Vector2Ul& right) noexcept;

		Vector2Ul& operator+= (const unsigned long number) noexcept;
		Vector2Ul& operator-= (const unsigned long number) noexcept;
		Vector2Ul& operator*= (const unsigned long number) noexcept;
		Vector2Ul& operator/= (const unsigned long number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2Ul& other) const noexcept;
		bool operator<= (const Vector2Ul& other) const noexcept;
		bool operator>	(const Vector2Ul& other) const noexcept;
		bool operator>= (const Vector2Ul& other) const noexcept;

		bool operator<	(const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>	(const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2Ul& other) const noexcept;
		bool operator!= (const Vector2Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector3Ul
	{
	public:
		unsigned long x, y, z;
	public:
		Vector3Ul() : x(0Ul), y(0Ul), z(0Ul) {}
		Vector3Ul(const unsigned long x, const unsigned long y, const unsigned long z) noexcept;
		// copy
		Vector3Ul(const Vector3Ul& other) noexcept;
		Vector3Ul& operator=(const Vector3Ul& other) noexcept;
		// move
		Vector3Ul(Vector3Ul&& other) noexcept;
		Vector3Ul& operator=(Vector3Ul&& other) noexcept;
		// assignment
		Vector3Ul& operator=(const unsigned long number) noexcept;

		// math operator
		Vector3Ul operator+(const Vector3Ul& v) const noexcept;
		Vector3Ul operator-(const Vector3Ul& v) const noexcept;
		Vector3Ul operator*(const Vector3Ul& v) const noexcept;
		Vector3Ul operator/(const Vector3Ul& v) const noexcept;

		Vector3Ul operator+(const unsigned long number) const noexcept;
		Vector3Ul operator-(const unsigned long number) const noexcept;
		Vector3Ul operator*(const unsigned long number) const noexcept;
		Vector3Ul operator/(const unsigned long number) const noexcept;

		// increment / decrement
		Vector3Ul& operator++ () noexcept;		// prefix increment
		Vector3Ul& operator-- () noexcept;		// prefix decrement
		Vector3Ul  operator++ (int) noexcept;		// postfix increment
		Vector3Ul  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3Ul& operator+= (const Vector3Ul& right) noexcept;
		Vector3Ul& operator-= (const Vector3Ul& right) noexcept;
		Vector3Ul& operator*= (const Vector3Ul& right) noexcept;
		Vector3Ul& operator/= (const Vector3Ul& right) noexcept;

		Vector3Ul& operator+= (const unsigned long number) noexcept;
		Vector3Ul& operator-= (const unsigned long number) noexcept;
		Vector3Ul& operator*= (const unsigned long number) noexcept;
		Vector3Ul& operator/= (const unsigned long number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3Ul& other) const noexcept;
		bool operator<= (const Vector3Ul& other) const noexcept;
		bool operator>  (const Vector3Ul& other) const noexcept;
		bool operator>= (const Vector3Ul& other) const noexcept;
		 
		bool operator<	(const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>	(const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3Ul& other) const noexcept;
		bool operator!= (const Vector3Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector4Ul
	{
	public:
		unsigned long a, b, c, d;
	public:
		Vector4Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul) {}
		Vector4Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d) noexcept;
		// copy
		Vector4Ul(const Vector4Ul& other) noexcept;
		Vector4Ul& operator=(const Vector4Ul& other) noexcept;
		// move
		Vector4Ul(Vector4Ul&& other) noexcept;
		Vector4Ul& operator=(Vector4Ul&& other) noexcept;
		// assignment
		Vector4Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector4Ul operator+(const Vector4Ul& v) const noexcept;
		Vector4Ul operator-(const Vector4Ul& v) const noexcept;
		Vector4Ul operator*(const Vector4Ul& v) const noexcept;
		Vector4Ul operator/(const Vector4Ul& v) const noexcept;
		
		Vector4Ul operator+(const unsigned long number) const noexcept;
		Vector4Ul operator-(const unsigned long number) const noexcept;
		Vector4Ul operator*(const unsigned long number) const noexcept;
		Vector4Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector4Ul& operator++ () noexcept;		// prefix increment
		Vector4Ul& operator-- () noexcept;		// prefix decrement
		Vector4Ul  operator++ (int) noexcept;		// postfix increment
		Vector4Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4Ul& operator+= (const Vector4Ul& right) noexcept;
		Vector4Ul& operator-= (const Vector4Ul& right) noexcept;
		Vector4Ul& operator*= (const Vector4Ul& right) noexcept;
		Vector4Ul& operator/= (const Vector4Ul& right) noexcept;
		
		Vector4Ul& operator+= (const unsigned long number) noexcept;
		Vector4Ul& operator-= (const unsigned long number) noexcept;
		Vector4Ul& operator*= (const unsigned long number) noexcept;
		Vector4Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4Ul& other) const noexcept;
		bool operator<= (const Vector4Ul& other) const noexcept;
		bool operator>	(const Vector4Ul& other) const noexcept;
		bool operator>= (const Vector4Ul& other) const noexcept;
		
		bool operator<	(const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>	(const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4Ul& other) const noexcept;
		bool operator!= (const Vector4Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector5Ul
	{
	public:
		unsigned long a, b, c, d, e;
	public:
		Vector5Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul) {}
		Vector5Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d, const unsigned long e) noexcept;
		// copy
		Vector5Ul(const Vector5Ul& other) noexcept;
		Vector5Ul& operator=(const Vector5Ul& other) noexcept;
		// move
		Vector5Ul(Vector5Ul&& other) noexcept;
		Vector5Ul& operator=(Vector5Ul&& other) noexcept;
		// assignment
		Vector5Ul& operator=(const unsigned long number) noexcept;
		 
		// math operator
		Vector5Ul operator+(const Vector5Ul& v) const noexcept;
		Vector5Ul operator-(const Vector5Ul& v) const noexcept;
		Vector5Ul operator*(const Vector5Ul& v) const noexcept;
		Vector5Ul operator/(const Vector5Ul& v) const noexcept;
		
		Vector5Ul operator+(const unsigned long number) const noexcept;
		Vector5Ul operator-(const unsigned long number) const noexcept;
		Vector5Ul operator*(const unsigned long number) const noexcept;
		Vector5Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector5Ul& operator++ () noexcept;		// prefix increment
		Vector5Ul& operator-- () noexcept;		// prefix decrement
		Vector5Ul  operator++ (int) noexcept;		// postfix increment
		Vector5Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5Ul& operator+= (const Vector5Ul& right) noexcept;
		Vector5Ul& operator-= (const Vector5Ul& right) noexcept;
		Vector5Ul& operator*= (const Vector5Ul& right) noexcept;
		Vector5Ul& operator/= (const Vector5Ul& right) noexcept;
		
		Vector5Ul& operator+= (const unsigned long number) noexcept;
		Vector5Ul& operator-= (const unsigned long number) noexcept;
		Vector5Ul& operator*= (const unsigned long number) noexcept;
		Vector5Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5Ul& other) const noexcept;
		bool operator<= (const Vector5Ul& other) const noexcept;
		bool operator>	(const Vector5Ul& other) const noexcept;
		bool operator>= (const Vector5Ul& other) const noexcept;
		
		bool operator<	(const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>	(const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5Ul& other) const noexcept;
		bool operator!= (const Vector5Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector6Ul
	{
	public:
		unsigned long a, b, c, d, e, f;
	public:
		Vector6Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul), f(0Ul) {}
		Vector6Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
			const unsigned long e, const unsigned long f) noexcept;
		// copy
		Vector6Ul(const Vector6Ul& other) noexcept;
		Vector6Ul& operator=(const Vector6Ul& other) noexcept;
		// move
		Vector6Ul(Vector6Ul&& other) noexcept;
		Vector6Ul& operator=(Vector6Ul&& other) noexcept;
		// assignment
		Vector6Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector6Ul operator+(const Vector6Ul& v) const noexcept;
		Vector6Ul operator-(const Vector6Ul& v) const noexcept;
		Vector6Ul operator*(const Vector6Ul& v) const noexcept;
		Vector6Ul operator/(const Vector6Ul& v) const noexcept;
		
		Vector6Ul operator+(const unsigned long number) const noexcept;
		Vector6Ul operator-(const unsigned long number) const noexcept;
		Vector6Ul operator*(const unsigned long number) const noexcept;
		Vector6Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector6Ul& operator++ () noexcept;		// prefix increment
		Vector6Ul& operator-- () noexcept;		// prefix decrement
		Vector6Ul  operator++ (int) noexcept;		// postfix increment
		Vector6Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6Ul& operator+= (const Vector6Ul& right) noexcept;
		Vector6Ul& operator-= (const Vector6Ul& right) noexcept;
		Vector6Ul& operator*= (const Vector6Ul& right) noexcept;
		Vector6Ul& operator/= (const Vector6Ul& right) noexcept;
		
		Vector6Ul& operator+= (const unsigned long number) noexcept;
		Vector6Ul& operator-= (const unsigned long number) noexcept;
		Vector6Ul& operator*= (const unsigned long number) noexcept;
		Vector6Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6Ul& other) const noexcept;
		bool operator<  (const Vector6Ul& other) const noexcept;
		bool operator>  (const Vector6Ul& other) const noexcept;
		bool operator>= (const Vector6Ul& other) const noexcept;
		
		bool operator<  (const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>  (const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6Ul& other) const noexcept;
		bool operator!= (const Vector6Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector7Ul
	{
	public:
		unsigned long a, b, c, d, e, f, g;
	public:
		Vector7Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul), f(0Ul), g(0Ul) {}
		Vector7Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
			const unsigned long e, const unsigned long f, const unsigned long g) noexcept;
		// copy
		Vector7Ul(const Vector7Ul& other) noexcept;
		Vector7Ul& operator=(const Vector7Ul& other) noexcept;
		// move
		Vector7Ul(Vector7Ul&& other) noexcept;
		Vector7Ul& operator=(Vector7Ul&& other) noexcept;
		// assignment
		Vector7Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector7Ul operator+(const Vector7Ul& v) const noexcept;
		Vector7Ul operator-(const Vector7Ul& v) const noexcept;
		Vector7Ul operator*(const Vector7Ul& v) const noexcept;
		Vector7Ul operator/(const Vector7Ul& v) const noexcept;
		
		Vector7Ul operator+(const unsigned long number) const noexcept;
		Vector7Ul operator-(const unsigned long number) const noexcept;
		Vector7Ul operator*(const unsigned long number) const noexcept;
		Vector7Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector7Ul& operator++ () noexcept;		// prefix increment
		Vector7Ul& operator-- () noexcept;		// prefix decrement
		Vector7Ul  operator++ (int) noexcept;		// postfix increment
		Vector7Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7Ul& operator+= (const Vector7Ul& right) noexcept;
		Vector7Ul& operator-= (const Vector7Ul& right) noexcept;
		Vector7Ul& operator*= (const Vector7Ul& right) noexcept;
		Vector7Ul& operator/= (const Vector7Ul& right) noexcept;
		
		Vector7Ul& operator+= (const unsigned long number) noexcept;
		Vector7Ul& operator-= (const unsigned long number) noexcept;
		Vector7Ul& operator*= (const unsigned long number) noexcept;
		Vector7Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7Ul& other) const noexcept;
		bool operator<  (const Vector7Ul& other) const noexcept;
		bool operator>  (const Vector7Ul& other) const noexcept;
		bool operator>= (const Vector7Ul& other) const noexcept;
		
		bool operator<  (const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>  (const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7Ul& other) const noexcept;
		bool operator!= (const Vector7Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector8Ul
	{
	public:
		unsigned long a, b, c, d, e, f, g, h;
	public:
		Vector8Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul), f(0Ul), g(0Ul), h(0Ul) {}
		Vector8Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
			const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h) noexcept;
		// copy
		Vector8Ul(const Vector8Ul& other) noexcept;
		Vector8Ul& operator=(const Vector8Ul& other) noexcept;
		// move
		Vector8Ul(Vector8Ul&& other) noexcept;
		Vector8Ul& operator=(Vector8Ul&& other) noexcept;
		// assignment
		Vector8Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector8Ul operator+(const Vector8Ul& v) const noexcept;
		Vector8Ul operator-(const Vector8Ul& v) const noexcept;
		Vector8Ul operator*(const Vector8Ul& v) const noexcept;
		Vector8Ul operator/(const Vector8Ul& v) const noexcept;
		
		Vector8Ul operator+(const unsigned long number) const noexcept;
		Vector8Ul operator-(const unsigned long number) const noexcept;
		Vector8Ul operator*(const unsigned long number) const noexcept;
		Vector8Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector8Ul& operator++ () noexcept;		// prefix increment
		Vector8Ul& operator-- () noexcept;		// prefix decrement
		Vector8Ul  operator++ (int) noexcept;		// postfix increment
		Vector8Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8Ul& operator+= (const Vector8Ul& right) noexcept;
		Vector8Ul& operator-= (const Vector8Ul& right) noexcept;
		Vector8Ul& operator*= (const Vector8Ul& right) noexcept;
		Vector8Ul& operator/= (const Vector8Ul& right) noexcept;
		
		Vector8Ul& operator+= (const unsigned long number) noexcept;
		Vector8Ul& operator-= (const unsigned long number) noexcept;
		Vector8Ul& operator*= (const unsigned long number) noexcept;
		Vector8Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8Ul& other) const noexcept;
		bool operator<  (const Vector8Ul& other) const noexcept;
		bool operator>  (const Vector8Ul& other) const noexcept;
		bool operator>= (const Vector8Ul& other) const noexcept;
		
		bool operator<  (const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>  (const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8Ul& other) const noexcept;
		bool operator!= (const Vector8Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector9Ul
	{
	public:
		unsigned long a, b, c, d, e, f, g, h, i;
	public:
		Vector9Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul), f(0Ul), g(0Ul), h(0Ul), i(0Ul) {}
		Vector9Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
			const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h,
			const unsigned long i) noexcept;
		// copy
		Vector9Ul(const Vector9Ul& other) noexcept;
		Vector9Ul& operator=(const Vector9Ul& other) noexcept;
		// move
		Vector9Ul(Vector9Ul&& other) noexcept;
		Vector9Ul& operator=(Vector9Ul&& other) noexcept;
		// assignment
		Vector9Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector9Ul operator+(const Vector9Ul& v) const noexcept;
		Vector9Ul operator-(const Vector9Ul& v) const noexcept;
		Vector9Ul operator*(const Vector9Ul& v) const noexcept;
		Vector9Ul operator/(const Vector9Ul& v) const noexcept;
		
		Vector9Ul operator+(const unsigned long number) const noexcept;
		Vector9Ul operator-(const unsigned long number) const noexcept;
		Vector9Ul operator*(const unsigned long number) const noexcept;
		Vector9Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector9Ul& operator++ () noexcept;		// prefix increment
		Vector9Ul& operator-- () noexcept;		// prefix decrement
		Vector9Ul  operator++ (int) noexcept;		// postfix increment
		Vector9Ul  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9Ul& operator+= (const Vector9Ul& right) noexcept;
		Vector9Ul& operator-= (const Vector9Ul& right) noexcept;
		Vector9Ul& operator*= (const Vector9Ul& right) noexcept;
		Vector9Ul& operator/= (const Vector9Ul& right) noexcept;
		
		Vector9Ul& operator+= (const unsigned long number) noexcept;
		Vector9Ul& operator-= (const unsigned long number) noexcept;
		Vector9Ul& operator*= (const unsigned long number) noexcept;
		Vector9Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9Ul& other) const noexcept;
		bool operator<  (const Vector9Ul& other) const noexcept;
		bool operator>  (const Vector9Ul& other) const noexcept;
		bool operator>= (const Vector9Ul& other) const noexcept;
		
		bool operator<  (const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>  (const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9Ul& other) const noexcept;
		bool operator!= (const Vector9Ul& other) const noexcept;
		bool operator== (const unsigned long number)  const noexcept;
		bool operator!= (const unsigned long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	class Vector10Ul
	{
	public:
		unsigned long a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10Ul() : a(0Ul), b(0Ul), c(0Ul), d(0Ul), e(0Ul), f(0Ul), g(0Ul), h(0Ul), i(0Ul), j(0Ul) {}
		Vector10Ul(const unsigned long a, const unsigned long b, const unsigned long c, const unsigned long d,
			const unsigned long e, const unsigned long f, const unsigned long g, const unsigned long h,
			const unsigned long i, const unsigned long j) noexcept;
		// copy
		Vector10Ul(const Vector10Ul& other) noexcept;
		Vector10Ul& operator=(const Vector10Ul& other) noexcept;
		// move
		Vector10Ul(Vector10Ul&& other) noexcept;
		Vector10Ul& operator=(Vector10Ul&& other) noexcept;
		// assignment
		Vector10Ul& operator=(const unsigned long number) noexcept;
		
		// math operator
		Vector10Ul operator+(const Vector10Ul& v) const noexcept;
		Vector10Ul operator-(const Vector10Ul& v) const noexcept;
		Vector10Ul operator*(const Vector10Ul& v) const noexcept;
		Vector10Ul operator/(const Vector10Ul& v) const noexcept;
		
		Vector10Ul operator+(const unsigned long number) const noexcept;
		Vector10Ul operator-(const unsigned long number) const noexcept;
		Vector10Ul operator*(const unsigned long number) const noexcept;
		Vector10Ul operator/(const unsigned long number) const noexcept;
		
		// increment / decrement
		Vector10Ul& operator++ () noexcept;		// prefix increment
		Vector10Ul& operator-- () noexcept;		// prefix decrement
		Vector10Ul  operator++ (int) noexcept;	// postfix increment
		Vector10Ul  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10Ul& operator+= (const Vector10Ul& right) noexcept;
		Vector10Ul& operator-= (const Vector10Ul& right) noexcept;
		Vector10Ul& operator*= (const Vector10Ul& right) noexcept;
		Vector10Ul& operator/= (const Vector10Ul& right) noexcept;
		
		Vector10Ul& operator+= (const unsigned long number) noexcept;
		Vector10Ul& operator-= (const unsigned long number) noexcept;
		Vector10Ul& operator*= (const unsigned long number) noexcept;
		Vector10Ul& operator/= (const unsigned long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10Ul& other) const noexcept;
		bool operator<  (const Vector10Ul& other) const noexcept;
		bool operator>  (const Vector10Ul& other) const noexcept;
		bool operator>= (const Vector10Ul& other) const noexcept;

		bool operator<  (const unsigned long number) const noexcept;
		bool operator<= (const unsigned long number) const noexcept;
		bool operator>  (const unsigned long number) const noexcept;
		bool operator>= (const unsigned long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10Ul& other) const noexcept;
		bool operator!= (const Vector10Ul& other) const noexcept;
		bool operator== (const unsigned long number)   const noexcept;
		bool operator!= (const unsigned long number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const unsigned long stnd_value = 0Ul) noexcept;
		unsigned long& operator[](const std::uint8_t index) noexcept;
		unsigned long& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2Ul& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3Ul& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10Ul& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
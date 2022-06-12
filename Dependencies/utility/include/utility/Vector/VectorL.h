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

		Type : long
		Bytes: 4
		Range: -2.147.483.648 to 2.147.483.647
	*/

	class Vector2l
	{
	public:
		long x, y;
	public:
		Vector2l() noexcept : x(0L), y(0L) {}
		Vector2l(const long x, const long y) noexcept;
		// copy
		Vector2l(const Vector2l& other) noexcept;
		Vector2l& operator=(const Vector2l& other) noexcept;
		// move
		Vector2l(Vector2l&& other) noexcept;
		Vector2l& operator=(Vector2l&& other) noexcept;
		// assignment
		Vector2l& operator=(const long number) noexcept;

		// math operator
		Vector2l operator+(const Vector2l& v) const noexcept;
		Vector2l operator-(const Vector2l& v) const noexcept;
		Vector2l operator*(const Vector2l& v) const noexcept;
		Vector2l operator/(const Vector2l& v) const noexcept;

		Vector2l operator+(const long number) const noexcept;
		Vector2l operator-(const long number) const noexcept;
		Vector2l operator*(const long number) const noexcept;
		Vector2l operator/(const long number) const noexcept;

		// increment / decrement
		Vector2l& operator++ () noexcept;		// prefix increment
		Vector2l& operator-- () noexcept;		// prefix decrement
		Vector2l  operator++ (int) noexcept;		// postfix increment
		Vector2l  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2l& operator+= (const Vector2l& right) noexcept;
		Vector2l& operator-= (const Vector2l& right) noexcept;
		Vector2l& operator*= (const Vector2l& right) noexcept;
		Vector2l& operator/= (const Vector2l& right) noexcept;

		Vector2l& operator+= (const long number) noexcept;
		Vector2l& operator-= (const long number) noexcept;
		Vector2l& operator*= (const long number) noexcept;
		Vector2l& operator/= (const long number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2l& other) const noexcept;
		bool operator<= (const Vector2l& other) const noexcept;
		bool operator>	(const Vector2l& other) const noexcept;
		bool operator>= (const Vector2l& other) const noexcept;

		bool operator<	(const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>	(const long number) const noexcept;
		bool operator>= (const long number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2l& other) const noexcept;
		bool operator!= (const Vector2l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector3l
	{
	public:
		long x, y, z;
	public:
		Vector3l() : x(0L), y(0L), z(0L) {}
		Vector3l(const long x, const long y, const long z) noexcept;
		// copy
		Vector3l(const Vector3l& other) noexcept;
		Vector3l& operator=(const Vector3l& other) noexcept;
		// move
		Vector3l(Vector3l&& other) noexcept;
		Vector3l& operator=(Vector3l&& other) noexcept;
		// assignment
		Vector3l& operator=(const long number) noexcept;

		// math operator
		Vector3l operator+(const Vector3l& v) const noexcept;
		Vector3l operator-(const Vector3l& v) const noexcept;
		Vector3l operator*(const Vector3l& v) const noexcept;
		Vector3l operator/(const Vector3l& v) const noexcept;

		Vector3l operator+(const long number) const noexcept;
		Vector3l operator-(const long number) const noexcept;
		Vector3l operator*(const long number) const noexcept;
		Vector3l operator/(const long number) const noexcept;

		// increment / decrement
		Vector3l& operator++ () noexcept;		// prefix increment
		Vector3l& operator-- () noexcept;		// prefix decrement
		Vector3l  operator++ (int) noexcept;		// postfix increment
		Vector3l  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3l& operator+= (const Vector3l& right) noexcept;
		Vector3l& operator-= (const Vector3l& right) noexcept;
		Vector3l& operator*= (const Vector3l& right) noexcept;
		Vector3l& operator/= (const Vector3l& right) noexcept;

		Vector3l& operator+= (const long number) noexcept;
		Vector3l& operator-= (const long number) noexcept;
		Vector3l& operator*= (const long number) noexcept;
		Vector3l& operator/= (const long number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3l& other) const noexcept;
		bool operator<= (const Vector3l& other) const noexcept;
		bool operator>  (const Vector3l& other) const noexcept;
		bool operator>= (const Vector3l& other) const noexcept;
		 
		bool operator<	(const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>	(const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3l& other) const noexcept;
		bool operator!= (const Vector3l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector4l
	{
	public:
		long a, b, c, d;
	public:
		Vector4l() : a(0L), b(0L), c(0L), d(0L) {}
		Vector4l(const long a, const long b, const long c, const long d) noexcept;
		// copy
		Vector4l(const Vector4l& other) noexcept;
		Vector4l& operator=(const Vector4l& other) noexcept;
		// move
		Vector4l(Vector4l&& other) noexcept;
		Vector4l& operator=(Vector4l&& other) noexcept;
		// assignment
		Vector4l& operator=(const long number) noexcept;
		
		// math operator
		Vector4l operator+(const Vector4l& v) const noexcept;
		Vector4l operator-(const Vector4l& v) const noexcept;
		Vector4l operator*(const Vector4l& v) const noexcept;
		Vector4l operator/(const Vector4l& v) const noexcept;
		
		Vector4l operator+(const long number) const noexcept;
		Vector4l operator-(const long number) const noexcept;
		Vector4l operator*(const long number) const noexcept;
		Vector4l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector4l& operator++ () noexcept;		// prefix increment
		Vector4l& operator-- () noexcept;		// prefix decrement
		Vector4l  operator++ (int) noexcept;		// postfix increment
		Vector4l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4l& operator+= (const Vector4l& right) noexcept;
		Vector4l& operator-= (const Vector4l& right) noexcept;
		Vector4l& operator*= (const Vector4l& right) noexcept;
		Vector4l& operator/= (const Vector4l& right) noexcept;
		
		Vector4l& operator+= (const long number) noexcept;
		Vector4l& operator-= (const long number) noexcept;
		Vector4l& operator*= (const long number) noexcept;
		Vector4l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4l& other) const noexcept;
		bool operator<= (const Vector4l& other) const noexcept;
		bool operator>	(const Vector4l& other) const noexcept;
		bool operator>= (const Vector4l& other) const noexcept;
		
		bool operator<	(const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>	(const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4l& other) const noexcept;
		bool operator!= (const Vector4l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector5l
	{
	public:
		long a, b, c, d, e;
	public:
		Vector5l() : a(0L), b(0L), c(0L), d(0L), e(0L) {}
		Vector5l(const long a, const long b, const long c, const long d, const long e) noexcept;
		// copy
		Vector5l(const Vector5l& other) noexcept;
		Vector5l& operator=(const Vector5l& other) noexcept;
		// move
		Vector5l(Vector5l&& other) noexcept;
		Vector5l& operator=(Vector5l&& other) noexcept;
		// assignment
		Vector5l& operator=(const long number) noexcept;
		 
		// math operator
		Vector5l operator+(const Vector5l& v) const noexcept;
		Vector5l operator-(const Vector5l& v) const noexcept;
		Vector5l operator*(const Vector5l& v) const noexcept;
		Vector5l operator/(const Vector5l& v) const noexcept;
		
		Vector5l operator+(const long number) const noexcept;
		Vector5l operator-(const long number) const noexcept;
		Vector5l operator*(const long number) const noexcept;
		Vector5l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector5l& operator++ () noexcept;		// prefix increment
		Vector5l& operator-- () noexcept;		// prefix decrement
		Vector5l  operator++ (int) noexcept;		// postfix increment
		Vector5l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5l& operator+= (const Vector5l& right) noexcept;
		Vector5l& operator-= (const Vector5l& right) noexcept;
		Vector5l& operator*= (const Vector5l& right) noexcept;
		Vector5l& operator/= (const Vector5l& right) noexcept;
		
		Vector5l& operator+= (const long number) noexcept;
		Vector5l& operator-= (const long number) noexcept;
		Vector5l& operator*= (const long number) noexcept;
		Vector5l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5l& other) const noexcept;
		bool operator<= (const Vector5l& other) const noexcept;
		bool operator>	(const Vector5l& other) const noexcept;
		bool operator>= (const Vector5l& other) const noexcept;
		
		bool operator<	(const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>	(const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5l& other) const noexcept;
		bool operator!= (const Vector5l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector6l
	{
	public:
		long a, b, c, d, e, f;
	public:
		Vector6l() : a(0L), b(0L), c(0L), d(0L), e(0L), f(0L) {}
		Vector6l(const long a, const long b, const long c, const long d,
			const long e, const long f) noexcept;
		// copy
		Vector6l(const Vector6l& other) noexcept;
		Vector6l& operator=(const Vector6l& other) noexcept;
		// move
		Vector6l(Vector6l&& other) noexcept;
		Vector6l& operator=(Vector6l&& other) noexcept;
		// assignment
		Vector6l& operator=(const long number) noexcept;
		
		// math operator
		Vector6l operator+(const Vector6l& v) const noexcept;
		Vector6l operator-(const Vector6l& v) const noexcept;
		Vector6l operator*(const Vector6l& v) const noexcept;
		Vector6l operator/(const Vector6l& v) const noexcept;
		
		Vector6l operator+(const long number) const noexcept;
		Vector6l operator-(const long number) const noexcept;
		Vector6l operator*(const long number) const noexcept;
		Vector6l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector6l& operator++ () noexcept;		// prefix increment
		Vector6l& operator-- () noexcept;		// prefix decrement
		Vector6l  operator++ (int) noexcept;		// postfix increment
		Vector6l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6l& operator+= (const Vector6l& right) noexcept;
		Vector6l& operator-= (const Vector6l& right) noexcept;
		Vector6l& operator*= (const Vector6l& right) noexcept;
		Vector6l& operator/= (const Vector6l& right) noexcept;
		
		Vector6l& operator+= (const long number) noexcept;
		Vector6l& operator-= (const long number) noexcept;
		Vector6l& operator*= (const long number) noexcept;
		Vector6l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6l& other) const noexcept;
		bool operator<  (const Vector6l& other) const noexcept;
		bool operator>  (const Vector6l& other) const noexcept;
		bool operator>= (const Vector6l& other) const noexcept;
		
		bool operator<  (const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>  (const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6l& other) const noexcept;
		bool operator!= (const Vector6l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector7l
	{
	public:
		long a, b, c, d, e, f, g;
	public:
		Vector7l() : a(0L), b(0L), c(0L), d(0L), e(0L), f(0L), g(0L) {}
		Vector7l(const long a, const long b, const long c, const long d,
			const long e, const long f, const long g) noexcept;
		// copy
		Vector7l(const Vector7l& other) noexcept;
		Vector7l& operator=(const Vector7l& other) noexcept;
		// move
		Vector7l(Vector7l&& other) noexcept;
		Vector7l& operator=(Vector7l&& other) noexcept;
		// assignment
		Vector7l& operator=(const long number) noexcept;
		
		// math operator
		Vector7l operator+(const Vector7l& v) const noexcept;
		Vector7l operator-(const Vector7l& v) const noexcept;
		Vector7l operator*(const Vector7l& v) const noexcept;
		Vector7l operator/(const Vector7l& v) const noexcept;
		
		Vector7l operator+(const long number) const noexcept;
		Vector7l operator-(const long number) const noexcept;
		Vector7l operator*(const long number) const noexcept;
		Vector7l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector7l& operator++ () noexcept;		// prefix increment
		Vector7l& operator-- () noexcept;		// prefix decrement
		Vector7l  operator++ (int) noexcept;		// postfix increment
		Vector7l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7l& operator+= (const Vector7l& right) noexcept;
		Vector7l& operator-= (const Vector7l& right) noexcept;
		Vector7l& operator*= (const Vector7l& right) noexcept;
		Vector7l& operator/= (const Vector7l& right) noexcept;
		
		Vector7l& operator+= (const long number) noexcept;
		Vector7l& operator-= (const long number) noexcept;
		Vector7l& operator*= (const long number) noexcept;
		Vector7l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7l& other) const noexcept;
		bool operator<  (const Vector7l& other) const noexcept;
		bool operator>  (const Vector7l& other) const noexcept;
		bool operator>= (const Vector7l& other) const noexcept;
		
		bool operator<  (const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>  (const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7l& other) const noexcept;
		bool operator!= (const Vector7l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector8l
	{
	public:
		long a, b, c, d, e, f, g, h;
	public:
		Vector8l() : a(0L), b(0L), c(0L), d(0L), e(0L), f(0L), g(0L), h(0L) {}
		Vector8l(const long a, const long b, const long c, const long d,
			const long e, const long f, const long g, const long h) noexcept;
		// copy
		Vector8l(const Vector8l& other) noexcept;
		Vector8l& operator=(const Vector8l& other) noexcept;
		// move
		Vector8l(Vector8l&& other) noexcept;
		Vector8l& operator=(Vector8l&& other) noexcept;
		// assignment
		Vector8l& operator=(const long number) noexcept;
		
		// math operator
		Vector8l operator+(const Vector8l& v) const noexcept;
		Vector8l operator-(const Vector8l& v) const noexcept;
		Vector8l operator*(const Vector8l& v) const noexcept;
		Vector8l operator/(const Vector8l& v) const noexcept;
		
		Vector8l operator+(const long number) const noexcept;
		Vector8l operator-(const long number) const noexcept;
		Vector8l operator*(const long number) const noexcept;
		Vector8l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector8l& operator++ () noexcept;		// prefix increment
		Vector8l& operator-- () noexcept;		// prefix decrement
		Vector8l  operator++ (int) noexcept;		// postfix increment
		Vector8l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8l& operator+= (const Vector8l& right) noexcept;
		Vector8l& operator-= (const Vector8l& right) noexcept;
		Vector8l& operator*= (const Vector8l& right) noexcept;
		Vector8l& operator/= (const Vector8l& right) noexcept;
		
		Vector8l& operator+= (const long number) noexcept;
		Vector8l& operator-= (const long number) noexcept;
		Vector8l& operator*= (const long number) noexcept;
		Vector8l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8l& other) const noexcept;
		bool operator<  (const Vector8l& other) const noexcept;
		bool operator>  (const Vector8l& other) const noexcept;
		bool operator>= (const Vector8l& other) const noexcept;
		
		bool operator<  (const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>  (const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8l& other) const noexcept;
		bool operator!= (const Vector8l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector9l
	{
	public:
		long a, b, c, d, e, f, g, h, i;
	public:
		Vector9l() : a(0L), b(0L), c(0L), d(0L), e(0L), f(0L), g(0L), h(0L), i(0L) {}
		Vector9l(const long a, const long b, const long c, const long d,
			const long e, const long f, const long g, const long h,
			const long i) noexcept;
		// copy
		Vector9l(const Vector9l& other) noexcept;
		Vector9l& operator=(const Vector9l& other) noexcept;
		// move
		Vector9l(Vector9l&& other) noexcept;
		Vector9l& operator=(Vector9l&& other) noexcept;
		// assignment
		Vector9l& operator=(const long number) noexcept;
		
		// math operator
		Vector9l operator+(const Vector9l& v) const noexcept;
		Vector9l operator-(const Vector9l& v) const noexcept;
		Vector9l operator*(const Vector9l& v) const noexcept;
		Vector9l operator/(const Vector9l& v) const noexcept;
		
		Vector9l operator+(const long number) const noexcept;
		Vector9l operator-(const long number) const noexcept;
		Vector9l operator*(const long number) const noexcept;
		Vector9l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector9l& operator++ () noexcept;		// prefix increment
		Vector9l& operator-- () noexcept;		// prefix decrement
		Vector9l  operator++ (int) noexcept;		// postfix increment
		Vector9l  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9l& operator+= (const Vector9l& right) noexcept;
		Vector9l& operator-= (const Vector9l& right) noexcept;
		Vector9l& operator*= (const Vector9l& right) noexcept;
		Vector9l& operator/= (const Vector9l& right) noexcept;
		
		Vector9l& operator+= (const long number) noexcept;
		Vector9l& operator-= (const long number) noexcept;
		Vector9l& operator*= (const long number) noexcept;
		Vector9l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9l& other) const noexcept;
		bool operator<  (const Vector9l& other) const noexcept;
		bool operator>  (const Vector9l& other) const noexcept;
		bool operator>= (const Vector9l& other) const noexcept;
		
		bool operator<  (const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>  (const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9l& other) const noexcept;
		bool operator!= (const Vector9l& other) const noexcept;
		bool operator== (const long number)  const noexcept;
		bool operator!= (const long number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	class Vector10l
	{
	public:
		long a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10l() : a(0L), b(0L), c(0L), d(0L), e(0L), f(0L), g(0L), h(0L), i(0L), j(0L) {}
		Vector10l(const long a, const long b, const long c, const long d,
			const long e, const long f, const long g, const long h,
			const long i, const long j) noexcept;
		// copy
		Vector10l(const Vector10l& other) noexcept;
		Vector10l& operator=(const Vector10l& other) noexcept;
		// move
		Vector10l(Vector10l&& other) noexcept;
		Vector10l& operator=(Vector10l&& other) noexcept;
		// assignment
		Vector10l& operator=(const long number) noexcept;
		
		// math operator
		Vector10l operator+(const Vector10l& v) const noexcept;
		Vector10l operator-(const Vector10l& v) const noexcept;
		Vector10l operator*(const Vector10l& v) const noexcept;
		Vector10l operator/(const Vector10l& v) const noexcept;
		
		Vector10l operator+(const long number) const noexcept;
		Vector10l operator-(const long number) const noexcept;
		Vector10l operator*(const long number) const noexcept;
		Vector10l operator/(const long number) const noexcept;
		
		// increment / decrement
		Vector10l& operator++ () noexcept;		// prefix increment
		Vector10l& operator-- () noexcept;		// prefix decrement
		Vector10l  operator++ (int) noexcept;	// postfix increment
		Vector10l  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10l& operator+= (const Vector10l& right) noexcept;
		Vector10l& operator-= (const Vector10l& right) noexcept;
		Vector10l& operator*= (const Vector10l& right) noexcept;
		Vector10l& operator/= (const Vector10l& right) noexcept;
		
		Vector10l& operator+= (const long number) noexcept;
		Vector10l& operator-= (const long number) noexcept;
		Vector10l& operator*= (const long number) noexcept;
		Vector10l& operator/= (const long number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10l& other) const noexcept;
		bool operator<  (const Vector10l& other) const noexcept;
		bool operator>  (const Vector10l& other) const noexcept;
		bool operator>= (const Vector10l& other) const noexcept;

		bool operator<  (const long number) const noexcept;
		bool operator<= (const long number) const noexcept;
		bool operator>  (const long number) const noexcept;
		bool operator>= (const long number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10l& other) const noexcept;
		bool operator!= (const Vector10l& other) const noexcept;
		bool operator== (const long number)   const noexcept;
		bool operator!= (const long number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long stnd_value = 0L) noexcept;
		long& operator[](const std::uint8_t index) noexcept;
		long& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2l& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3l& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10l& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
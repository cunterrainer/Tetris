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

		Type : long double
		Bytes: 8
		Range: 1.7E +/- 308  precision: (15 digits)
	*/

	class Vector2Ld
	{
	public:
		long double x, y;
	public:
		Vector2Ld() noexcept : x(0.0L), y(0.0L) {}
		Vector2Ld(const long double x, const long double y) noexcept;
		// copy
		Vector2Ld(const Vector2Ld& other) noexcept;
		Vector2Ld& operator=(const Vector2Ld& other) noexcept;
		// move
		Vector2Ld(Vector2Ld&& other) noexcept;
		Vector2Ld& operator=(Vector2Ld&& other) noexcept;
		// assignment
		Vector2Ld& operator=(const long double number) noexcept;

		// math operator
		Vector2Ld operator+(const Vector2Ld& v) const noexcept;
		Vector2Ld operator-(const Vector2Ld& v) const noexcept;
		Vector2Ld operator*(const Vector2Ld& v) const noexcept;
		Vector2Ld operator/(const Vector2Ld& v) const noexcept;

		Vector2Ld operator+(const long double number) const noexcept;
		Vector2Ld operator-(const long double number) const noexcept;
		Vector2Ld operator*(const long double number) const noexcept;
		Vector2Ld operator/(const long double number) const noexcept;

		// increment / decrement
		Vector2Ld& operator++ () noexcept;		// prefix increment
		Vector2Ld& operator-- () noexcept;		// prefix decrement
		Vector2Ld  operator++ (int) noexcept;		// postfix increment
		Vector2Ld  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2Ld& operator+= (const Vector2Ld& right) noexcept;
		Vector2Ld& operator-= (const Vector2Ld& right) noexcept;
		Vector2Ld& operator*= (const Vector2Ld& right) noexcept;
		Vector2Ld& operator/= (const Vector2Ld& right) noexcept;

		Vector2Ld& operator+= (const long double number) noexcept;
		Vector2Ld& operator-= (const long double number) noexcept;
		Vector2Ld& operator*= (const long double number) noexcept;
		Vector2Ld& operator/= (const long double number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2Ld& other) const noexcept;
		bool operator<= (const Vector2Ld& other) const noexcept;
		bool operator>	(const Vector2Ld& other) const noexcept;
		bool operator>= (const Vector2Ld& other) const noexcept;

		bool operator<	(const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>	(const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2Ld& other) const noexcept;
		bool operator!= (const Vector2Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector3Ld
	{
	public:
		long double x, y, z;
	public:
		Vector3Ld() : x(0.0L), y(0.0L), z(0.0L) {}
		Vector3Ld(const long double x, const long double y, const long double z) noexcept;
		// copy
		Vector3Ld(const Vector3Ld& other) noexcept;
		Vector3Ld& operator=(const Vector3Ld& other) noexcept;
		// move
		Vector3Ld(Vector3Ld&& other) noexcept;
		Vector3Ld& operator=(Vector3Ld&& other) noexcept;
		// assignment
		Vector3Ld& operator=(const long double number) noexcept;

		// math operator
		Vector3Ld operator+(const Vector3Ld& v) const noexcept;
		Vector3Ld operator-(const Vector3Ld& v) const noexcept;
		Vector3Ld operator*(const Vector3Ld& v) const noexcept;
		Vector3Ld operator/(const Vector3Ld& v) const noexcept;

		Vector3Ld operator+(const long double number) const noexcept;
		Vector3Ld operator-(const long double number) const noexcept;
		Vector3Ld operator*(const long double number) const noexcept;
		Vector3Ld operator/(const long double number) const noexcept;

		// increment / decrement
		Vector3Ld& operator++ () noexcept;		// prefix increment
		Vector3Ld& operator-- () noexcept;		// prefix decrement
		Vector3Ld  operator++ (int) noexcept;		// postfix increment
		Vector3Ld  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3Ld& operator+= (const Vector3Ld& right) noexcept;
		Vector3Ld& operator-= (const Vector3Ld& right) noexcept;
		Vector3Ld& operator*= (const Vector3Ld& right) noexcept;
		Vector3Ld& operator/= (const Vector3Ld& right) noexcept;

		Vector3Ld& operator+= (const long double number) noexcept;
		Vector3Ld& operator-= (const long double number) noexcept;
		Vector3Ld& operator*= (const long double number) noexcept;
		Vector3Ld& operator/= (const long double number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3Ld& other) const noexcept;
		bool operator<= (const Vector3Ld& other) const noexcept;
		bool operator>  (const Vector3Ld& other) const noexcept;
		bool operator>= (const Vector3Ld& other) const noexcept;
		 
		bool operator<	(const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>	(const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3Ld& other) const noexcept;
		bool operator!= (const Vector3Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector4Ld
	{
	public:
		long double a, b, c, d;
	public:
		Vector4Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L) {}
		Vector4Ld(const long double a, const long double b, const long double c, const long double d) noexcept;
		// copy
		Vector4Ld(const Vector4Ld& other) noexcept;
		Vector4Ld& operator=(const Vector4Ld& other) noexcept;
		// move
		Vector4Ld(Vector4Ld&& other) noexcept;
		Vector4Ld& operator=(Vector4Ld&& other) noexcept;
		// assignment
		Vector4Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector4Ld operator+(const Vector4Ld& v) const noexcept;
		Vector4Ld operator-(const Vector4Ld& v) const noexcept;
		Vector4Ld operator*(const Vector4Ld& v) const noexcept;
		Vector4Ld operator/(const Vector4Ld& v) const noexcept;
		
		Vector4Ld operator+(const long double number) const noexcept;
		Vector4Ld operator-(const long double number) const noexcept;
		Vector4Ld operator*(const long double number) const noexcept;
		Vector4Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector4Ld& operator++ () noexcept;		// prefix increment
		Vector4Ld& operator-- () noexcept;		// prefix decrement
		Vector4Ld  operator++ (int) noexcept;		// postfix increment
		Vector4Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4Ld& operator+= (const Vector4Ld& right) noexcept;
		Vector4Ld& operator-= (const Vector4Ld& right) noexcept;
		Vector4Ld& operator*= (const Vector4Ld& right) noexcept;
		Vector4Ld& operator/= (const Vector4Ld& right) noexcept;
		
		Vector4Ld& operator+= (const long double number) noexcept;
		Vector4Ld& operator-= (const long double number) noexcept;
		Vector4Ld& operator*= (const long double number) noexcept;
		Vector4Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4Ld& other) const noexcept;
		bool operator<= (const Vector4Ld& other) const noexcept;
		bool operator>	(const Vector4Ld& other) const noexcept;
		bool operator>= (const Vector4Ld& other) const noexcept;
		
		bool operator<	(const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>	(const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4Ld& other) const noexcept;
		bool operator!= (const Vector4Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector5Ld
	{
	public:
		long double a, b, c, d, e;
	public:
		Vector5Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L) {}
		Vector5Ld(const long double a, const long double b, const long double c, const long double d, const long double e) noexcept;
		// copy
		Vector5Ld(const Vector5Ld& other) noexcept;
		Vector5Ld& operator=(const Vector5Ld& other) noexcept;
		// move
		Vector5Ld(Vector5Ld&& other) noexcept;
		Vector5Ld& operator=(Vector5Ld&& other) noexcept;
		// assignment
		Vector5Ld& operator=(const long double number) noexcept;
		 
		// math operator
		Vector5Ld operator+(const Vector5Ld& v) const noexcept;
		Vector5Ld operator-(const Vector5Ld& v) const noexcept;
		Vector5Ld operator*(const Vector5Ld& v) const noexcept;
		Vector5Ld operator/(const Vector5Ld& v) const noexcept;
		
		Vector5Ld operator+(const long double number) const noexcept;
		Vector5Ld operator-(const long double number) const noexcept;
		Vector5Ld operator*(const long double number) const noexcept;
		Vector5Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector5Ld& operator++ () noexcept;		// prefix increment
		Vector5Ld& operator-- () noexcept;		// prefix decrement
		Vector5Ld  operator++ (int) noexcept;		// postfix increment
		Vector5Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5Ld& operator+= (const Vector5Ld& right) noexcept;
		Vector5Ld& operator-= (const Vector5Ld& right) noexcept;
		Vector5Ld& operator*= (const Vector5Ld& right) noexcept;
		Vector5Ld& operator/= (const Vector5Ld& right) noexcept;
		
		Vector5Ld& operator+= (const long double number) noexcept;
		Vector5Ld& operator-= (const long double number) noexcept;
		Vector5Ld& operator*= (const long double number) noexcept;
		Vector5Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5Ld& other) const noexcept;
		bool operator<= (const Vector5Ld& other) const noexcept;
		bool operator>	(const Vector5Ld& other) const noexcept;
		bool operator>= (const Vector5Ld& other) const noexcept;
		
		bool operator<	(const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>	(const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5Ld& other) const noexcept;
		bool operator!= (const Vector5Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector6Ld
	{
	public:
		long double a, b, c, d, e, f;
	public:
		Vector6Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L) {}
		Vector6Ld(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f) noexcept;
		// copy
		Vector6Ld(const Vector6Ld& other) noexcept;
		Vector6Ld& operator=(const Vector6Ld& other) noexcept;
		// move
		Vector6Ld(Vector6Ld&& other) noexcept;
		Vector6Ld& operator=(Vector6Ld&& other) noexcept;
		// assignment
		Vector6Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector6Ld operator+(const Vector6Ld& v) const noexcept;
		Vector6Ld operator-(const Vector6Ld& v) const noexcept;
		Vector6Ld operator*(const Vector6Ld& v) const noexcept;
		Vector6Ld operator/(const Vector6Ld& v) const noexcept;
		
		Vector6Ld operator+(const long double number) const noexcept;
		Vector6Ld operator-(const long double number) const noexcept;
		Vector6Ld operator*(const long double number) const noexcept;
		Vector6Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector6Ld& operator++ () noexcept;		// prefix increment
		Vector6Ld& operator-- () noexcept;		// prefix decrement
		Vector6Ld  operator++ (int) noexcept;		// postfix increment
		Vector6Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6Ld& operator+= (const Vector6Ld& right) noexcept;
		Vector6Ld& operator-= (const Vector6Ld& right) noexcept;
		Vector6Ld& operator*= (const Vector6Ld& right) noexcept;
		Vector6Ld& operator/= (const Vector6Ld& right) noexcept;
		
		Vector6Ld& operator+= (const long double number) noexcept;
		Vector6Ld& operator-= (const long double number) noexcept;
		Vector6Ld& operator*= (const long double number) noexcept;
		Vector6Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6Ld& other) const noexcept;
		bool operator<  (const Vector6Ld& other) const noexcept;
		bool operator>  (const Vector6Ld& other) const noexcept;
		bool operator>= (const Vector6Ld& other) const noexcept;
		
		bool operator<  (const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>  (const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6Ld& other) const noexcept;
		bool operator!= (const Vector6Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector7Ld
	{
	public:
		long double a, b, c, d, e, f, g;
	public:
		Vector7Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L) {}
		Vector7Ld(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g) noexcept;
		// copy
		Vector7Ld(const Vector7Ld& other) noexcept;
		Vector7Ld& operator=(const Vector7Ld& other) noexcept;
		// move
		Vector7Ld(Vector7Ld&& other) noexcept;
		Vector7Ld& operator=(Vector7Ld&& other) noexcept;
		// assignment
		Vector7Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector7Ld operator+(const Vector7Ld& v) const noexcept;
		Vector7Ld operator-(const Vector7Ld& v) const noexcept;
		Vector7Ld operator*(const Vector7Ld& v) const noexcept;
		Vector7Ld operator/(const Vector7Ld& v) const noexcept;
		
		Vector7Ld operator+(const long double number) const noexcept;
		Vector7Ld operator-(const long double number) const noexcept;
		Vector7Ld operator*(const long double number) const noexcept;
		Vector7Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector7Ld& operator++ () noexcept;		// prefix increment
		Vector7Ld& operator-- () noexcept;		// prefix decrement
		Vector7Ld  operator++ (int) noexcept;		// postfix increment
		Vector7Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7Ld& operator+= (const Vector7Ld& right) noexcept;
		Vector7Ld& operator-= (const Vector7Ld& right) noexcept;
		Vector7Ld& operator*= (const Vector7Ld& right) noexcept;
		Vector7Ld& operator/= (const Vector7Ld& right) noexcept;
		
		Vector7Ld& operator+= (const long double number) noexcept;
		Vector7Ld& operator-= (const long double number) noexcept;
		Vector7Ld& operator*= (const long double number) noexcept;
		Vector7Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7Ld& other) const noexcept;
		bool operator<  (const Vector7Ld& other) const noexcept;
		bool operator>  (const Vector7Ld& other) const noexcept;
		bool operator>= (const Vector7Ld& other) const noexcept;
		
		bool operator<  (const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>  (const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7Ld& other) const noexcept;
		bool operator!= (const Vector7Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector8Ld
	{
	public:
		long double a, b, c, d, e, f, g, h;
	public:
		Vector8Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L) {}
		Vector8Ld(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h) noexcept;
		// copy
		Vector8Ld(const Vector8Ld& other) noexcept;
		Vector8Ld& operator=(const Vector8Ld& other) noexcept;
		// move
		Vector8Ld(Vector8Ld&& other) noexcept;
		Vector8Ld& operator=(Vector8Ld&& other) noexcept;
		// assignment
		Vector8Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector8Ld operator+(const Vector8Ld& v) const noexcept;
		Vector8Ld operator-(const Vector8Ld& v) const noexcept;
		Vector8Ld operator*(const Vector8Ld& v) const noexcept;
		Vector8Ld operator/(const Vector8Ld& v) const noexcept;
		
		Vector8Ld operator+(const long double number) const noexcept;
		Vector8Ld operator-(const long double number) const noexcept;
		Vector8Ld operator*(const long double number) const noexcept;
		Vector8Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector8Ld& operator++ () noexcept;		// prefix increment
		Vector8Ld& operator-- () noexcept;		// prefix decrement
		Vector8Ld  operator++ (int) noexcept;		// postfix increment
		Vector8Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8Ld& operator+= (const Vector8Ld& right) noexcept;
		Vector8Ld& operator-= (const Vector8Ld& right) noexcept;
		Vector8Ld& operator*= (const Vector8Ld& right) noexcept;
		Vector8Ld& operator/= (const Vector8Ld& right) noexcept;
		
		Vector8Ld& operator+= (const long double number) noexcept;
		Vector8Ld& operator-= (const long double number) noexcept;
		Vector8Ld& operator*= (const long double number) noexcept;
		Vector8Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8Ld& other) const noexcept;
		bool operator<  (const Vector8Ld& other) const noexcept;
		bool operator>  (const Vector8Ld& other) const noexcept;
		bool operator>= (const Vector8Ld& other) const noexcept;
		
		bool operator<  (const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>  (const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8Ld& other) const noexcept;
		bool operator!= (const Vector8Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector9Ld
	{
	public:
		long double a, b, c, d, e, f, g, h, i;
	public:
		Vector9Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L), i(0.0L) {}
		Vector9Ld(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h,
			const long double i) noexcept;
		// copy
		Vector9Ld(const Vector9Ld& other) noexcept;
		Vector9Ld& operator=(const Vector9Ld& other) noexcept;
		// move
		Vector9Ld(Vector9Ld&& other) noexcept;
		Vector9Ld& operator=(Vector9Ld&& other) noexcept;
		// assignment
		Vector9Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector9Ld operator+(const Vector9Ld& v) const noexcept;
		Vector9Ld operator-(const Vector9Ld& v) const noexcept;
		Vector9Ld operator*(const Vector9Ld& v) const noexcept;
		Vector9Ld operator/(const Vector9Ld& v) const noexcept;
		
		Vector9Ld operator+(const long double number) const noexcept;
		Vector9Ld operator-(const long double number) const noexcept;
		Vector9Ld operator*(const long double number) const noexcept;
		Vector9Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector9Ld& operator++ () noexcept;		// prefix increment
		Vector9Ld& operator-- () noexcept;		// prefix decrement
		Vector9Ld  operator++ (int) noexcept;		// postfix increment
		Vector9Ld  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9Ld& operator+= (const Vector9Ld& right) noexcept;
		Vector9Ld& operator-= (const Vector9Ld& right) noexcept;
		Vector9Ld& operator*= (const Vector9Ld& right) noexcept;
		Vector9Ld& operator/= (const Vector9Ld& right) noexcept;
		
		Vector9Ld& operator+= (const long double number) noexcept;
		Vector9Ld& operator-= (const long double number) noexcept;
		Vector9Ld& operator*= (const long double number) noexcept;
		Vector9Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9Ld& other) const noexcept;
		bool operator<  (const Vector9Ld& other) const noexcept;
		bool operator>  (const Vector9Ld& other) const noexcept;
		bool operator>= (const Vector9Ld& other) const noexcept;
		
		bool operator<  (const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>  (const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9Ld& other) const noexcept;
		bool operator!= (const Vector9Ld& other) const noexcept;
		bool operator== (const long double number)  const noexcept;
		bool operator!= (const long double number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	class Vector10Ld
	{
	public:
		long double a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10Ld() : a(0.0L), b(0.0L), c(0.0L), d(0.0L), e(0.0L), f(0.0L), g(0.0L), h(0.0L), i(0.0L), j(0.0L) {}
		Vector10Ld(const long double a, const long double b, const long double c, const long double d,
			const long double e, const long double f, const long double g, const long double h,
			const long double i, const long double j) noexcept;
		// copy
		Vector10Ld(const Vector10Ld& other) noexcept;
		Vector10Ld& operator=(const Vector10Ld& other) noexcept;
		// move
		Vector10Ld(Vector10Ld&& other) noexcept;
		Vector10Ld& operator=(Vector10Ld&& other) noexcept;
		// assignment
		Vector10Ld& operator=(const long double number) noexcept;
		
		// math operator
		Vector10Ld operator+(const Vector10Ld& v) const noexcept;
		Vector10Ld operator-(const Vector10Ld& v) const noexcept;
		Vector10Ld operator*(const Vector10Ld& v) const noexcept;
		Vector10Ld operator/(const Vector10Ld& v) const noexcept;
		
		Vector10Ld operator+(const long double number) const noexcept;
		Vector10Ld operator-(const long double number) const noexcept;
		Vector10Ld operator*(const long double number) const noexcept;
		Vector10Ld operator/(const long double number) const noexcept;
		
		// increment / decrement
		Vector10Ld& operator++ () noexcept;		// prefix increment
		Vector10Ld& operator-- () noexcept;		// prefix decrement
		Vector10Ld  operator++ (int) noexcept;	// postfix increment
		Vector10Ld  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10Ld& operator+= (const Vector10Ld& right) noexcept;
		Vector10Ld& operator-= (const Vector10Ld& right) noexcept;
		Vector10Ld& operator*= (const Vector10Ld& right) noexcept;
		Vector10Ld& operator/= (const Vector10Ld& right) noexcept;
		
		Vector10Ld& operator+= (const long double number) noexcept;
		Vector10Ld& operator-= (const long double number) noexcept;
		Vector10Ld& operator*= (const long double number) noexcept;
		Vector10Ld& operator/= (const long double number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10Ld& other) const noexcept;
		bool operator<  (const Vector10Ld& other) const noexcept;
		bool operator>  (const Vector10Ld& other) const noexcept;
		bool operator>= (const Vector10Ld& other) const noexcept;

		bool operator<  (const long double number) const noexcept;
		bool operator<= (const long double number) const noexcept;
		bool operator>  (const long double number) const noexcept;
		bool operator>= (const long double number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10Ld& other) const noexcept;
		bool operator!= (const Vector10Ld& other) const noexcept;
		bool operator== (const long double number)   const noexcept;
		bool operator!= (const long double number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const long double stnd_value = 0.0L) noexcept;
		long double& operator[](const std::uint8_t index) noexcept;
		long double& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2Ld& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3Ld& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10Ld& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
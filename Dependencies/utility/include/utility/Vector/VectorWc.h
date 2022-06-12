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

		Type : wchar_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	class Vector2Wc
	{
	public:
		wchar_t x, y;
	public:
		Vector2Wc() noexcept : x(0), y(0) {}
		Vector2Wc(const wchar_t x, const wchar_t y) noexcept;
		// copy
		Vector2Wc(const Vector2Wc& other) noexcept;
		Vector2Wc& operator=(const Vector2Wc& other) noexcept;
		// move
		Vector2Wc(Vector2Wc&& other) noexcept;
		Vector2Wc& operator=(Vector2Wc&& other) noexcept;
		// assignment
		Vector2Wc& operator=(const wchar_t number) noexcept;

		// math operator
		Vector2Wc operator+(const Vector2Wc& v) const noexcept;
		Vector2Wc operator-(const Vector2Wc& v) const noexcept;
		Vector2Wc operator*(const Vector2Wc& v) const noexcept;
		Vector2Wc operator/(const Vector2Wc& v) const noexcept;

		Vector2Wc operator+(const wchar_t number) const noexcept;
		Vector2Wc operator-(const wchar_t number) const noexcept;
		Vector2Wc operator*(const wchar_t number) const noexcept;
		Vector2Wc operator/(const wchar_t number) const noexcept;

		// increment / decrement
		Vector2Wc& operator++ () noexcept;		// prefix increment
		Vector2Wc& operator-- () noexcept;		// prefix decrement
		Vector2Wc  operator++ (int) noexcept;		// postfix increment
		Vector2Wc  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2Wc& operator+= (const Vector2Wc& right) noexcept;
		Vector2Wc& operator-= (const Vector2Wc& right) noexcept;
		Vector2Wc& operator*= (const Vector2Wc& right) noexcept;
		Vector2Wc& operator/= (const Vector2Wc& right) noexcept;

		Vector2Wc& operator+= (const wchar_t number) noexcept;
		Vector2Wc& operator-= (const wchar_t number) noexcept;
		Vector2Wc& operator*= (const wchar_t number) noexcept;
		Vector2Wc& operator/= (const wchar_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2Wc& other) const noexcept;
		bool operator<= (const Vector2Wc& other) const noexcept;
		bool operator>	(const Vector2Wc& other) const noexcept;
		bool operator>= (const Vector2Wc& other) const noexcept;

		bool operator<	(const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>	(const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2Wc& other) const noexcept;
		bool operator!= (const Vector2Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3Wc
	{
	public:
		wchar_t x, y, z;
	public:
		Vector3Wc() : x(0), y(0), z(0) {}
		Vector3Wc(const wchar_t x, const wchar_t y, const wchar_t z) noexcept;
		// copy
		Vector3Wc(const Vector3Wc& other) noexcept;
		Vector3Wc& operator=(const Vector3Wc& other) noexcept;
		// move
		Vector3Wc(Vector3Wc&& other) noexcept;
		Vector3Wc& operator=(Vector3Wc&& other) noexcept;
		// assignment
		Vector3Wc& operator=(const wchar_t number) noexcept;

		// math operator
		Vector3Wc operator+(const Vector3Wc& v) const noexcept;
		Vector3Wc operator-(const Vector3Wc& v) const noexcept;
		Vector3Wc operator*(const Vector3Wc& v) const noexcept;
		Vector3Wc operator/(const Vector3Wc& v) const noexcept;

		Vector3Wc operator+(const wchar_t number) const noexcept;
		Vector3Wc operator-(const wchar_t number) const noexcept;
		Vector3Wc operator*(const wchar_t number) const noexcept;
		Vector3Wc operator/(const wchar_t number) const noexcept;

		// increment / decrement
		Vector3Wc& operator++ () noexcept;		// prefix increment
		Vector3Wc& operator-- () noexcept;		// prefix decrement
		Vector3Wc  operator++ (int) noexcept;		// postfix increment
		Vector3Wc  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3Wc& operator+= (const Vector3Wc& right) noexcept;
		Vector3Wc& operator-= (const Vector3Wc& right) noexcept;
		Vector3Wc& operator*= (const Vector3Wc& right) noexcept;
		Vector3Wc& operator/= (const Vector3Wc& right) noexcept;

		Vector3Wc& operator+= (const wchar_t number) noexcept;
		Vector3Wc& operator-= (const wchar_t number) noexcept;
		Vector3Wc& operator*= (const wchar_t number) noexcept;
		Vector3Wc& operator/= (const wchar_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3Wc& other) const noexcept;
		bool operator<= (const Vector3Wc& other) const noexcept;
		bool operator>  (const Vector3Wc& other) const noexcept;
		bool operator>= (const Vector3Wc& other) const noexcept;
		 
		bool operator<	(const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>	(const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3Wc& other) const noexcept;
		bool operator!= (const Vector3Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4Wc
	{
	public:
		wchar_t a, b, c, d;
	public:
		Vector4Wc() : a(0), b(0), c(0), d(0) {}
		Vector4Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d) noexcept;
		// copy
		Vector4Wc(const Vector4Wc& other) noexcept;
		Vector4Wc& operator=(const Vector4Wc& other) noexcept;
		// move
		Vector4Wc(Vector4Wc&& other) noexcept;
		Vector4Wc& operator=(Vector4Wc&& other) noexcept;
		// assignment
		Vector4Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector4Wc operator+(const Vector4Wc& v) const noexcept;
		Vector4Wc operator-(const Vector4Wc& v) const noexcept;
		Vector4Wc operator*(const Vector4Wc& v) const noexcept;
		Vector4Wc operator/(const Vector4Wc& v) const noexcept;
		
		Vector4Wc operator+(const wchar_t number) const noexcept;
		Vector4Wc operator-(const wchar_t number) const noexcept;
		Vector4Wc operator*(const wchar_t number) const noexcept;
		Vector4Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector4Wc& operator++ () noexcept;		// prefix increment
		Vector4Wc& operator-- () noexcept;		// prefix decrement
		Vector4Wc  operator++ (int) noexcept;		// postfix increment
		Vector4Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4Wc& operator+= (const Vector4Wc& right) noexcept;
		Vector4Wc& operator-= (const Vector4Wc& right) noexcept;
		Vector4Wc& operator*= (const Vector4Wc& right) noexcept;
		Vector4Wc& operator/= (const Vector4Wc& right) noexcept;
		
		Vector4Wc& operator+= (const wchar_t number) noexcept;
		Vector4Wc& operator-= (const wchar_t number) noexcept;
		Vector4Wc& operator*= (const wchar_t number) noexcept;
		Vector4Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4Wc& other) const noexcept;
		bool operator<= (const Vector4Wc& other) const noexcept;
		bool operator>	(const Vector4Wc& other) const noexcept;
		bool operator>= (const Vector4Wc& other) const noexcept;
		
		bool operator<	(const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>	(const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4Wc& other) const noexcept;
		bool operator!= (const Vector4Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5Wc
	{
	public:
		wchar_t a, b, c, d, e;
	public:
		Vector5Wc() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d, const wchar_t e) noexcept;
		// copy
		Vector5Wc(const Vector5Wc& other) noexcept;
		Vector5Wc& operator=(const Vector5Wc& other) noexcept;
		// move
		Vector5Wc(Vector5Wc&& other) noexcept;
		Vector5Wc& operator=(Vector5Wc&& other) noexcept;
		// assignment
		Vector5Wc& operator=(const wchar_t number) noexcept;
		 
		// math operator
		Vector5Wc operator+(const Vector5Wc& v) const noexcept;
		Vector5Wc operator-(const Vector5Wc& v) const noexcept;
		Vector5Wc operator*(const Vector5Wc& v) const noexcept;
		Vector5Wc operator/(const Vector5Wc& v) const noexcept;
		
		Vector5Wc operator+(const wchar_t number) const noexcept;
		Vector5Wc operator-(const wchar_t number) const noexcept;
		Vector5Wc operator*(const wchar_t number) const noexcept;
		Vector5Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector5Wc& operator++ () noexcept;		// prefix increment
		Vector5Wc& operator-- () noexcept;		// prefix decrement
		Vector5Wc  operator++ (int) noexcept;		// postfix increment
		Vector5Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5Wc& operator+= (const Vector5Wc& right) noexcept;
		Vector5Wc& operator-= (const Vector5Wc& right) noexcept;
		Vector5Wc& operator*= (const Vector5Wc& right) noexcept;
		Vector5Wc& operator/= (const Vector5Wc& right) noexcept;
		
		Vector5Wc& operator+= (const wchar_t number) noexcept;
		Vector5Wc& operator-= (const wchar_t number) noexcept;
		Vector5Wc& operator*= (const wchar_t number) noexcept;
		Vector5Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5Wc& other) const noexcept;
		bool operator<= (const Vector5Wc& other) const noexcept;
		bool operator>	(const Vector5Wc& other) const noexcept;
		bool operator>= (const Vector5Wc& other) const noexcept;
		
		bool operator<	(const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>	(const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5Wc& other) const noexcept;
		bool operator!= (const Vector5Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6Wc
	{
	public:
		wchar_t a, b, c, d, e, f;
	public:
		Vector6Wc() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f) noexcept;
		// copy
		Vector6Wc(const Vector6Wc& other) noexcept;
		Vector6Wc& operator=(const Vector6Wc& other) noexcept;
		// move
		Vector6Wc(Vector6Wc&& other) noexcept;
		Vector6Wc& operator=(Vector6Wc&& other) noexcept;
		// assignment
		Vector6Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector6Wc operator+(const Vector6Wc& v) const noexcept;
		Vector6Wc operator-(const Vector6Wc& v) const noexcept;
		Vector6Wc operator*(const Vector6Wc& v) const noexcept;
		Vector6Wc operator/(const Vector6Wc& v) const noexcept;
		
		Vector6Wc operator+(const wchar_t number) const noexcept;
		Vector6Wc operator-(const wchar_t number) const noexcept;
		Vector6Wc operator*(const wchar_t number) const noexcept;
		Vector6Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector6Wc& operator++ () noexcept;		// prefix increment
		Vector6Wc& operator-- () noexcept;		// prefix decrement
		Vector6Wc  operator++ (int) noexcept;		// postfix increment
		Vector6Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6Wc& operator+= (const Vector6Wc& right) noexcept;
		Vector6Wc& operator-= (const Vector6Wc& right) noexcept;
		Vector6Wc& operator*= (const Vector6Wc& right) noexcept;
		Vector6Wc& operator/= (const Vector6Wc& right) noexcept;
		
		Vector6Wc& operator+= (const wchar_t number) noexcept;
		Vector6Wc& operator-= (const wchar_t number) noexcept;
		Vector6Wc& operator*= (const wchar_t number) noexcept;
		Vector6Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6Wc& other) const noexcept;
		bool operator<  (const Vector6Wc& other) const noexcept;
		bool operator>  (const Vector6Wc& other) const noexcept;
		bool operator>= (const Vector6Wc& other) const noexcept;
		
		bool operator<  (const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>  (const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6Wc& other) const noexcept;
		bool operator!= (const Vector6Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7Wc
	{
	public:
		wchar_t a, b, c, d, e, f, g;
	public:
		Vector7Wc() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g) noexcept;
		// copy
		Vector7Wc(const Vector7Wc& other) noexcept;
		Vector7Wc& operator=(const Vector7Wc& other) noexcept;
		// move
		Vector7Wc(Vector7Wc&& other) noexcept;
		Vector7Wc& operator=(Vector7Wc&& other) noexcept;
		// assignment
		Vector7Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector7Wc operator+(const Vector7Wc& v) const noexcept;
		Vector7Wc operator-(const Vector7Wc& v) const noexcept;
		Vector7Wc operator*(const Vector7Wc& v) const noexcept;
		Vector7Wc operator/(const Vector7Wc& v) const noexcept;
		
		Vector7Wc operator+(const wchar_t number) const noexcept;
		Vector7Wc operator-(const wchar_t number) const noexcept;
		Vector7Wc operator*(const wchar_t number) const noexcept;
		Vector7Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector7Wc& operator++ () noexcept;		// prefix increment
		Vector7Wc& operator-- () noexcept;		// prefix decrement
		Vector7Wc  operator++ (int) noexcept;		// postfix increment
		Vector7Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7Wc& operator+= (const Vector7Wc& right) noexcept;
		Vector7Wc& operator-= (const Vector7Wc& right) noexcept;
		Vector7Wc& operator*= (const Vector7Wc& right) noexcept;
		Vector7Wc& operator/= (const Vector7Wc& right) noexcept;
		
		Vector7Wc& operator+= (const wchar_t number) noexcept;
		Vector7Wc& operator-= (const wchar_t number) noexcept;
		Vector7Wc& operator*= (const wchar_t number) noexcept;
		Vector7Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7Wc& other) const noexcept;
		bool operator<  (const Vector7Wc& other) const noexcept;
		bool operator>  (const Vector7Wc& other) const noexcept;
		bool operator>= (const Vector7Wc& other) const noexcept;
		
		bool operator<  (const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>  (const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7Wc& other) const noexcept;
		bool operator!= (const Vector7Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8Wc
	{
	public:
		wchar_t a, b, c, d, e, f, g, h;
	public:
		Vector8Wc() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h) noexcept;
		// copy
		Vector8Wc(const Vector8Wc& other) noexcept;
		Vector8Wc& operator=(const Vector8Wc& other) noexcept;
		// move
		Vector8Wc(Vector8Wc&& other) noexcept;
		Vector8Wc& operator=(Vector8Wc&& other) noexcept;
		// assignment
		Vector8Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector8Wc operator+(const Vector8Wc& v) const noexcept;
		Vector8Wc operator-(const Vector8Wc& v) const noexcept;
		Vector8Wc operator*(const Vector8Wc& v) const noexcept;
		Vector8Wc operator/(const Vector8Wc& v) const noexcept;
		
		Vector8Wc operator+(const wchar_t number) const noexcept;
		Vector8Wc operator-(const wchar_t number) const noexcept;
		Vector8Wc operator*(const wchar_t number) const noexcept;
		Vector8Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector8Wc& operator++ () noexcept;		// prefix increment
		Vector8Wc& operator-- () noexcept;		// prefix decrement
		Vector8Wc  operator++ (int) noexcept;		// postfix increment
		Vector8Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8Wc& operator+= (const Vector8Wc& right) noexcept;
		Vector8Wc& operator-= (const Vector8Wc& right) noexcept;
		Vector8Wc& operator*= (const Vector8Wc& right) noexcept;
		Vector8Wc& operator/= (const Vector8Wc& right) noexcept;
		
		Vector8Wc& operator+= (const wchar_t number) noexcept;
		Vector8Wc& operator-= (const wchar_t number) noexcept;
		Vector8Wc& operator*= (const wchar_t number) noexcept;
		Vector8Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8Wc& other) const noexcept;
		bool operator<  (const Vector8Wc& other) const noexcept;
		bool operator>  (const Vector8Wc& other) const noexcept;
		bool operator>= (const Vector8Wc& other) const noexcept;
		
		bool operator<  (const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>  (const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8Wc& other) const noexcept;
		bool operator!= (const Vector8Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9Wc
	{
	public:
		wchar_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9Wc() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
			const wchar_t i) noexcept;
		// copy
		Vector9Wc(const Vector9Wc& other) noexcept;
		Vector9Wc& operator=(const Vector9Wc& other) noexcept;
		// move
		Vector9Wc(Vector9Wc&& other) noexcept;
		Vector9Wc& operator=(Vector9Wc&& other) noexcept;
		// assignment
		Vector9Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector9Wc operator+(const Vector9Wc& v) const noexcept;
		Vector9Wc operator-(const Vector9Wc& v) const noexcept;
		Vector9Wc operator*(const Vector9Wc& v) const noexcept;
		Vector9Wc operator/(const Vector9Wc& v) const noexcept;
		
		Vector9Wc operator+(const wchar_t number) const noexcept;
		Vector9Wc operator-(const wchar_t number) const noexcept;
		Vector9Wc operator*(const wchar_t number) const noexcept;
		Vector9Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector9Wc& operator++ () noexcept;		// prefix increment
		Vector9Wc& operator-- () noexcept;		// prefix decrement
		Vector9Wc  operator++ (int) noexcept;		// postfix increment
		Vector9Wc  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9Wc& operator+= (const Vector9Wc& right) noexcept;
		Vector9Wc& operator-= (const Vector9Wc& right) noexcept;
		Vector9Wc& operator*= (const Vector9Wc& right) noexcept;
		Vector9Wc& operator/= (const Vector9Wc& right) noexcept;
		
		Vector9Wc& operator+= (const wchar_t number) noexcept;
		Vector9Wc& operator-= (const wchar_t number) noexcept;
		Vector9Wc& operator*= (const wchar_t number) noexcept;
		Vector9Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9Wc& other) const noexcept;
		bool operator<  (const Vector9Wc& other) const noexcept;
		bool operator>  (const Vector9Wc& other) const noexcept;
		bool operator>= (const Vector9Wc& other) const noexcept;
		
		bool operator<  (const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>  (const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9Wc& other) const noexcept;
		bool operator!= (const Vector9Wc& other) const noexcept;
		bool operator== (const wchar_t number)  const noexcept;
		bool operator!= (const wchar_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10Wc
	{
	public:
		wchar_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10Wc() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10Wc(const wchar_t a, const wchar_t b, const wchar_t c, const wchar_t d,
			const wchar_t e, const wchar_t f, const wchar_t g, const wchar_t h,
			const wchar_t i, const wchar_t j) noexcept;
		// copy
		Vector10Wc(const Vector10Wc& other) noexcept;
		Vector10Wc& operator=(const Vector10Wc& other) noexcept;
		// move
		Vector10Wc(Vector10Wc&& other) noexcept;
		Vector10Wc& operator=(Vector10Wc&& other) noexcept;
		// assignment
		Vector10Wc& operator=(const wchar_t number) noexcept;
		
		// math operator
		Vector10Wc operator+(const Vector10Wc& v) const noexcept;
		Vector10Wc operator-(const Vector10Wc& v) const noexcept;
		Vector10Wc operator*(const Vector10Wc& v) const noexcept;
		Vector10Wc operator/(const Vector10Wc& v) const noexcept;
		
		Vector10Wc operator+(const wchar_t number) const noexcept;
		Vector10Wc operator-(const wchar_t number) const noexcept;
		Vector10Wc operator*(const wchar_t number) const noexcept;
		Vector10Wc operator/(const wchar_t number) const noexcept;
		
		// increment / decrement
		Vector10Wc& operator++ () noexcept;		// prefix increment
		Vector10Wc& operator-- () noexcept;		// prefix decrement
		Vector10Wc  operator++ (int) noexcept;	// postfix increment
		Vector10Wc  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10Wc& operator+= (const Vector10Wc& right) noexcept;
		Vector10Wc& operator-= (const Vector10Wc& right) noexcept;
		Vector10Wc& operator*= (const Vector10Wc& right) noexcept;
		Vector10Wc& operator/= (const Vector10Wc& right) noexcept;
		
		Vector10Wc& operator+= (const wchar_t number) noexcept;
		Vector10Wc& operator-= (const wchar_t number) noexcept;
		Vector10Wc& operator*= (const wchar_t number) noexcept;
		Vector10Wc& operator/= (const wchar_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10Wc& other) const noexcept;
		bool operator<  (const Vector10Wc& other) const noexcept;
		bool operator>  (const Vector10Wc& other) const noexcept;
		bool operator>= (const Vector10Wc& other) const noexcept;

		bool operator<  (const wchar_t number) const noexcept;
		bool operator<= (const wchar_t number) const noexcept;
		bool operator>  (const wchar_t number) const noexcept;
		bool operator>= (const wchar_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10Wc& other) const noexcept;
		bool operator!= (const Vector10Wc& other) const noexcept;
		bool operator== (const wchar_t number)   const noexcept;
		bool operator!= (const wchar_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const wchar_t stnd_value = 0) noexcept;
		wchar_t& operator[](const std::uint8_t index) noexcept;
		wchar_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::wostream& operator<<(std::wostream& os, const Vector2Wc& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector3Wc& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y) << " | z: " << static_cast<std::int32_t>(v.z);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector4Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector5Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector6Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector7Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector8Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector9Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i);
		return os;
	}

	static inline std::wostream& operator<<(std::wostream& os, const Vector10Wc& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i) << " | j: " << static_cast<std::int32_t>(v.j);
		return os;
	}
	// End
}
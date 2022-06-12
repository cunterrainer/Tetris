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

		Type : std::float_t
		Bytes: 4
		Range: 3.4E +/- 38  precision: (7 digits)
	*/

	class Vector2f
	{
	public:
		std::float_t x, y;
	public:
		Vector2f() noexcept : x(0.f), y(0.f) {}
		Vector2f(const std::float_t x, const std::float_t y) noexcept;
		// copy
		Vector2f(const Vector2f& other) noexcept;
		Vector2f& operator=(const Vector2f& other) noexcept;
		// move
		Vector2f(Vector2f&& other) noexcept;
		Vector2f& operator=(Vector2f&& other) noexcept;
		// assignment
		Vector2f& operator=(const std::float_t number) noexcept;

		// math operator
		Vector2f operator+(const Vector2f& v) const noexcept;
		Vector2f operator-(const Vector2f& v) const noexcept;
		Vector2f operator*(const Vector2f& v) const noexcept;
		Vector2f operator/(const Vector2f& v) const noexcept;

		Vector2f operator+(const std::float_t number) const noexcept;
		Vector2f operator-(const std::float_t number) const noexcept;
		Vector2f operator*(const std::float_t number) const noexcept;
		Vector2f operator/(const std::float_t number) const noexcept;

		// increment / decrement
		Vector2f& operator++ () noexcept;		// prefix increment
		Vector2f& operator-- () noexcept;		// prefix decrement
		Vector2f  operator++ (int) noexcept;		// postfix increment
		Vector2f  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2f& operator+= (const Vector2f& right) noexcept;
		Vector2f& operator-= (const Vector2f& right) noexcept;
		Vector2f& operator*= (const Vector2f& right) noexcept;
		Vector2f& operator/= (const Vector2f& right) noexcept;

		Vector2f& operator+= (const std::float_t number) noexcept;
		Vector2f& operator-= (const std::float_t number) noexcept;
		Vector2f& operator*= (const std::float_t number) noexcept;
		Vector2f& operator/= (const std::float_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2f& other) const noexcept;
		bool operator<= (const Vector2f& other) const noexcept;
		bool operator>	(const Vector2f& other) const noexcept;
		bool operator>= (const Vector2f& other) const noexcept;

		bool operator<	(const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>	(const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2f& other) const noexcept;
		bool operator!= (const Vector2f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3f
	{
	public:
		std::float_t x, y, z;
	public:
		Vector3f() : x(0.f), y(0.f), z(0.f) {}
		Vector3f(const std::float_t x, const std::float_t y, const std::float_t z) noexcept;
		// copy
		Vector3f(const Vector3f& other) noexcept;
		Vector3f& operator=(const Vector3f& other) noexcept;
		// move
		Vector3f(Vector3f&& other) noexcept;
		Vector3f& operator=(Vector3f&& other) noexcept;
		// assignment
		Vector3f& operator=(const std::float_t number) noexcept;

		// math operator
		Vector3f operator+(const Vector3f& v) const noexcept;
		Vector3f operator-(const Vector3f& v) const noexcept;
		Vector3f operator*(const Vector3f& v) const noexcept;
		Vector3f operator/(const Vector3f& v) const noexcept;

		Vector3f operator+(const std::float_t number) const noexcept;
		Vector3f operator-(const std::float_t number) const noexcept;
		Vector3f operator*(const std::float_t number) const noexcept;
		Vector3f operator/(const std::float_t number) const noexcept;

		// increment / decrement
		Vector3f& operator++ () noexcept;		// prefix increment
		Vector3f& operator-- () noexcept;		// prefix decrement
		Vector3f  operator++ (int) noexcept;		// postfix increment
		Vector3f  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3f& operator+= (const Vector3f& right) noexcept;
		Vector3f& operator-= (const Vector3f& right) noexcept;
		Vector3f& operator*= (const Vector3f& right) noexcept;
		Vector3f& operator/= (const Vector3f& right) noexcept;

		Vector3f& operator+= (const std::float_t number) noexcept;
		Vector3f& operator-= (const std::float_t number) noexcept;
		Vector3f& operator*= (const std::float_t number) noexcept;
		Vector3f& operator/= (const std::float_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3f& other) const noexcept;
		bool operator<= (const Vector3f& other) const noexcept;
		bool operator>  (const Vector3f& other) const noexcept;
		bool operator>= (const Vector3f& other) const noexcept;
		 
		bool operator<	(const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>	(const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3f& other) const noexcept;
		bool operator!= (const Vector3f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4f
	{
	public:
		std::float_t a, b, c, d;
	public:
		Vector4f() : a(0.f), b(0.f), c(0.f), d(0.f) {}
		Vector4f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d) noexcept;
		// copy
		Vector4f(const Vector4f& other) noexcept;
		Vector4f& operator=(const Vector4f& other) noexcept;
		// move
		Vector4f(Vector4f&& other) noexcept;
		Vector4f& operator=(Vector4f&& other) noexcept;
		// assignment
		Vector4f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector4f operator+(const Vector4f& v) const noexcept;
		Vector4f operator-(const Vector4f& v) const noexcept;
		Vector4f operator*(const Vector4f& v) const noexcept;
		Vector4f operator/(const Vector4f& v) const noexcept;
		
		Vector4f operator+(const std::float_t number) const noexcept;
		Vector4f operator-(const std::float_t number) const noexcept;
		Vector4f operator*(const std::float_t number) const noexcept;
		Vector4f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector4f& operator++ () noexcept;		// prefix increment
		Vector4f& operator-- () noexcept;		// prefix decrement
		Vector4f  operator++ (int) noexcept;		// postfix increment
		Vector4f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4f& operator+= (const Vector4f& right) noexcept;
		Vector4f& operator-= (const Vector4f& right) noexcept;
		Vector4f& operator*= (const Vector4f& right) noexcept;
		Vector4f& operator/= (const Vector4f& right) noexcept;
		
		Vector4f& operator+= (const std::float_t number) noexcept;
		Vector4f& operator-= (const std::float_t number) noexcept;
		Vector4f& operator*= (const std::float_t number) noexcept;
		Vector4f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4f& other) const noexcept;
		bool operator<= (const Vector4f& other) const noexcept;
		bool operator>	(const Vector4f& other) const noexcept;
		bool operator>= (const Vector4f& other) const noexcept;
		
		bool operator<	(const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>	(const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4f& other) const noexcept;
		bool operator!= (const Vector4f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5f
	{
	public:
		std::float_t a, b, c, d, e;
	public:
		Vector5f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f) {}
		Vector5f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d, const std::float_t e) noexcept;
		// copy
		Vector5f(const Vector5f& other) noexcept;
		Vector5f& operator=(const Vector5f& other) noexcept;
		// move
		Vector5f(Vector5f&& other) noexcept;
		Vector5f& operator=(Vector5f&& other) noexcept;
		// assignment
		Vector5f& operator=(const std::float_t number) noexcept;
		 
		// math operator
		Vector5f operator+(const Vector5f& v) const noexcept;
		Vector5f operator-(const Vector5f& v) const noexcept;
		Vector5f operator*(const Vector5f& v) const noexcept;
		Vector5f operator/(const Vector5f& v) const noexcept;
		
		Vector5f operator+(const std::float_t number) const noexcept;
		Vector5f operator-(const std::float_t number) const noexcept;
		Vector5f operator*(const std::float_t number) const noexcept;
		Vector5f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector5f& operator++ () noexcept;		// prefix increment
		Vector5f& operator-- () noexcept;		// prefix decrement
		Vector5f  operator++ (int) noexcept;		// postfix increment
		Vector5f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5f& operator+= (const Vector5f& right) noexcept;
		Vector5f& operator-= (const Vector5f& right) noexcept;
		Vector5f& operator*= (const Vector5f& right) noexcept;
		Vector5f& operator/= (const Vector5f& right) noexcept;
		
		Vector5f& operator+= (const std::float_t number) noexcept;
		Vector5f& operator-= (const std::float_t number) noexcept;
		Vector5f& operator*= (const std::float_t number) noexcept;
		Vector5f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5f& other) const noexcept;
		bool operator<= (const Vector5f& other) const noexcept;
		bool operator>	(const Vector5f& other) const noexcept;
		bool operator>= (const Vector5f& other) const noexcept;
		
		bool operator<	(const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>	(const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5f& other) const noexcept;
		bool operator!= (const Vector5f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6f
	{
	public:
		std::float_t a, b, c, d, e, f;
	public:
		Vector6f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f) {}
		Vector6f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f) noexcept;
		// copy
		Vector6f(const Vector6f& other) noexcept;
		Vector6f& operator=(const Vector6f& other) noexcept;
		// move
		Vector6f(Vector6f&& other) noexcept;
		Vector6f& operator=(Vector6f&& other) noexcept;
		// assignment
		Vector6f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector6f operator+(const Vector6f& v) const noexcept;
		Vector6f operator-(const Vector6f& v) const noexcept;
		Vector6f operator*(const Vector6f& v) const noexcept;
		Vector6f operator/(const Vector6f& v) const noexcept;
		
		Vector6f operator+(const std::float_t number) const noexcept;
		Vector6f operator-(const std::float_t number) const noexcept;
		Vector6f operator*(const std::float_t number) const noexcept;
		Vector6f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector6f& operator++ () noexcept;		// prefix increment
		Vector6f& operator-- () noexcept;		// prefix decrement
		Vector6f  operator++ (int) noexcept;		// postfix increment
		Vector6f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6f& operator+= (const Vector6f& right) noexcept;
		Vector6f& operator-= (const Vector6f& right) noexcept;
		Vector6f& operator*= (const Vector6f& right) noexcept;
		Vector6f& operator/= (const Vector6f& right) noexcept;
		
		Vector6f& operator+= (const std::float_t number) noexcept;
		Vector6f& operator-= (const std::float_t number) noexcept;
		Vector6f& operator*= (const std::float_t number) noexcept;
		Vector6f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6f& other) const noexcept;
		bool operator<  (const Vector6f& other) const noexcept;
		bool operator>  (const Vector6f& other) const noexcept;
		bool operator>= (const Vector6f& other) const noexcept;
		
		bool operator<  (const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>  (const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6f& other) const noexcept;
		bool operator!= (const Vector6f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7f
	{
	public:
		std::float_t a, b, c, d, e, f, g;
	public:
		Vector7f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f) {}
		Vector7f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g) noexcept;
		// copy
		Vector7f(const Vector7f& other) noexcept;
		Vector7f& operator=(const Vector7f& other) noexcept;
		// move
		Vector7f(Vector7f&& other) noexcept;
		Vector7f& operator=(Vector7f&& other) noexcept;
		// assignment
		Vector7f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector7f operator+(const Vector7f& v) const noexcept;
		Vector7f operator-(const Vector7f& v) const noexcept;
		Vector7f operator*(const Vector7f& v) const noexcept;
		Vector7f operator/(const Vector7f& v) const noexcept;
		
		Vector7f operator+(const std::float_t number) const noexcept;
		Vector7f operator-(const std::float_t number) const noexcept;
		Vector7f operator*(const std::float_t number) const noexcept;
		Vector7f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector7f& operator++ () noexcept;		// prefix increment
		Vector7f& operator-- () noexcept;		// prefix decrement
		Vector7f  operator++ (int) noexcept;		// postfix increment
		Vector7f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7f& operator+= (const Vector7f& right) noexcept;
		Vector7f& operator-= (const Vector7f& right) noexcept;
		Vector7f& operator*= (const Vector7f& right) noexcept;
		Vector7f& operator/= (const Vector7f& right) noexcept;
		
		Vector7f& operator+= (const std::float_t number) noexcept;
		Vector7f& operator-= (const std::float_t number) noexcept;
		Vector7f& operator*= (const std::float_t number) noexcept;
		Vector7f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7f& other) const noexcept;
		bool operator<  (const Vector7f& other) const noexcept;
		bool operator>  (const Vector7f& other) const noexcept;
		bool operator>= (const Vector7f& other) const noexcept;
		
		bool operator<  (const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>  (const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7f& other) const noexcept;
		bool operator!= (const Vector7f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8f
	{
	public:
		std::float_t a, b, c, d, e, f, g, h;
	public:
		Vector8f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f) {}
		Vector8f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h) noexcept;
		// copy
		Vector8f(const Vector8f& other) noexcept;
		Vector8f& operator=(const Vector8f& other) noexcept;
		// move
		Vector8f(Vector8f&& other) noexcept;
		Vector8f& operator=(Vector8f&& other) noexcept;
		// assignment
		Vector8f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector8f operator+(const Vector8f& v) const noexcept;
		Vector8f operator-(const Vector8f& v) const noexcept;
		Vector8f operator*(const Vector8f& v) const noexcept;
		Vector8f operator/(const Vector8f& v) const noexcept;
		
		Vector8f operator+(const std::float_t number) const noexcept;
		Vector8f operator-(const std::float_t number) const noexcept;
		Vector8f operator*(const std::float_t number) const noexcept;
		Vector8f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector8f& operator++ () noexcept;		// prefix increment
		Vector8f& operator-- () noexcept;		// prefix decrement
		Vector8f  operator++ (int) noexcept;		// postfix increment
		Vector8f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8f& operator+= (const Vector8f& right) noexcept;
		Vector8f& operator-= (const Vector8f& right) noexcept;
		Vector8f& operator*= (const Vector8f& right) noexcept;
		Vector8f& operator/= (const Vector8f& right) noexcept;
		
		Vector8f& operator+= (const std::float_t number) noexcept;
		Vector8f& operator-= (const std::float_t number) noexcept;
		Vector8f& operator*= (const std::float_t number) noexcept;
		Vector8f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8f& other) const noexcept;
		bool operator<  (const Vector8f& other) const noexcept;
		bool operator>  (const Vector8f& other) const noexcept;
		bool operator>= (const Vector8f& other) const noexcept;
		
		bool operator<  (const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>  (const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8f& other) const noexcept;
		bool operator!= (const Vector8f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9f
	{
	public:
		std::float_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f), i(0.f) {}
		Vector9f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
			const std::float_t i) noexcept;
		// copy
		Vector9f(const Vector9f& other) noexcept;
		Vector9f& operator=(const Vector9f& other) noexcept;
		// move
		Vector9f(Vector9f&& other) noexcept;
		Vector9f& operator=(Vector9f&& other) noexcept;
		// assignment
		Vector9f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector9f operator+(const Vector9f& v) const noexcept;
		Vector9f operator-(const Vector9f& v) const noexcept;
		Vector9f operator*(const Vector9f& v) const noexcept;
		Vector9f operator/(const Vector9f& v) const noexcept;
		
		Vector9f operator+(const std::float_t number) const noexcept;
		Vector9f operator-(const std::float_t number) const noexcept;
		Vector9f operator*(const std::float_t number) const noexcept;
		Vector9f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector9f& operator++ () noexcept;		// prefix increment
		Vector9f& operator-- () noexcept;		// prefix decrement
		Vector9f  operator++ (int) noexcept;		// postfix increment
		Vector9f  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9f& operator+= (const Vector9f& right) noexcept;
		Vector9f& operator-= (const Vector9f& right) noexcept;
		Vector9f& operator*= (const Vector9f& right) noexcept;
		Vector9f& operator/= (const Vector9f& right) noexcept;
		
		Vector9f& operator+= (const std::float_t number) noexcept;
		Vector9f& operator-= (const std::float_t number) noexcept;
		Vector9f& operator*= (const std::float_t number) noexcept;
		Vector9f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9f& other) const noexcept;
		bool operator<  (const Vector9f& other) const noexcept;
		bool operator>  (const Vector9f& other) const noexcept;
		bool operator>= (const Vector9f& other) const noexcept;
		
		bool operator<  (const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>  (const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9f& other) const noexcept;
		bool operator!= (const Vector9f& other) const noexcept;
		bool operator== (const std::float_t number)  const noexcept;
		bool operator!= (const std::float_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10f
	{
	public:
		std::float_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10f() : a(0.f), b(0.f), c(0.f), d(0.f), e(0.f), f(0.f), g(0.f), h(0.f), i(0.f), j(0.f) {}
		Vector10f(const std::float_t a, const std::float_t b, const std::float_t c, const std::float_t d,
			const std::float_t e, const std::float_t f, const std::float_t g, const std::float_t h,
			const std::float_t i, const std::float_t j) noexcept;
		// copy
		Vector10f(const Vector10f& other) noexcept;
		Vector10f& operator=(const Vector10f& other) noexcept;
		// move
		Vector10f(Vector10f&& other) noexcept;
		Vector10f& operator=(Vector10f&& other) noexcept;
		// assignment
		Vector10f& operator=(const std::float_t number) noexcept;
		
		// math operator
		Vector10f operator+(const Vector10f& v) const noexcept;
		Vector10f operator-(const Vector10f& v) const noexcept;
		Vector10f operator*(const Vector10f& v) const noexcept;
		Vector10f operator/(const Vector10f& v) const noexcept;
		
		Vector10f operator+(const std::float_t number) const noexcept;
		Vector10f operator-(const std::float_t number) const noexcept;
		Vector10f operator*(const std::float_t number) const noexcept;
		Vector10f operator/(const std::float_t number) const noexcept;
		
		// increment / decrement
		Vector10f& operator++ () noexcept;		// prefix increment
		Vector10f& operator-- () noexcept;		// prefix decrement
		Vector10f  operator++ (int) noexcept;	// postfix increment
		Vector10f  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10f& operator+= (const Vector10f& right) noexcept;
		Vector10f& operator-= (const Vector10f& right) noexcept;
		Vector10f& operator*= (const Vector10f& right) noexcept;
		Vector10f& operator/= (const Vector10f& right) noexcept;
		
		Vector10f& operator+= (const std::float_t number) noexcept;
		Vector10f& operator-= (const std::float_t number) noexcept;
		Vector10f& operator*= (const std::float_t number) noexcept;
		Vector10f& operator/= (const std::float_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10f& other) const noexcept;
		bool operator<  (const Vector10f& other) const noexcept;
		bool operator>  (const Vector10f& other) const noexcept;
		bool operator>= (const Vector10f& other) const noexcept;

		bool operator<  (const std::float_t number) const noexcept;
		bool operator<= (const std::float_t number) const noexcept;
		bool operator>  (const std::float_t number) const noexcept;
		bool operator>= (const std::float_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10f& other) const noexcept;
		bool operator!= (const Vector10f& other) const noexcept;
		bool operator== (const std::float_t number)   const noexcept;
		bool operator!= (const std::float_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::float_t stnd_value = 0.f) noexcept;
		std::float_t& operator[](const std::uint8_t index) noexcept;
		std::float_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2f& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3f& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10f& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
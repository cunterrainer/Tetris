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

		Type : std::int8_t
		Bytes: 1
		Range: -128 to 127
	*/

	class Vector2i8
	{
	public:
		std::int8_t x, y;
	public:
		Vector2i8() noexcept : x(0), y(0) {}
		Vector2i8(const std::int8_t x, const std::int8_t y) noexcept;
		// copy
		Vector2i8(const Vector2i8& other) noexcept;
		Vector2i8& operator=(const Vector2i8& other) noexcept;
		// move
		Vector2i8(Vector2i8&& other) noexcept;
		Vector2i8& operator=(Vector2i8&& other) noexcept;
		// assignment
		Vector2i8& operator=(const std::int8_t number) noexcept;

		// math operator
		Vector2i8 operator+(const Vector2i8& v) const noexcept;
		Vector2i8 operator-(const Vector2i8& v) const noexcept;
		Vector2i8 operator*(const Vector2i8& v) const noexcept;
		Vector2i8 operator/(const Vector2i8& v) const noexcept;

		Vector2i8 operator+(const std::int8_t number) const noexcept;
		Vector2i8 operator-(const std::int8_t number) const noexcept;
		Vector2i8 operator*(const std::int8_t number) const noexcept;
		Vector2i8 operator/(const std::int8_t number) const noexcept;

		// increment / decrement
		Vector2i8& operator++ () noexcept;		// prefix increment
		Vector2i8& operator-- () noexcept;		// prefix decrement
		Vector2i8  operator++ (int) noexcept;		// postfix increment
		Vector2i8  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2i8& operator+= (const Vector2i8& right) noexcept;
		Vector2i8& operator-= (const Vector2i8& right) noexcept;
		Vector2i8& operator*= (const Vector2i8& right) noexcept;
		Vector2i8& operator/= (const Vector2i8& right) noexcept;

		Vector2i8& operator+= (const std::int8_t number) noexcept;
		Vector2i8& operator-= (const std::int8_t number) noexcept;
		Vector2i8& operator*= (const std::int8_t number) noexcept;
		Vector2i8& operator/= (const std::int8_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2i8& other) const noexcept;
		bool operator<= (const Vector2i8& other) const noexcept;
		bool operator>	(const Vector2i8& other) const noexcept;
		bool operator>= (const Vector2i8& other) const noexcept;

		bool operator<	(const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>	(const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2i8& other) const noexcept;
		bool operator!= (const Vector2i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3i8
	{
	public:
		std::int8_t x, y, z;
	public:
		Vector3i8() : x(0), y(0), z(0) {}
		Vector3i8(const std::int8_t x, const std::int8_t y, const std::int8_t z) noexcept;
		// copy
		Vector3i8(const Vector3i8& other) noexcept;
		Vector3i8& operator=(const Vector3i8& other) noexcept;
		// move
		Vector3i8(Vector3i8&& other) noexcept;
		Vector3i8& operator=(Vector3i8&& other) noexcept;
		// assignment
		Vector3i8& operator=(const std::int8_t number) noexcept;

		// math operator
		Vector3i8 operator+(const Vector3i8& v) const noexcept;
		Vector3i8 operator-(const Vector3i8& v) const noexcept;
		Vector3i8 operator*(const Vector3i8& v) const noexcept;
		Vector3i8 operator/(const Vector3i8& v) const noexcept;

		Vector3i8 operator+(const std::int8_t number) const noexcept;
		Vector3i8 operator-(const std::int8_t number) const noexcept;
		Vector3i8 operator*(const std::int8_t number) const noexcept;
		Vector3i8 operator/(const std::int8_t number) const noexcept;

		// increment / decrement
		Vector3i8& operator++ () noexcept;		// prefix increment
		Vector3i8& operator-- () noexcept;		// prefix decrement
		Vector3i8  operator++ (int) noexcept;		// postfix increment
		Vector3i8  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3i8& operator+= (const Vector3i8& right) noexcept;
		Vector3i8& operator-= (const Vector3i8& right) noexcept;
		Vector3i8& operator*= (const Vector3i8& right) noexcept;
		Vector3i8& operator/= (const Vector3i8& right) noexcept;

		Vector3i8& operator+= (const std::int8_t number) noexcept;
		Vector3i8& operator-= (const std::int8_t number) noexcept;
		Vector3i8& operator*= (const std::int8_t number) noexcept;
		Vector3i8& operator/= (const std::int8_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3i8& other) const noexcept;
		bool operator<= (const Vector3i8& other) const noexcept;
		bool operator>  (const Vector3i8& other) const noexcept;
		bool operator>= (const Vector3i8& other) const noexcept;
		 
		bool operator<	(const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>	(const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3i8& other) const noexcept;
		bool operator!= (const Vector3i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4i8
	{
	public:
		std::int8_t a, b, c, d;
	public:
		Vector4i8() : a(0), b(0), c(0), d(0) {}
		Vector4i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d) noexcept;
		// copy
		Vector4i8(const Vector4i8& other) noexcept;
		Vector4i8& operator=(const Vector4i8& other) noexcept;
		// move
		Vector4i8(Vector4i8&& other) noexcept;
		Vector4i8& operator=(Vector4i8&& other) noexcept;
		// assignment
		Vector4i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector4i8 operator+(const Vector4i8& v) const noexcept;
		Vector4i8 operator-(const Vector4i8& v) const noexcept;
		Vector4i8 operator*(const Vector4i8& v) const noexcept;
		Vector4i8 operator/(const Vector4i8& v) const noexcept;
		
		Vector4i8 operator+(const std::int8_t number) const noexcept;
		Vector4i8 operator-(const std::int8_t number) const noexcept;
		Vector4i8 operator*(const std::int8_t number) const noexcept;
		Vector4i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector4i8& operator++ () noexcept;		// prefix increment
		Vector4i8& operator-- () noexcept;		// prefix decrement
		Vector4i8  operator++ (int) noexcept;		// postfix increment
		Vector4i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4i8& operator+= (const Vector4i8& right) noexcept;
		Vector4i8& operator-= (const Vector4i8& right) noexcept;
		Vector4i8& operator*= (const Vector4i8& right) noexcept;
		Vector4i8& operator/= (const Vector4i8& right) noexcept;
		
		Vector4i8& operator+= (const std::int8_t number) noexcept;
		Vector4i8& operator-= (const std::int8_t number) noexcept;
		Vector4i8& operator*= (const std::int8_t number) noexcept;
		Vector4i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4i8& other) const noexcept;
		bool operator<= (const Vector4i8& other) const noexcept;
		bool operator>	(const Vector4i8& other) const noexcept;
		bool operator>= (const Vector4i8& other) const noexcept;
		
		bool operator<	(const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>	(const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4i8& other) const noexcept;
		bool operator!= (const Vector4i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5i8
	{
	public:
		std::int8_t a, b, c, d, e;
	public:
		Vector5i8() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d, const std::int8_t e) noexcept;
		// copy
		Vector5i8(const Vector5i8& other) noexcept;
		Vector5i8& operator=(const Vector5i8& other) noexcept;
		// move
		Vector5i8(Vector5i8&& other) noexcept;
		Vector5i8& operator=(Vector5i8&& other) noexcept;
		// assignment
		Vector5i8& operator=(const std::int8_t number) noexcept;
		 
		// math operator
		Vector5i8 operator+(const Vector5i8& v) const noexcept;
		Vector5i8 operator-(const Vector5i8& v) const noexcept;
		Vector5i8 operator*(const Vector5i8& v) const noexcept;
		Vector5i8 operator/(const Vector5i8& v) const noexcept;
		
		Vector5i8 operator+(const std::int8_t number) const noexcept;
		Vector5i8 operator-(const std::int8_t number) const noexcept;
		Vector5i8 operator*(const std::int8_t number) const noexcept;
		Vector5i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector5i8& operator++ () noexcept;		// prefix increment
		Vector5i8& operator-- () noexcept;		// prefix decrement
		Vector5i8  operator++ (int) noexcept;		// postfix increment
		Vector5i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5i8& operator+= (const Vector5i8& right) noexcept;
		Vector5i8& operator-= (const Vector5i8& right) noexcept;
		Vector5i8& operator*= (const Vector5i8& right) noexcept;
		Vector5i8& operator/= (const Vector5i8& right) noexcept;
		
		Vector5i8& operator+= (const std::int8_t number) noexcept;
		Vector5i8& operator-= (const std::int8_t number) noexcept;
		Vector5i8& operator*= (const std::int8_t number) noexcept;
		Vector5i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5i8& other) const noexcept;
		bool operator<= (const Vector5i8& other) const noexcept;
		bool operator>	(const Vector5i8& other) const noexcept;
		bool operator>= (const Vector5i8& other) const noexcept;
		
		bool operator<	(const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>	(const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5i8& other) const noexcept;
		bool operator!= (const Vector5i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6i8
	{
	public:
		std::int8_t a, b, c, d, e, f;
	public:
		Vector6i8() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
			const std::int8_t e, const std::int8_t f) noexcept;
		// copy
		Vector6i8(const Vector6i8& other) noexcept;
		Vector6i8& operator=(const Vector6i8& other) noexcept;
		// move
		Vector6i8(Vector6i8&& other) noexcept;
		Vector6i8& operator=(Vector6i8&& other) noexcept;
		// assignment
		Vector6i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector6i8 operator+(const Vector6i8& v) const noexcept;
		Vector6i8 operator-(const Vector6i8& v) const noexcept;
		Vector6i8 operator*(const Vector6i8& v) const noexcept;
		Vector6i8 operator/(const Vector6i8& v) const noexcept;
		
		Vector6i8 operator+(const std::int8_t number) const noexcept;
		Vector6i8 operator-(const std::int8_t number) const noexcept;
		Vector6i8 operator*(const std::int8_t number) const noexcept;
		Vector6i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector6i8& operator++ () noexcept;		// prefix increment
		Vector6i8& operator-- () noexcept;		// prefix decrement
		Vector6i8  operator++ (int) noexcept;		// postfix increment
		Vector6i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6i8& operator+= (const Vector6i8& right) noexcept;
		Vector6i8& operator-= (const Vector6i8& right) noexcept;
		Vector6i8& operator*= (const Vector6i8& right) noexcept;
		Vector6i8& operator/= (const Vector6i8& right) noexcept;
		
		Vector6i8& operator+= (const std::int8_t number) noexcept;
		Vector6i8& operator-= (const std::int8_t number) noexcept;
		Vector6i8& operator*= (const std::int8_t number) noexcept;
		Vector6i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6i8& other) const noexcept;
		bool operator<  (const Vector6i8& other) const noexcept;
		bool operator>  (const Vector6i8& other) const noexcept;
		bool operator>= (const Vector6i8& other) const noexcept;
		
		bool operator<  (const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>  (const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6i8& other) const noexcept;
		bool operator!= (const Vector6i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7i8
	{
	public:
		std::int8_t a, b, c, d, e, f, g;
	public:
		Vector7i8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
			const std::int8_t e, const std::int8_t f, const std::int8_t g) noexcept;
		// copy
		Vector7i8(const Vector7i8& other) noexcept;
		Vector7i8& operator=(const Vector7i8& other) noexcept;
		// move
		Vector7i8(Vector7i8&& other) noexcept;
		Vector7i8& operator=(Vector7i8&& other) noexcept;
		// assignment
		Vector7i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector7i8 operator+(const Vector7i8& v) const noexcept;
		Vector7i8 operator-(const Vector7i8& v) const noexcept;
		Vector7i8 operator*(const Vector7i8& v) const noexcept;
		Vector7i8 operator/(const Vector7i8& v) const noexcept;
		
		Vector7i8 operator+(const std::int8_t number) const noexcept;
		Vector7i8 operator-(const std::int8_t number) const noexcept;
		Vector7i8 operator*(const std::int8_t number) const noexcept;
		Vector7i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector7i8& operator++ () noexcept;		// prefix increment
		Vector7i8& operator-- () noexcept;		// prefix decrement
		Vector7i8  operator++ (int) noexcept;		// postfix increment
		Vector7i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7i8& operator+= (const Vector7i8& right) noexcept;
		Vector7i8& operator-= (const Vector7i8& right) noexcept;
		Vector7i8& operator*= (const Vector7i8& right) noexcept;
		Vector7i8& operator/= (const Vector7i8& right) noexcept;
		
		Vector7i8& operator+= (const std::int8_t number) noexcept;
		Vector7i8& operator-= (const std::int8_t number) noexcept;
		Vector7i8& operator*= (const std::int8_t number) noexcept;
		Vector7i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7i8& other) const noexcept;
		bool operator<  (const Vector7i8& other) const noexcept;
		bool operator>  (const Vector7i8& other) const noexcept;
		bool operator>= (const Vector7i8& other) const noexcept;
		
		bool operator<  (const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>  (const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7i8& other) const noexcept;
		bool operator!= (const Vector7i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8i8
	{
	public:
		std::int8_t a, b, c, d, e, f, g, h;
	public:
		Vector8i8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
			const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h) noexcept;
		// copy
		Vector8i8(const Vector8i8& other) noexcept;
		Vector8i8& operator=(const Vector8i8& other) noexcept;
		// move
		Vector8i8(Vector8i8&& other) noexcept;
		Vector8i8& operator=(Vector8i8&& other) noexcept;
		// assignment
		Vector8i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector8i8 operator+(const Vector8i8& v) const noexcept;
		Vector8i8 operator-(const Vector8i8& v) const noexcept;
		Vector8i8 operator*(const Vector8i8& v) const noexcept;
		Vector8i8 operator/(const Vector8i8& v) const noexcept;
		
		Vector8i8 operator+(const std::int8_t number) const noexcept;
		Vector8i8 operator-(const std::int8_t number) const noexcept;
		Vector8i8 operator*(const std::int8_t number) const noexcept;
		Vector8i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector8i8& operator++ () noexcept;		// prefix increment
		Vector8i8& operator-- () noexcept;		// prefix decrement
		Vector8i8  operator++ (int) noexcept;		// postfix increment
		Vector8i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8i8& operator+= (const Vector8i8& right) noexcept;
		Vector8i8& operator-= (const Vector8i8& right) noexcept;
		Vector8i8& operator*= (const Vector8i8& right) noexcept;
		Vector8i8& operator/= (const Vector8i8& right) noexcept;
		
		Vector8i8& operator+= (const std::int8_t number) noexcept;
		Vector8i8& operator-= (const std::int8_t number) noexcept;
		Vector8i8& operator*= (const std::int8_t number) noexcept;
		Vector8i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8i8& other) const noexcept;
		bool operator<  (const Vector8i8& other) const noexcept;
		bool operator>  (const Vector8i8& other) const noexcept;
		bool operator>= (const Vector8i8& other) const noexcept;
		
		bool operator<  (const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>  (const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8i8& other) const noexcept;
		bool operator!= (const Vector8i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9i8
	{
	public:
		std::int8_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9i8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
			const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h,
			const std::int8_t i) noexcept;
		// copy
		Vector9i8(const Vector9i8& other) noexcept;
		Vector9i8& operator=(const Vector9i8& other) noexcept;
		// move
		Vector9i8(Vector9i8&& other) noexcept;
		Vector9i8& operator=(Vector9i8&& other) noexcept;
		// assignment
		Vector9i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector9i8 operator+(const Vector9i8& v) const noexcept;
		Vector9i8 operator-(const Vector9i8& v) const noexcept;
		Vector9i8 operator*(const Vector9i8& v) const noexcept;
		Vector9i8 operator/(const Vector9i8& v) const noexcept;
		
		Vector9i8 operator+(const std::int8_t number) const noexcept;
		Vector9i8 operator-(const std::int8_t number) const noexcept;
		Vector9i8 operator*(const std::int8_t number) const noexcept;
		Vector9i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector9i8& operator++ () noexcept;		// prefix increment
		Vector9i8& operator-- () noexcept;		// prefix decrement
		Vector9i8  operator++ (int) noexcept;		// postfix increment
		Vector9i8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9i8& operator+= (const Vector9i8& right) noexcept;
		Vector9i8& operator-= (const Vector9i8& right) noexcept;
		Vector9i8& operator*= (const Vector9i8& right) noexcept;
		Vector9i8& operator/= (const Vector9i8& right) noexcept;
		
		Vector9i8& operator+= (const std::int8_t number) noexcept;
		Vector9i8& operator-= (const std::int8_t number) noexcept;
		Vector9i8& operator*= (const std::int8_t number) noexcept;
		Vector9i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9i8& other) const noexcept;
		bool operator<  (const Vector9i8& other) const noexcept;
		bool operator>  (const Vector9i8& other) const noexcept;
		bool operator>= (const Vector9i8& other) const noexcept;
		
		bool operator<  (const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>  (const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9i8& other) const noexcept;
		bool operator!= (const Vector9i8& other) const noexcept;
		bool operator== (const std::int8_t number)  const noexcept;
		bool operator!= (const std::int8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10i8
	{
	public:
		std::int8_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10i8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10i8(const std::int8_t a, const std::int8_t b, const std::int8_t c, const std::int8_t d,
			const std::int8_t e, const std::int8_t f, const std::int8_t g, const std::int8_t h,
			const std::int8_t i, const std::int8_t j) noexcept;
		// copy
		Vector10i8(const Vector10i8& other) noexcept;
		Vector10i8& operator=(const Vector10i8& other) noexcept;
		// move
		Vector10i8(Vector10i8&& other) noexcept;
		Vector10i8& operator=(Vector10i8&& other) noexcept;
		// assignment
		Vector10i8& operator=(const std::int8_t number) noexcept;
		
		// math operator
		Vector10i8 operator+(const Vector10i8& v) const noexcept;
		Vector10i8 operator-(const Vector10i8& v) const noexcept;
		Vector10i8 operator*(const Vector10i8& v) const noexcept;
		Vector10i8 operator/(const Vector10i8& v) const noexcept;
		
		Vector10i8 operator+(const std::int8_t number) const noexcept;
		Vector10i8 operator-(const std::int8_t number) const noexcept;
		Vector10i8 operator*(const std::int8_t number) const noexcept;
		Vector10i8 operator/(const std::int8_t number) const noexcept;
		
		// increment / decrement
		Vector10i8& operator++ () noexcept;		// prefix increment
		Vector10i8& operator-- () noexcept;		// prefix decrement
		Vector10i8  operator++ (int) noexcept;	// postfix increment
		Vector10i8  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10i8& operator+= (const Vector10i8& right) noexcept;
		Vector10i8& operator-= (const Vector10i8& right) noexcept;
		Vector10i8& operator*= (const Vector10i8& right) noexcept;
		Vector10i8& operator/= (const Vector10i8& right) noexcept;
		
		Vector10i8& operator+= (const std::int8_t number) noexcept;
		Vector10i8& operator-= (const std::int8_t number) noexcept;
		Vector10i8& operator*= (const std::int8_t number) noexcept;
		Vector10i8& operator/= (const std::int8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10i8& other) const noexcept;
		bool operator<  (const Vector10i8& other) const noexcept;
		bool operator>  (const Vector10i8& other) const noexcept;
		bool operator>= (const Vector10i8& other) const noexcept;

		bool operator<  (const std::int8_t number) const noexcept;
		bool operator<= (const std::int8_t number) const noexcept;
		bool operator>  (const std::int8_t number) const noexcept;
		bool operator>= (const std::int8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10i8& other) const noexcept;
		bool operator!= (const Vector10i8& other) const noexcept;
		bool operator== (const std::int8_t number)   const noexcept;
		bool operator!= (const std::int8_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int8_t stnd_value = 0) noexcept;
		std::int8_t& operator[](const std::uint8_t index) noexcept;
		std::int8_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2i8& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3i8& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y) << " | z: " << static_cast<std::int32_t>(v.z);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10i8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i) << " | j: " << static_cast<std::int32_t>(v.j);
		return os;
	}
	// End
}
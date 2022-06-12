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

		Type : std::uint8_t
		Bytes: 1
		Range: 0 to 255
	*/

	class Vector2ui8
	{
	public:
		std::uint8_t x, y;
	public:
		Vector2ui8() noexcept : x(0), y(0) {}
		Vector2ui8(const std::uint8_t x, const std::uint8_t y) noexcept;
		// copy
		Vector2ui8(const Vector2ui8& other) noexcept;
		Vector2ui8& operator=(const Vector2ui8& other) noexcept;
		// move
		Vector2ui8(Vector2ui8&& other) noexcept;
		Vector2ui8& operator=(Vector2ui8&& other) noexcept;
		// assignment
		Vector2ui8& operator=(const std::uint8_t number) noexcept;

		// math operator
		Vector2ui8 operator+(const Vector2ui8& v) const noexcept;
		Vector2ui8 operator-(const Vector2ui8& v) const noexcept;
		Vector2ui8 operator*(const Vector2ui8& v) const noexcept;
		Vector2ui8 operator/(const Vector2ui8& v) const noexcept;

		Vector2ui8 operator+(const std::uint8_t number) const noexcept;
		Vector2ui8 operator-(const std::uint8_t number) const noexcept;
		Vector2ui8 operator*(const std::uint8_t number) const noexcept;
		Vector2ui8 operator/(const std::uint8_t number) const noexcept;

		// increment / decrement
		Vector2ui8& operator++ () noexcept;		// prefix increment
		Vector2ui8& operator-- () noexcept;		// prefix decrement
		Vector2ui8  operator++ (int) noexcept;		// postfix increment
		Vector2ui8  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2ui8& operator+= (const Vector2ui8& right) noexcept;
		Vector2ui8& operator-= (const Vector2ui8& right) noexcept;
		Vector2ui8& operator*= (const Vector2ui8& right) noexcept;
		Vector2ui8& operator/= (const Vector2ui8& right) noexcept;

		Vector2ui8& operator+= (const std::uint8_t number) noexcept;
		Vector2ui8& operator-= (const std::uint8_t number) noexcept;
		Vector2ui8& operator*= (const std::uint8_t number) noexcept;
		Vector2ui8& operator/= (const std::uint8_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2ui8& other) const noexcept;
		bool operator<= (const Vector2ui8& other) const noexcept;
		bool operator>	(const Vector2ui8& other) const noexcept;
		bool operator>= (const Vector2ui8& other) const noexcept;

		bool operator<	(const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>	(const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2ui8& other) const noexcept;
		bool operator!= (const Vector2ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3ui8
	{
	public:
		std::uint8_t x, y, z;
	public:
		Vector3ui8() : x(0), y(0), z(0) {}
		Vector3ui8(const std::uint8_t x, const std::uint8_t y, const std::uint8_t z) noexcept;
		// copy
		Vector3ui8(const Vector3ui8& other) noexcept;
		Vector3ui8& operator=(const Vector3ui8& other) noexcept;
		// move
		Vector3ui8(Vector3ui8&& other) noexcept;
		Vector3ui8& operator=(Vector3ui8&& other) noexcept;
		// assignment
		Vector3ui8& operator=(const std::uint8_t number) noexcept;

		// math operator
		Vector3ui8 operator+(const Vector3ui8& v) const noexcept;
		Vector3ui8 operator-(const Vector3ui8& v) const noexcept;
		Vector3ui8 operator*(const Vector3ui8& v) const noexcept;
		Vector3ui8 operator/(const Vector3ui8& v) const noexcept;

		Vector3ui8 operator+(const std::uint8_t number) const noexcept;
		Vector3ui8 operator-(const std::uint8_t number) const noexcept;
		Vector3ui8 operator*(const std::uint8_t number) const noexcept;
		Vector3ui8 operator/(const std::uint8_t number) const noexcept;

		// increment / decrement
		Vector3ui8& operator++ () noexcept;		// prefix increment
		Vector3ui8& operator-- () noexcept;		// prefix decrement
		Vector3ui8  operator++ (int) noexcept;		// postfix increment
		Vector3ui8  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3ui8& operator+= (const Vector3ui8& right) noexcept;
		Vector3ui8& operator-= (const Vector3ui8& right) noexcept;
		Vector3ui8& operator*= (const Vector3ui8& right) noexcept;
		Vector3ui8& operator/= (const Vector3ui8& right) noexcept;

		Vector3ui8& operator+= (const std::uint8_t number) noexcept;
		Vector3ui8& operator-= (const std::uint8_t number) noexcept;
		Vector3ui8& operator*= (const std::uint8_t number) noexcept;
		Vector3ui8& operator/= (const std::uint8_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3ui8& other) const noexcept;
		bool operator<= (const Vector3ui8& other) const noexcept;
		bool operator>  (const Vector3ui8& other) const noexcept;
		bool operator>= (const Vector3ui8& other) const noexcept;
		 
		bool operator<	(const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>	(const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3ui8& other) const noexcept;
		bool operator!= (const Vector3ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4ui8
	{
	public:
		std::uint8_t a, b, c, d;
	public:
		Vector4ui8() : a(0), b(0), c(0), d(0) {}
		Vector4ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d) noexcept;
		// copy
		Vector4ui8(const Vector4ui8& other) noexcept;
		Vector4ui8& operator=(const Vector4ui8& other) noexcept;
		// move
		Vector4ui8(Vector4ui8&& other) noexcept;
		Vector4ui8& operator=(Vector4ui8&& other) noexcept;
		// assignment
		Vector4ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector4ui8 operator+(const Vector4ui8& v) const noexcept;
		Vector4ui8 operator-(const Vector4ui8& v) const noexcept;
		Vector4ui8 operator*(const Vector4ui8& v) const noexcept;
		Vector4ui8 operator/(const Vector4ui8& v) const noexcept;
		
		Vector4ui8 operator+(const std::uint8_t number) const noexcept;
		Vector4ui8 operator-(const std::uint8_t number) const noexcept;
		Vector4ui8 operator*(const std::uint8_t number) const noexcept;
		Vector4ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector4ui8& operator++ () noexcept;		// prefix increment
		Vector4ui8& operator-- () noexcept;		// prefix decrement
		Vector4ui8  operator++ (int) noexcept;		// postfix increment
		Vector4ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4ui8& operator+= (const Vector4ui8& right) noexcept;
		Vector4ui8& operator-= (const Vector4ui8& right) noexcept;
		Vector4ui8& operator*= (const Vector4ui8& right) noexcept;
		Vector4ui8& operator/= (const Vector4ui8& right) noexcept;
		
		Vector4ui8& operator+= (const std::uint8_t number) noexcept;
		Vector4ui8& operator-= (const std::uint8_t number) noexcept;
		Vector4ui8& operator*= (const std::uint8_t number) noexcept;
		Vector4ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4ui8& other) const noexcept;
		bool operator<= (const Vector4ui8& other) const noexcept;
		bool operator>	(const Vector4ui8& other) const noexcept;
		bool operator>= (const Vector4ui8& other) const noexcept;
		
		bool operator<	(const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>	(const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4ui8& other) const noexcept;
		bool operator!= (const Vector4ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5ui8
	{
	public:
		std::uint8_t a, b, c, d, e;
	public:
		Vector5ui8() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d, const std::uint8_t e) noexcept;
		// copy
		Vector5ui8(const Vector5ui8& other) noexcept;
		Vector5ui8& operator=(const Vector5ui8& other) noexcept;
		// move
		Vector5ui8(Vector5ui8&& other) noexcept;
		Vector5ui8& operator=(Vector5ui8&& other) noexcept;
		// assignment
		Vector5ui8& operator=(const std::uint8_t number) noexcept;
		 
		// math operator
		Vector5ui8 operator+(const Vector5ui8& v) const noexcept;
		Vector5ui8 operator-(const Vector5ui8& v) const noexcept;
		Vector5ui8 operator*(const Vector5ui8& v) const noexcept;
		Vector5ui8 operator/(const Vector5ui8& v) const noexcept;
		
		Vector5ui8 operator+(const std::uint8_t number) const noexcept;
		Vector5ui8 operator-(const std::uint8_t number) const noexcept;
		Vector5ui8 operator*(const std::uint8_t number) const noexcept;
		Vector5ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector5ui8& operator++ () noexcept;		// prefix increment
		Vector5ui8& operator-- () noexcept;		// prefix decrement
		Vector5ui8  operator++ (int) noexcept;		// postfix increment
		Vector5ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5ui8& operator+= (const Vector5ui8& right) noexcept;
		Vector5ui8& operator-= (const Vector5ui8& right) noexcept;
		Vector5ui8& operator*= (const Vector5ui8& right) noexcept;
		Vector5ui8& operator/= (const Vector5ui8& right) noexcept;
		
		Vector5ui8& operator+= (const std::uint8_t number) noexcept;
		Vector5ui8& operator-= (const std::uint8_t number) noexcept;
		Vector5ui8& operator*= (const std::uint8_t number) noexcept;
		Vector5ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5ui8& other) const noexcept;
		bool operator<= (const Vector5ui8& other) const noexcept;
		bool operator>	(const Vector5ui8& other) const noexcept;
		bool operator>= (const Vector5ui8& other) const noexcept;
		
		bool operator<	(const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>	(const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5ui8& other) const noexcept;
		bool operator!= (const Vector5ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6ui8
	{
	public:
		std::uint8_t a, b, c, d, e, f;
	public:
		Vector6ui8() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d,
			const std::uint8_t e, const std::uint8_t f) noexcept;
		// copy
		Vector6ui8(const Vector6ui8& other) noexcept;
		Vector6ui8& operator=(const Vector6ui8& other) noexcept;
		// move
		Vector6ui8(Vector6ui8&& other) noexcept;
		Vector6ui8& operator=(Vector6ui8&& other) noexcept;
		// assignment
		Vector6ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector6ui8 operator+(const Vector6ui8& v) const noexcept;
		Vector6ui8 operator-(const Vector6ui8& v) const noexcept;
		Vector6ui8 operator*(const Vector6ui8& v) const noexcept;
		Vector6ui8 operator/(const Vector6ui8& v) const noexcept;
		
		Vector6ui8 operator+(const std::uint8_t number) const noexcept;
		Vector6ui8 operator-(const std::uint8_t number) const noexcept;
		Vector6ui8 operator*(const std::uint8_t number) const noexcept;
		Vector6ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector6ui8& operator++ () noexcept;		// prefix increment
		Vector6ui8& operator-- () noexcept;		// prefix decrement
		Vector6ui8  operator++ (int) noexcept;		// postfix increment
		Vector6ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6ui8& operator+= (const Vector6ui8& right) noexcept;
		Vector6ui8& operator-= (const Vector6ui8& right) noexcept;
		Vector6ui8& operator*= (const Vector6ui8& right) noexcept;
		Vector6ui8& operator/= (const Vector6ui8& right) noexcept;
		
		Vector6ui8& operator+= (const std::uint8_t number) noexcept;
		Vector6ui8& operator-= (const std::uint8_t number) noexcept;
		Vector6ui8& operator*= (const std::uint8_t number) noexcept;
		Vector6ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6ui8& other) const noexcept;
		bool operator<  (const Vector6ui8& other) const noexcept;
		bool operator>  (const Vector6ui8& other) const noexcept;
		bool operator>= (const Vector6ui8& other) const noexcept;
		
		bool operator<  (const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>  (const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6ui8& other) const noexcept;
		bool operator!= (const Vector6ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7ui8
	{
	public:
		std::uint8_t a, b, c, d, e, f, g;
	public:
		Vector7ui8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d,
			const std::uint8_t e, const std::uint8_t f, const std::uint8_t g) noexcept;
		// copy
		Vector7ui8(const Vector7ui8& other) noexcept;
		Vector7ui8& operator=(const Vector7ui8& other) noexcept;
		// move
		Vector7ui8(Vector7ui8&& other) noexcept;
		Vector7ui8& operator=(Vector7ui8&& other) noexcept;
		// assignment
		Vector7ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector7ui8 operator+(const Vector7ui8& v) const noexcept;
		Vector7ui8 operator-(const Vector7ui8& v) const noexcept;
		Vector7ui8 operator*(const Vector7ui8& v) const noexcept;
		Vector7ui8 operator/(const Vector7ui8& v) const noexcept;
		
		Vector7ui8 operator+(const std::uint8_t number) const noexcept;
		Vector7ui8 operator-(const std::uint8_t number) const noexcept;
		Vector7ui8 operator*(const std::uint8_t number) const noexcept;
		Vector7ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector7ui8& operator++ () noexcept;		// prefix increment
		Vector7ui8& operator-- () noexcept;		// prefix decrement
		Vector7ui8  operator++ (int) noexcept;		// postfix increment
		Vector7ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7ui8& operator+= (const Vector7ui8& right) noexcept;
		Vector7ui8& operator-= (const Vector7ui8& right) noexcept;
		Vector7ui8& operator*= (const Vector7ui8& right) noexcept;
		Vector7ui8& operator/= (const Vector7ui8& right) noexcept;
		
		Vector7ui8& operator+= (const std::uint8_t number) noexcept;
		Vector7ui8& operator-= (const std::uint8_t number) noexcept;
		Vector7ui8& operator*= (const std::uint8_t number) noexcept;
		Vector7ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7ui8& other) const noexcept;
		bool operator<  (const Vector7ui8& other) const noexcept;
		bool operator>  (const Vector7ui8& other) const noexcept;
		bool operator>= (const Vector7ui8& other) const noexcept;
		
		bool operator<  (const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>  (const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7ui8& other) const noexcept;
		bool operator!= (const Vector7ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8ui8
	{
	public:
		std::uint8_t a, b, c, d, e, f, g, h;
	public:
		Vector8ui8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d,
			const std::uint8_t e, const std::uint8_t f, const std::uint8_t g, const std::uint8_t h) noexcept;
		// copy
		Vector8ui8(const Vector8ui8& other) noexcept;
		Vector8ui8& operator=(const Vector8ui8& other) noexcept;
		// move
		Vector8ui8(Vector8ui8&& other) noexcept;
		Vector8ui8& operator=(Vector8ui8&& other) noexcept;
		// assignment
		Vector8ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector8ui8 operator+(const Vector8ui8& v) const noexcept;
		Vector8ui8 operator-(const Vector8ui8& v) const noexcept;
		Vector8ui8 operator*(const Vector8ui8& v) const noexcept;
		Vector8ui8 operator/(const Vector8ui8& v) const noexcept;
		
		Vector8ui8 operator+(const std::uint8_t number) const noexcept;
		Vector8ui8 operator-(const std::uint8_t number) const noexcept;
		Vector8ui8 operator*(const std::uint8_t number) const noexcept;
		Vector8ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector8ui8& operator++ () noexcept;		// prefix increment
		Vector8ui8& operator-- () noexcept;		// prefix decrement
		Vector8ui8  operator++ (int) noexcept;		// postfix increment
		Vector8ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8ui8& operator+= (const Vector8ui8& right) noexcept;
		Vector8ui8& operator-= (const Vector8ui8& right) noexcept;
		Vector8ui8& operator*= (const Vector8ui8& right) noexcept;
		Vector8ui8& operator/= (const Vector8ui8& right) noexcept;
		
		Vector8ui8& operator+= (const std::uint8_t number) noexcept;
		Vector8ui8& operator-= (const std::uint8_t number) noexcept;
		Vector8ui8& operator*= (const std::uint8_t number) noexcept;
		Vector8ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8ui8& other) const noexcept;
		bool operator<  (const Vector8ui8& other) const noexcept;
		bool operator>  (const Vector8ui8& other) const noexcept;
		bool operator>= (const Vector8ui8& other) const noexcept;
		
		bool operator<  (const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>  (const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8ui8& other) const noexcept;
		bool operator!= (const Vector8ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9ui8
	{
	public:
		std::uint8_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9ui8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d,
			const std::uint8_t e, const std::uint8_t f, const std::uint8_t g, const std::uint8_t h,
			const std::uint8_t i) noexcept;
		// copy
		Vector9ui8(const Vector9ui8& other) noexcept;
		Vector9ui8& operator=(const Vector9ui8& other) noexcept;
		// move
		Vector9ui8(Vector9ui8&& other) noexcept;
		Vector9ui8& operator=(Vector9ui8&& other) noexcept;
		// assignment
		Vector9ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector9ui8 operator+(const Vector9ui8& v) const noexcept;
		Vector9ui8 operator-(const Vector9ui8& v) const noexcept;
		Vector9ui8 operator*(const Vector9ui8& v) const noexcept;
		Vector9ui8 operator/(const Vector9ui8& v) const noexcept;
		
		Vector9ui8 operator+(const std::uint8_t number) const noexcept;
		Vector9ui8 operator-(const std::uint8_t number) const noexcept;
		Vector9ui8 operator*(const std::uint8_t number) const noexcept;
		Vector9ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector9ui8& operator++ () noexcept;		// prefix increment
		Vector9ui8& operator-- () noexcept;		// prefix decrement
		Vector9ui8  operator++ (int) noexcept;		// postfix increment
		Vector9ui8  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9ui8& operator+= (const Vector9ui8& right) noexcept;
		Vector9ui8& operator-= (const Vector9ui8& right) noexcept;
		Vector9ui8& operator*= (const Vector9ui8& right) noexcept;
		Vector9ui8& operator/= (const Vector9ui8& right) noexcept;
		
		Vector9ui8& operator+= (const std::uint8_t number) noexcept;
		Vector9ui8& operator-= (const std::uint8_t number) noexcept;
		Vector9ui8& operator*= (const std::uint8_t number) noexcept;
		Vector9ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9ui8& other) const noexcept;
		bool operator<  (const Vector9ui8& other) const noexcept;
		bool operator>  (const Vector9ui8& other) const noexcept;
		bool operator>= (const Vector9ui8& other) const noexcept;
		
		bool operator<  (const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>  (const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9ui8& other) const noexcept;
		bool operator!= (const Vector9ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)  const noexcept;
		bool operator!= (const std::uint8_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10ui8
	{
	public:
		std::uint8_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10ui8() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10ui8(const std::uint8_t a, const std::uint8_t b, const std::uint8_t c, const std::uint8_t d,
			const std::uint8_t e, const std::uint8_t f, const std::uint8_t g, const std::uint8_t h,
			const std::uint8_t i, const std::uint8_t j) noexcept;
		// copy
		Vector10ui8(const Vector10ui8& other) noexcept;
		Vector10ui8& operator=(const Vector10ui8& other) noexcept;
		// move
		Vector10ui8(Vector10ui8&& other) noexcept;
		Vector10ui8& operator=(Vector10ui8&& other) noexcept;
		// assignment
		Vector10ui8& operator=(const std::uint8_t number) noexcept;
		
		// math operator
		Vector10ui8 operator+(const Vector10ui8& v) const noexcept;
		Vector10ui8 operator-(const Vector10ui8& v) const noexcept;
		Vector10ui8 operator*(const Vector10ui8& v) const noexcept;
		Vector10ui8 operator/(const Vector10ui8& v) const noexcept;
		
		Vector10ui8 operator+(const std::uint8_t number) const noexcept;
		Vector10ui8 operator-(const std::uint8_t number) const noexcept;
		Vector10ui8 operator*(const std::uint8_t number) const noexcept;
		Vector10ui8 operator/(const std::uint8_t number) const noexcept;
		
		// increment / decrement
		Vector10ui8& operator++ () noexcept;		// prefix increment
		Vector10ui8& operator-- () noexcept;		// prefix decrement
		Vector10ui8  operator++ (int) noexcept;	// postfix increment
		Vector10ui8  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10ui8& operator+= (const Vector10ui8& right) noexcept;
		Vector10ui8& operator-= (const Vector10ui8& right) noexcept;
		Vector10ui8& operator*= (const Vector10ui8& right) noexcept;
		Vector10ui8& operator/= (const Vector10ui8& right) noexcept;
		
		Vector10ui8& operator+= (const std::uint8_t number) noexcept;
		Vector10ui8& operator-= (const std::uint8_t number) noexcept;
		Vector10ui8& operator*= (const std::uint8_t number) noexcept;
		Vector10ui8& operator/= (const std::uint8_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10ui8& other) const noexcept;
		bool operator<  (const Vector10ui8& other) const noexcept;
		bool operator>  (const Vector10ui8& other) const noexcept;
		bool operator>= (const Vector10ui8& other) const noexcept;

		bool operator<  (const std::uint8_t number) const noexcept;
		bool operator<= (const std::uint8_t number) const noexcept;
		bool operator>  (const std::uint8_t number) const noexcept;
		bool operator>= (const std::uint8_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10ui8& other) const noexcept;
		bool operator!= (const Vector10ui8& other) const noexcept;
		bool operator== (const std::uint8_t number)   const noexcept;
		bool operator!= (const std::uint8_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint8_t stnd_value = 0) noexcept;
		std::uint8_t& operator[](const std::uint8_t index) noexcept;
		std::uint8_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui8& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui8& v) noexcept
	{
		os << "x: " << static_cast<std::int32_t>(v.x) << " | y: " << static_cast<std::int32_t>(v.y) << " | z: " << static_cast<std::int32_t>(v.z);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i);
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui8& v) noexcept
	{
		os << "a: " << static_cast<std::int32_t>(v.a) << " | b: " << static_cast<std::int32_t>(v.b) << " | c: " << static_cast<std::int32_t>(v.c) << " | d: " << static_cast<std::int32_t>(v.d) << " | e: " << static_cast<std::int32_t>(v.e) << " | f: " << static_cast<std::int32_t>(v.f) << " | g: " << static_cast<std::int32_t>(v.g) << " | h: " << static_cast<std::int32_t>(v.h) << " | i: " << static_cast<std::int32_t>(v.i) << " | j: " << static_cast<std::int32_t>(v.j);
		return os;
	}
	// End
}
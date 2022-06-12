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

		Type : std::uint16_t
		Bytes: 2
		Range: 0 to 65.535
	*/

	class Vector2ui16
	{
	public:
		std::uint16_t x, y;
	public:
		Vector2ui16() noexcept : x(0), y(0) {}
		Vector2ui16(const std::uint16_t x, const std::uint16_t y) noexcept;
		// copy
		Vector2ui16(const Vector2ui16& other) noexcept;
		Vector2ui16& operator=(const Vector2ui16& other) noexcept;
		// move
		Vector2ui16(Vector2ui16&& other) noexcept;
		Vector2ui16& operator=(Vector2ui16&& other) noexcept;
		// assignment
		Vector2ui16& operator=(const std::uint16_t number) noexcept;

		// math operator
		Vector2ui16 operator+(const Vector2ui16& v) const noexcept;
		Vector2ui16 operator-(const Vector2ui16& v) const noexcept;
		Vector2ui16 operator*(const Vector2ui16& v) const noexcept;
		Vector2ui16 operator/(const Vector2ui16& v) const noexcept;

		Vector2ui16 operator+(const std::uint16_t number) const noexcept;
		Vector2ui16 operator-(const std::uint16_t number) const noexcept;
		Vector2ui16 operator*(const std::uint16_t number) const noexcept;
		Vector2ui16 operator/(const std::uint16_t number) const noexcept;

		// increment / decrement
		Vector2ui16& operator++ () noexcept;		// prefix increment
		Vector2ui16& operator-- () noexcept;		// prefix decrement
		Vector2ui16  operator++ (int) noexcept;		// postfix increment
		Vector2ui16  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2ui16& operator+= (const Vector2ui16& right) noexcept;
		Vector2ui16& operator-= (const Vector2ui16& right) noexcept;
		Vector2ui16& operator*= (const Vector2ui16& right) noexcept;
		Vector2ui16& operator/= (const Vector2ui16& right) noexcept;

		Vector2ui16& operator+= (const std::uint16_t number) noexcept;
		Vector2ui16& operator-= (const std::uint16_t number) noexcept;
		Vector2ui16& operator*= (const std::uint16_t number) noexcept;
		Vector2ui16& operator/= (const std::uint16_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2ui16& other) const noexcept;
		bool operator<= (const Vector2ui16& other) const noexcept;
		bool operator>	(const Vector2ui16& other) const noexcept;
		bool operator>= (const Vector2ui16& other) const noexcept;

		bool operator<	(const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>	(const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2ui16& other) const noexcept;
		bool operator!= (const Vector2ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3ui16
	{
	public:
		std::uint16_t x, y, z;
	public:
		Vector3ui16() : x(0), y(0), z(0) {}
		Vector3ui16(const std::uint16_t x, const std::uint16_t y, const std::uint16_t z) noexcept;
		// copy
		Vector3ui16(const Vector3ui16& other) noexcept;
		Vector3ui16& operator=(const Vector3ui16& other) noexcept;
		// move
		Vector3ui16(Vector3ui16&& other) noexcept;
		Vector3ui16& operator=(Vector3ui16&& other) noexcept;
		// assignment
		Vector3ui16& operator=(const std::uint16_t number) noexcept;

		// math operator
		Vector3ui16 operator+(const Vector3ui16& v) const noexcept;
		Vector3ui16 operator-(const Vector3ui16& v) const noexcept;
		Vector3ui16 operator*(const Vector3ui16& v) const noexcept;
		Vector3ui16 operator/(const Vector3ui16& v) const noexcept;

		Vector3ui16 operator+(const std::uint16_t number) const noexcept;
		Vector3ui16 operator-(const std::uint16_t number) const noexcept;
		Vector3ui16 operator*(const std::uint16_t number) const noexcept;
		Vector3ui16 operator/(const std::uint16_t number) const noexcept;

		// increment / decrement
		Vector3ui16& operator++ () noexcept;		// prefix increment
		Vector3ui16& operator-- () noexcept;		// prefix decrement
		Vector3ui16  operator++ (int) noexcept;		// postfix increment
		Vector3ui16  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3ui16& operator+= (const Vector3ui16& right) noexcept;
		Vector3ui16& operator-= (const Vector3ui16& right) noexcept;
		Vector3ui16& operator*= (const Vector3ui16& right) noexcept;
		Vector3ui16& operator/= (const Vector3ui16& right) noexcept;

		Vector3ui16& operator+= (const std::uint16_t number) noexcept;
		Vector3ui16& operator-= (const std::uint16_t number) noexcept;
		Vector3ui16& operator*= (const std::uint16_t number) noexcept;
		Vector3ui16& operator/= (const std::uint16_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3ui16& other) const noexcept;
		bool operator<= (const Vector3ui16& other) const noexcept;
		bool operator>  (const Vector3ui16& other) const noexcept;
		bool operator>= (const Vector3ui16& other) const noexcept;
		 
		bool operator<	(const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>	(const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3ui16& other) const noexcept;
		bool operator!= (const Vector3ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4ui16
	{
	public:
		std::uint16_t a, b, c, d;
	public:
		Vector4ui16() : a(0), b(0), c(0), d(0) {}
		Vector4ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d) noexcept;
		// copy
		Vector4ui16(const Vector4ui16& other) noexcept;
		Vector4ui16& operator=(const Vector4ui16& other) noexcept;
		// move
		Vector4ui16(Vector4ui16&& other) noexcept;
		Vector4ui16& operator=(Vector4ui16&& other) noexcept;
		// assignment
		Vector4ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector4ui16 operator+(const Vector4ui16& v) const noexcept;
		Vector4ui16 operator-(const Vector4ui16& v) const noexcept;
		Vector4ui16 operator*(const Vector4ui16& v) const noexcept;
		Vector4ui16 operator/(const Vector4ui16& v) const noexcept;
		
		Vector4ui16 operator+(const std::uint16_t number) const noexcept;
		Vector4ui16 operator-(const std::uint16_t number) const noexcept;
		Vector4ui16 operator*(const std::uint16_t number) const noexcept;
		Vector4ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector4ui16& operator++ () noexcept;		// prefix increment
		Vector4ui16& operator-- () noexcept;		// prefix decrement
		Vector4ui16  operator++ (int) noexcept;		// postfix increment
		Vector4ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4ui16& operator+= (const Vector4ui16& right) noexcept;
		Vector4ui16& operator-= (const Vector4ui16& right) noexcept;
		Vector4ui16& operator*= (const Vector4ui16& right) noexcept;
		Vector4ui16& operator/= (const Vector4ui16& right) noexcept;
		
		Vector4ui16& operator+= (const std::uint16_t number) noexcept;
		Vector4ui16& operator-= (const std::uint16_t number) noexcept;
		Vector4ui16& operator*= (const std::uint16_t number) noexcept;
		Vector4ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4ui16& other) const noexcept;
		bool operator<= (const Vector4ui16& other) const noexcept;
		bool operator>	(const Vector4ui16& other) const noexcept;
		bool operator>= (const Vector4ui16& other) const noexcept;
		
		bool operator<	(const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>	(const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4ui16& other) const noexcept;
		bool operator!= (const Vector4ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5ui16
	{
	public:
		std::uint16_t a, b, c, d, e;
	public:
		Vector5ui16() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d, const std::uint16_t e) noexcept;
		// copy
		Vector5ui16(const Vector5ui16& other) noexcept;
		Vector5ui16& operator=(const Vector5ui16& other) noexcept;
		// move
		Vector5ui16(Vector5ui16&& other) noexcept;
		Vector5ui16& operator=(Vector5ui16&& other) noexcept;
		// assignment
		Vector5ui16& operator=(const std::uint16_t number) noexcept;
		 
		// math operator
		Vector5ui16 operator+(const Vector5ui16& v) const noexcept;
		Vector5ui16 operator-(const Vector5ui16& v) const noexcept;
		Vector5ui16 operator*(const Vector5ui16& v) const noexcept;
		Vector5ui16 operator/(const Vector5ui16& v) const noexcept;
		
		Vector5ui16 operator+(const std::uint16_t number) const noexcept;
		Vector5ui16 operator-(const std::uint16_t number) const noexcept;
		Vector5ui16 operator*(const std::uint16_t number) const noexcept;
		Vector5ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector5ui16& operator++ () noexcept;		// prefix increment
		Vector5ui16& operator-- () noexcept;		// prefix decrement
		Vector5ui16  operator++ (int) noexcept;		// postfix increment
		Vector5ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5ui16& operator+= (const Vector5ui16& right) noexcept;
		Vector5ui16& operator-= (const Vector5ui16& right) noexcept;
		Vector5ui16& operator*= (const Vector5ui16& right) noexcept;
		Vector5ui16& operator/= (const Vector5ui16& right) noexcept;
		
		Vector5ui16& operator+= (const std::uint16_t number) noexcept;
		Vector5ui16& operator-= (const std::uint16_t number) noexcept;
		Vector5ui16& operator*= (const std::uint16_t number) noexcept;
		Vector5ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5ui16& other) const noexcept;
		bool operator<= (const Vector5ui16& other) const noexcept;
		bool operator>	(const Vector5ui16& other) const noexcept;
		bool operator>= (const Vector5ui16& other) const noexcept;
		
		bool operator<	(const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>	(const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5ui16& other) const noexcept;
		bool operator!= (const Vector5ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6ui16
	{
	public:
		std::uint16_t a, b, c, d, e, f;
	public:
		Vector6ui16() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f) noexcept;
		// copy
		Vector6ui16(const Vector6ui16& other) noexcept;
		Vector6ui16& operator=(const Vector6ui16& other) noexcept;
		// move
		Vector6ui16(Vector6ui16&& other) noexcept;
		Vector6ui16& operator=(Vector6ui16&& other) noexcept;
		// assignment
		Vector6ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector6ui16 operator+(const Vector6ui16& v) const noexcept;
		Vector6ui16 operator-(const Vector6ui16& v) const noexcept;
		Vector6ui16 operator*(const Vector6ui16& v) const noexcept;
		Vector6ui16 operator/(const Vector6ui16& v) const noexcept;
		
		Vector6ui16 operator+(const std::uint16_t number) const noexcept;
		Vector6ui16 operator-(const std::uint16_t number) const noexcept;
		Vector6ui16 operator*(const std::uint16_t number) const noexcept;
		Vector6ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector6ui16& operator++ () noexcept;		// prefix increment
		Vector6ui16& operator-- () noexcept;		// prefix decrement
		Vector6ui16  operator++ (int) noexcept;		// postfix increment
		Vector6ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6ui16& operator+= (const Vector6ui16& right) noexcept;
		Vector6ui16& operator-= (const Vector6ui16& right) noexcept;
		Vector6ui16& operator*= (const Vector6ui16& right) noexcept;
		Vector6ui16& operator/= (const Vector6ui16& right) noexcept;
		
		Vector6ui16& operator+= (const std::uint16_t number) noexcept;
		Vector6ui16& operator-= (const std::uint16_t number) noexcept;
		Vector6ui16& operator*= (const std::uint16_t number) noexcept;
		Vector6ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6ui16& other) const noexcept;
		bool operator<  (const Vector6ui16& other) const noexcept;
		bool operator>  (const Vector6ui16& other) const noexcept;
		bool operator>= (const Vector6ui16& other) const noexcept;
		
		bool operator<  (const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>  (const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6ui16& other) const noexcept;
		bool operator!= (const Vector6ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7ui16
	{
	public:
		std::uint16_t a, b, c, d, e, f, g;
	public:
		Vector7ui16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g) noexcept;
		// copy
		Vector7ui16(const Vector7ui16& other) noexcept;
		Vector7ui16& operator=(const Vector7ui16& other) noexcept;
		// move
		Vector7ui16(Vector7ui16&& other) noexcept;
		Vector7ui16& operator=(Vector7ui16&& other) noexcept;
		// assignment
		Vector7ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector7ui16 operator+(const Vector7ui16& v) const noexcept;
		Vector7ui16 operator-(const Vector7ui16& v) const noexcept;
		Vector7ui16 operator*(const Vector7ui16& v) const noexcept;
		Vector7ui16 operator/(const Vector7ui16& v) const noexcept;
		
		Vector7ui16 operator+(const std::uint16_t number) const noexcept;
		Vector7ui16 operator-(const std::uint16_t number) const noexcept;
		Vector7ui16 operator*(const std::uint16_t number) const noexcept;
		Vector7ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector7ui16& operator++ () noexcept;		// prefix increment
		Vector7ui16& operator-- () noexcept;		// prefix decrement
		Vector7ui16  operator++ (int) noexcept;		// postfix increment
		Vector7ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7ui16& operator+= (const Vector7ui16& right) noexcept;
		Vector7ui16& operator-= (const Vector7ui16& right) noexcept;
		Vector7ui16& operator*= (const Vector7ui16& right) noexcept;
		Vector7ui16& operator/= (const Vector7ui16& right) noexcept;
		
		Vector7ui16& operator+= (const std::uint16_t number) noexcept;
		Vector7ui16& operator-= (const std::uint16_t number) noexcept;
		Vector7ui16& operator*= (const std::uint16_t number) noexcept;
		Vector7ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7ui16& other) const noexcept;
		bool operator<  (const Vector7ui16& other) const noexcept;
		bool operator>  (const Vector7ui16& other) const noexcept;
		bool operator>= (const Vector7ui16& other) const noexcept;
		
		bool operator<  (const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>  (const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7ui16& other) const noexcept;
		bool operator!= (const Vector7ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8ui16
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h;
	public:
		Vector8ui16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h) noexcept;
		// copy
		Vector8ui16(const Vector8ui16& other) noexcept;
		Vector8ui16& operator=(const Vector8ui16& other) noexcept;
		// move
		Vector8ui16(Vector8ui16&& other) noexcept;
		Vector8ui16& operator=(Vector8ui16&& other) noexcept;
		// assignment
		Vector8ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector8ui16 operator+(const Vector8ui16& v) const noexcept;
		Vector8ui16 operator-(const Vector8ui16& v) const noexcept;
		Vector8ui16 operator*(const Vector8ui16& v) const noexcept;
		Vector8ui16 operator/(const Vector8ui16& v) const noexcept;
		
		Vector8ui16 operator+(const std::uint16_t number) const noexcept;
		Vector8ui16 operator-(const std::uint16_t number) const noexcept;
		Vector8ui16 operator*(const std::uint16_t number) const noexcept;
		Vector8ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector8ui16& operator++ () noexcept;		// prefix increment
		Vector8ui16& operator-- () noexcept;		// prefix decrement
		Vector8ui16  operator++ (int) noexcept;		// postfix increment
		Vector8ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8ui16& operator+= (const Vector8ui16& right) noexcept;
		Vector8ui16& operator-= (const Vector8ui16& right) noexcept;
		Vector8ui16& operator*= (const Vector8ui16& right) noexcept;
		Vector8ui16& operator/= (const Vector8ui16& right) noexcept;
		
		Vector8ui16& operator+= (const std::uint16_t number) noexcept;
		Vector8ui16& operator-= (const std::uint16_t number) noexcept;
		Vector8ui16& operator*= (const std::uint16_t number) noexcept;
		Vector8ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8ui16& other) const noexcept;
		bool operator<  (const Vector8ui16& other) const noexcept;
		bool operator>  (const Vector8ui16& other) const noexcept;
		bool operator>= (const Vector8ui16& other) const noexcept;
		
		bool operator<  (const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>  (const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8ui16& other) const noexcept;
		bool operator!= (const Vector8ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9ui16
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9ui16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
			const std::uint16_t i) noexcept;
		// copy
		Vector9ui16(const Vector9ui16& other) noexcept;
		Vector9ui16& operator=(const Vector9ui16& other) noexcept;
		// move
		Vector9ui16(Vector9ui16&& other) noexcept;
		Vector9ui16& operator=(Vector9ui16&& other) noexcept;
		// assignment
		Vector9ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector9ui16 operator+(const Vector9ui16& v) const noexcept;
		Vector9ui16 operator-(const Vector9ui16& v) const noexcept;
		Vector9ui16 operator*(const Vector9ui16& v) const noexcept;
		Vector9ui16 operator/(const Vector9ui16& v) const noexcept;
		
		Vector9ui16 operator+(const std::uint16_t number) const noexcept;
		Vector9ui16 operator-(const std::uint16_t number) const noexcept;
		Vector9ui16 operator*(const std::uint16_t number) const noexcept;
		Vector9ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector9ui16& operator++ () noexcept;		// prefix increment
		Vector9ui16& operator-- () noexcept;		// prefix decrement
		Vector9ui16  operator++ (int) noexcept;		// postfix increment
		Vector9ui16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9ui16& operator+= (const Vector9ui16& right) noexcept;
		Vector9ui16& operator-= (const Vector9ui16& right) noexcept;
		Vector9ui16& operator*= (const Vector9ui16& right) noexcept;
		Vector9ui16& operator/= (const Vector9ui16& right) noexcept;
		
		Vector9ui16& operator+= (const std::uint16_t number) noexcept;
		Vector9ui16& operator-= (const std::uint16_t number) noexcept;
		Vector9ui16& operator*= (const std::uint16_t number) noexcept;
		Vector9ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9ui16& other) const noexcept;
		bool operator<  (const Vector9ui16& other) const noexcept;
		bool operator>  (const Vector9ui16& other) const noexcept;
		bool operator>= (const Vector9ui16& other) const noexcept;
		
		bool operator<  (const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>  (const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9ui16& other) const noexcept;
		bool operator!= (const Vector9ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)  const noexcept;
		bool operator!= (const std::uint16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10ui16
	{
	public:
		std::uint16_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10ui16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10ui16(const std::uint16_t a, const std::uint16_t b, const std::uint16_t c, const std::uint16_t d,
			const std::uint16_t e, const std::uint16_t f, const std::uint16_t g, const std::uint16_t h,
			const std::uint16_t i, const std::uint16_t j) noexcept;
		// copy
		Vector10ui16(const Vector10ui16& other) noexcept;
		Vector10ui16& operator=(const Vector10ui16& other) noexcept;
		// move
		Vector10ui16(Vector10ui16&& other) noexcept;
		Vector10ui16& operator=(Vector10ui16&& other) noexcept;
		// assignment
		Vector10ui16& operator=(const std::uint16_t number) noexcept;
		
		// math operator
		Vector10ui16 operator+(const Vector10ui16& v) const noexcept;
		Vector10ui16 operator-(const Vector10ui16& v) const noexcept;
		Vector10ui16 operator*(const Vector10ui16& v) const noexcept;
		Vector10ui16 operator/(const Vector10ui16& v) const noexcept;
		
		Vector10ui16 operator+(const std::uint16_t number) const noexcept;
		Vector10ui16 operator-(const std::uint16_t number) const noexcept;
		Vector10ui16 operator*(const std::uint16_t number) const noexcept;
		Vector10ui16 operator/(const std::uint16_t number) const noexcept;
		
		// increment / decrement
		Vector10ui16& operator++ () noexcept;		// prefix increment
		Vector10ui16& operator-- () noexcept;		// prefix decrement
		Vector10ui16  operator++ (int) noexcept;	// postfix increment
		Vector10ui16  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10ui16& operator+= (const Vector10ui16& right) noexcept;
		Vector10ui16& operator-= (const Vector10ui16& right) noexcept;
		Vector10ui16& operator*= (const Vector10ui16& right) noexcept;
		Vector10ui16& operator/= (const Vector10ui16& right) noexcept;
		
		Vector10ui16& operator+= (const std::uint16_t number) noexcept;
		Vector10ui16& operator-= (const std::uint16_t number) noexcept;
		Vector10ui16& operator*= (const std::uint16_t number) noexcept;
		Vector10ui16& operator/= (const std::uint16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10ui16& other) const noexcept;
		bool operator<  (const Vector10ui16& other) const noexcept;
		bool operator>  (const Vector10ui16& other) const noexcept;
		bool operator>= (const Vector10ui16& other) const noexcept;

		bool operator<  (const std::uint16_t number) const noexcept;
		bool operator<= (const std::uint16_t number) const noexcept;
		bool operator>  (const std::uint16_t number) const noexcept;
		bool operator>= (const std::uint16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10ui16& other) const noexcept;
		bool operator!= (const Vector10ui16& other) const noexcept;
		bool operator== (const std::uint16_t number)   const noexcept;
		bool operator!= (const std::uint16_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint16_t stnd_value = 0) noexcept;
		std::uint16_t& operator[](const std::uint8_t index) noexcept;
		std::uint16_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui16& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui16& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
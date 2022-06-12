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

		Type : std::uint32_t
		Bytes: 4
		Range: 0 to 4.294.967.295
	*/

	class Vector2ui32
	{
	public:
		std::uint32_t x, y;
	public:
		Vector2ui32() noexcept : x(0U), y(0U) {}
		Vector2ui32(const std::uint32_t x, const std::uint32_t y) noexcept;
		// copy
		Vector2ui32(const Vector2ui32& other) noexcept;
		Vector2ui32& operator=(const Vector2ui32& other) noexcept;
		// move
		Vector2ui32(Vector2ui32&& other) noexcept;
		Vector2ui32& operator=(Vector2ui32&& other) noexcept;
		// assignment
		Vector2ui32& operator=(const std::uint32_t number) noexcept;

		// math operator
		Vector2ui32 operator+(const Vector2ui32& v) const noexcept;
		Vector2ui32 operator-(const Vector2ui32& v) const noexcept;
		Vector2ui32 operator*(const Vector2ui32& v) const noexcept;
		Vector2ui32 operator/(const Vector2ui32& v) const noexcept;

		Vector2ui32 operator+(const std::uint32_t number) const noexcept;
		Vector2ui32 operator-(const std::uint32_t number) const noexcept;
		Vector2ui32 operator*(const std::uint32_t number) const noexcept;
		Vector2ui32 operator/(const std::uint32_t number) const noexcept;

		// increment / decrement
		Vector2ui32& operator++ () noexcept;		// prefix increment
		Vector2ui32& operator-- () noexcept;		// prefix decrement
		Vector2ui32  operator++ (int) noexcept;		// postfix increment
		Vector2ui32  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2ui32& operator+= (const Vector2ui32& right) noexcept;
		Vector2ui32& operator-= (const Vector2ui32& right) noexcept;
		Vector2ui32& operator*= (const Vector2ui32& right) noexcept;
		Vector2ui32& operator/= (const Vector2ui32& right) noexcept;

		Vector2ui32& operator+= (const std::uint32_t number) noexcept;
		Vector2ui32& operator-= (const std::uint32_t number) noexcept;
		Vector2ui32& operator*= (const std::uint32_t number) noexcept;
		Vector2ui32& operator/= (const std::uint32_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2ui32& other) const noexcept;
		bool operator<= (const Vector2ui32& other) const noexcept;
		bool operator>	(const Vector2ui32& other) const noexcept;
		bool operator>= (const Vector2ui32& other) const noexcept;

		bool operator<	(const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>	(const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2ui32& other) const noexcept;
		bool operator!= (const Vector2ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3ui32
	{
	public:
		std::uint32_t x, y, z;
	public:
		Vector3ui32() : x(0U), y(0U), z(0U) {}
		Vector3ui32(const std::uint32_t x, const std::uint32_t y, const std::uint32_t z) noexcept;
		// copy
		Vector3ui32(const Vector3ui32& other) noexcept;
		Vector3ui32& operator=(const Vector3ui32& other) noexcept;
		// move
		Vector3ui32(Vector3ui32&& other) noexcept;
		Vector3ui32& operator=(Vector3ui32&& other) noexcept;
		// assignment
		Vector3ui32& operator=(const std::uint32_t number) noexcept;

		// math operator
		Vector3ui32 operator+(const Vector3ui32& v) const noexcept;
		Vector3ui32 operator-(const Vector3ui32& v) const noexcept;
		Vector3ui32 operator*(const Vector3ui32& v) const noexcept;
		Vector3ui32 operator/(const Vector3ui32& v) const noexcept;

		Vector3ui32 operator+(const std::uint32_t number) const noexcept;
		Vector3ui32 operator-(const std::uint32_t number) const noexcept;
		Vector3ui32 operator*(const std::uint32_t number) const noexcept;
		Vector3ui32 operator/(const std::uint32_t number) const noexcept;

		// increment / decrement
		Vector3ui32& operator++ () noexcept;		// prefix increment
		Vector3ui32& operator-- () noexcept;		// prefix decrement
		Vector3ui32  operator++ (int) noexcept;		// postfix increment
		Vector3ui32  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3ui32& operator+= (const Vector3ui32& right) noexcept;
		Vector3ui32& operator-= (const Vector3ui32& right) noexcept;
		Vector3ui32& operator*= (const Vector3ui32& right) noexcept;
		Vector3ui32& operator/= (const Vector3ui32& right) noexcept;

		Vector3ui32& operator+= (const std::uint32_t number) noexcept;
		Vector3ui32& operator-= (const std::uint32_t number) noexcept;
		Vector3ui32& operator*= (const std::uint32_t number) noexcept;
		Vector3ui32& operator/= (const std::uint32_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3ui32& other) const noexcept;
		bool operator<= (const Vector3ui32& other) const noexcept;
		bool operator>  (const Vector3ui32& other) const noexcept;
		bool operator>= (const Vector3ui32& other) const noexcept;
		 
		bool operator<	(const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>	(const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3ui32& other) const noexcept;
		bool operator!= (const Vector3ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4ui32
	{
	public:
		std::uint32_t a, b, c, d;
	public:
		Vector4ui32() : a(0U), b(0U), c(0U), d(0U) {}
		Vector4ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d) noexcept;
		// copy
		Vector4ui32(const Vector4ui32& other) noexcept;
		Vector4ui32& operator=(const Vector4ui32& other) noexcept;
		// move
		Vector4ui32(Vector4ui32&& other) noexcept;
		Vector4ui32& operator=(Vector4ui32&& other) noexcept;
		// assignment
		Vector4ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector4ui32 operator+(const Vector4ui32& v) const noexcept;
		Vector4ui32 operator-(const Vector4ui32& v) const noexcept;
		Vector4ui32 operator*(const Vector4ui32& v) const noexcept;
		Vector4ui32 operator/(const Vector4ui32& v) const noexcept;
		
		Vector4ui32 operator+(const std::uint32_t number) const noexcept;
		Vector4ui32 operator-(const std::uint32_t number) const noexcept;
		Vector4ui32 operator*(const std::uint32_t number) const noexcept;
		Vector4ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector4ui32& operator++ () noexcept;		// prefix increment
		Vector4ui32& operator-- () noexcept;		// prefix decrement
		Vector4ui32  operator++ (int) noexcept;		// postfix increment
		Vector4ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4ui32& operator+= (const Vector4ui32& right) noexcept;
		Vector4ui32& operator-= (const Vector4ui32& right) noexcept;
		Vector4ui32& operator*= (const Vector4ui32& right) noexcept;
		Vector4ui32& operator/= (const Vector4ui32& right) noexcept;
		
		Vector4ui32& operator+= (const std::uint32_t number) noexcept;
		Vector4ui32& operator-= (const std::uint32_t number) noexcept;
		Vector4ui32& operator*= (const std::uint32_t number) noexcept;
		Vector4ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4ui32& other) const noexcept;
		bool operator<= (const Vector4ui32& other) const noexcept;
		bool operator>	(const Vector4ui32& other) const noexcept;
		bool operator>= (const Vector4ui32& other) const noexcept;
		
		bool operator<	(const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>	(const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4ui32& other) const noexcept;
		bool operator!= (const Vector4ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5ui32
	{
	public:
		std::uint32_t a, b, c, d, e;
	public:
		Vector5ui32() : a(0U), b(0U), c(0U), d(0U), e(0U) {}
		Vector5ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d, const std::uint32_t e) noexcept;
		// copy
		Vector5ui32(const Vector5ui32& other) noexcept;
		Vector5ui32& operator=(const Vector5ui32& other) noexcept;
		// move
		Vector5ui32(Vector5ui32&& other) noexcept;
		Vector5ui32& operator=(Vector5ui32&& other) noexcept;
		// assignment
		Vector5ui32& operator=(const std::uint32_t number) noexcept;
		 
		// math operator
		Vector5ui32 operator+(const Vector5ui32& v) const noexcept;
		Vector5ui32 operator-(const Vector5ui32& v) const noexcept;
		Vector5ui32 operator*(const Vector5ui32& v) const noexcept;
		Vector5ui32 operator/(const Vector5ui32& v) const noexcept;
		
		Vector5ui32 operator+(const std::uint32_t number) const noexcept;
		Vector5ui32 operator-(const std::uint32_t number) const noexcept;
		Vector5ui32 operator*(const std::uint32_t number) const noexcept;
		Vector5ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector5ui32& operator++ () noexcept;		// prefix increment
		Vector5ui32& operator-- () noexcept;		// prefix decrement
		Vector5ui32  operator++ (int) noexcept;		// postfix increment
		Vector5ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5ui32& operator+= (const Vector5ui32& right) noexcept;
		Vector5ui32& operator-= (const Vector5ui32& right) noexcept;
		Vector5ui32& operator*= (const Vector5ui32& right) noexcept;
		Vector5ui32& operator/= (const Vector5ui32& right) noexcept;
		
		Vector5ui32& operator+= (const std::uint32_t number) noexcept;
		Vector5ui32& operator-= (const std::uint32_t number) noexcept;
		Vector5ui32& operator*= (const std::uint32_t number) noexcept;
		Vector5ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5ui32& other) const noexcept;
		bool operator<= (const Vector5ui32& other) const noexcept;
		bool operator>	(const Vector5ui32& other) const noexcept;
		bool operator>= (const Vector5ui32& other) const noexcept;
		
		bool operator<	(const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>	(const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5ui32& other) const noexcept;
		bool operator!= (const Vector5ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6ui32
	{
	public:
		std::uint32_t a, b, c, d, e, f;
	public:
		Vector6ui32() : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U) {}
		Vector6ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f) noexcept;
		// copy
		Vector6ui32(const Vector6ui32& other) noexcept;
		Vector6ui32& operator=(const Vector6ui32& other) noexcept;
		// move
		Vector6ui32(Vector6ui32&& other) noexcept;
		Vector6ui32& operator=(Vector6ui32&& other) noexcept;
		// assignment
		Vector6ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector6ui32 operator+(const Vector6ui32& v) const noexcept;
		Vector6ui32 operator-(const Vector6ui32& v) const noexcept;
		Vector6ui32 operator*(const Vector6ui32& v) const noexcept;
		Vector6ui32 operator/(const Vector6ui32& v) const noexcept;
		
		Vector6ui32 operator+(const std::uint32_t number) const noexcept;
		Vector6ui32 operator-(const std::uint32_t number) const noexcept;
		Vector6ui32 operator*(const std::uint32_t number) const noexcept;
		Vector6ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector6ui32& operator++ () noexcept;		// prefix increment
		Vector6ui32& operator-- () noexcept;		// prefix decrement
		Vector6ui32  operator++ (int) noexcept;		// postfix increment
		Vector6ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6ui32& operator+= (const Vector6ui32& right) noexcept;
		Vector6ui32& operator-= (const Vector6ui32& right) noexcept;
		Vector6ui32& operator*= (const Vector6ui32& right) noexcept;
		Vector6ui32& operator/= (const Vector6ui32& right) noexcept;
		
		Vector6ui32& operator+= (const std::uint32_t number) noexcept;
		Vector6ui32& operator-= (const std::uint32_t number) noexcept;
		Vector6ui32& operator*= (const std::uint32_t number) noexcept;
		Vector6ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6ui32& other) const noexcept;
		bool operator<  (const Vector6ui32& other) const noexcept;
		bool operator>  (const Vector6ui32& other) const noexcept;
		bool operator>= (const Vector6ui32& other) const noexcept;
		
		bool operator<  (const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>  (const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6ui32& other) const noexcept;
		bool operator!= (const Vector6ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7ui32
	{
	public:
		std::uint32_t a, b, c, d, e, f, g;
	public:
		Vector7ui32() : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U) {}
		Vector7ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g) noexcept;
		// copy
		Vector7ui32(const Vector7ui32& other) noexcept;
		Vector7ui32& operator=(const Vector7ui32& other) noexcept;
		// move
		Vector7ui32(Vector7ui32&& other) noexcept;
		Vector7ui32& operator=(Vector7ui32&& other) noexcept;
		// assignment
		Vector7ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector7ui32 operator+(const Vector7ui32& v) const noexcept;
		Vector7ui32 operator-(const Vector7ui32& v) const noexcept;
		Vector7ui32 operator*(const Vector7ui32& v) const noexcept;
		Vector7ui32 operator/(const Vector7ui32& v) const noexcept;
		
		Vector7ui32 operator+(const std::uint32_t number) const noexcept;
		Vector7ui32 operator-(const std::uint32_t number) const noexcept;
		Vector7ui32 operator*(const std::uint32_t number) const noexcept;
		Vector7ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector7ui32& operator++ () noexcept;		// prefix increment
		Vector7ui32& operator-- () noexcept;		// prefix decrement
		Vector7ui32  operator++ (int) noexcept;		// postfix increment
		Vector7ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7ui32& operator+= (const Vector7ui32& right) noexcept;
		Vector7ui32& operator-= (const Vector7ui32& right) noexcept;
		Vector7ui32& operator*= (const Vector7ui32& right) noexcept;
		Vector7ui32& operator/= (const Vector7ui32& right) noexcept;
		
		Vector7ui32& operator+= (const std::uint32_t number) noexcept;
		Vector7ui32& operator-= (const std::uint32_t number) noexcept;
		Vector7ui32& operator*= (const std::uint32_t number) noexcept;
		Vector7ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7ui32& other) const noexcept;
		bool operator<  (const Vector7ui32& other) const noexcept;
		bool operator>  (const Vector7ui32& other) const noexcept;
		bool operator>= (const Vector7ui32& other) const noexcept;
		
		bool operator<  (const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>  (const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7ui32& other) const noexcept;
		bool operator!= (const Vector7ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8ui32
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h;
	public:
		Vector8ui32() : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U) {}
		Vector8ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h) noexcept;
		// copy
		Vector8ui32(const Vector8ui32& other) noexcept;
		Vector8ui32& operator=(const Vector8ui32& other) noexcept;
		// move
		Vector8ui32(Vector8ui32&& other) noexcept;
		Vector8ui32& operator=(Vector8ui32&& other) noexcept;
		// assignment
		Vector8ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector8ui32 operator+(const Vector8ui32& v) const noexcept;
		Vector8ui32 operator-(const Vector8ui32& v) const noexcept;
		Vector8ui32 operator*(const Vector8ui32& v) const noexcept;
		Vector8ui32 operator/(const Vector8ui32& v) const noexcept;
		
		Vector8ui32 operator+(const std::uint32_t number) const noexcept;
		Vector8ui32 operator-(const std::uint32_t number) const noexcept;
		Vector8ui32 operator*(const std::uint32_t number) const noexcept;
		Vector8ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector8ui32& operator++ () noexcept;		// prefix increment
		Vector8ui32& operator-- () noexcept;		// prefix decrement
		Vector8ui32  operator++ (int) noexcept;		// postfix increment
		Vector8ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8ui32& operator+= (const Vector8ui32& right) noexcept;
		Vector8ui32& operator-= (const Vector8ui32& right) noexcept;
		Vector8ui32& operator*= (const Vector8ui32& right) noexcept;
		Vector8ui32& operator/= (const Vector8ui32& right) noexcept;
		
		Vector8ui32& operator+= (const std::uint32_t number) noexcept;
		Vector8ui32& operator-= (const std::uint32_t number) noexcept;
		Vector8ui32& operator*= (const std::uint32_t number) noexcept;
		Vector8ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8ui32& other) const noexcept;
		bool operator<  (const Vector8ui32& other) const noexcept;
		bool operator>  (const Vector8ui32& other) const noexcept;
		bool operator>= (const Vector8ui32& other) const noexcept;
		
		bool operator<  (const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>  (const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8ui32& other) const noexcept;
		bool operator!= (const Vector8ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9ui32
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9ui32() : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U), i(0U) {}
		Vector9ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
			const std::uint32_t i) noexcept;
		// copy
		Vector9ui32(const Vector9ui32& other) noexcept;
		Vector9ui32& operator=(const Vector9ui32& other) noexcept;
		// move
		Vector9ui32(Vector9ui32&& other) noexcept;
		Vector9ui32& operator=(Vector9ui32&& other) noexcept;
		// assignment
		Vector9ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector9ui32 operator+(const Vector9ui32& v) const noexcept;
		Vector9ui32 operator-(const Vector9ui32& v) const noexcept;
		Vector9ui32 operator*(const Vector9ui32& v) const noexcept;
		Vector9ui32 operator/(const Vector9ui32& v) const noexcept;
		
		Vector9ui32 operator+(const std::uint32_t number) const noexcept;
		Vector9ui32 operator-(const std::uint32_t number) const noexcept;
		Vector9ui32 operator*(const std::uint32_t number) const noexcept;
		Vector9ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector9ui32& operator++ () noexcept;		// prefix increment
		Vector9ui32& operator-- () noexcept;		// prefix decrement
		Vector9ui32  operator++ (int) noexcept;		// postfix increment
		Vector9ui32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9ui32& operator+= (const Vector9ui32& right) noexcept;
		Vector9ui32& operator-= (const Vector9ui32& right) noexcept;
		Vector9ui32& operator*= (const Vector9ui32& right) noexcept;
		Vector9ui32& operator/= (const Vector9ui32& right) noexcept;
		
		Vector9ui32& operator+= (const std::uint32_t number) noexcept;
		Vector9ui32& operator-= (const std::uint32_t number) noexcept;
		Vector9ui32& operator*= (const std::uint32_t number) noexcept;
		Vector9ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9ui32& other) const noexcept;
		bool operator<  (const Vector9ui32& other) const noexcept;
		bool operator>  (const Vector9ui32& other) const noexcept;
		bool operator>= (const Vector9ui32& other) const noexcept;
		
		bool operator<  (const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>  (const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9ui32& other) const noexcept;
		bool operator!= (const Vector9ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)  const noexcept;
		bool operator!= (const std::uint32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10ui32
	{
	public:
		std::uint32_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10ui32() : a(0U), b(0U), c(0U), d(0U), e(0U), f(0U), g(0U), h(0U), i(0U), j(0U) {}
		Vector10ui32(const std::uint32_t a, const std::uint32_t b, const std::uint32_t c, const std::uint32_t d,
			const std::uint32_t e, const std::uint32_t f, const std::uint32_t g, const std::uint32_t h,
			const std::uint32_t i, const std::uint32_t j) noexcept;
		// copy
		Vector10ui32(const Vector10ui32& other) noexcept;
		Vector10ui32& operator=(const Vector10ui32& other) noexcept;
		// move
		Vector10ui32(Vector10ui32&& other) noexcept;
		Vector10ui32& operator=(Vector10ui32&& other) noexcept;
		// assignment
		Vector10ui32& operator=(const std::uint32_t number) noexcept;
		
		// math operator
		Vector10ui32 operator+(const Vector10ui32& v) const noexcept;
		Vector10ui32 operator-(const Vector10ui32& v) const noexcept;
		Vector10ui32 operator*(const Vector10ui32& v) const noexcept;
		Vector10ui32 operator/(const Vector10ui32& v) const noexcept;
		
		Vector10ui32 operator+(const std::uint32_t number) const noexcept;
		Vector10ui32 operator-(const std::uint32_t number) const noexcept;
		Vector10ui32 operator*(const std::uint32_t number) const noexcept;
		Vector10ui32 operator/(const std::uint32_t number) const noexcept;
		
		// increment / decrement
		Vector10ui32& operator++ () noexcept;		// prefix increment
		Vector10ui32& operator-- () noexcept;		// prefix decrement
		Vector10ui32  operator++ (int) noexcept;	// postfix increment
		Vector10ui32  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10ui32& operator+= (const Vector10ui32& right) noexcept;
		Vector10ui32& operator-= (const Vector10ui32& right) noexcept;
		Vector10ui32& operator*= (const Vector10ui32& right) noexcept;
		Vector10ui32& operator/= (const Vector10ui32& right) noexcept;
		
		Vector10ui32& operator+= (const std::uint32_t number) noexcept;
		Vector10ui32& operator-= (const std::uint32_t number) noexcept;
		Vector10ui32& operator*= (const std::uint32_t number) noexcept;
		Vector10ui32& operator/= (const std::uint32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10ui32& other) const noexcept;
		bool operator<  (const Vector10ui32& other) const noexcept;
		bool operator>  (const Vector10ui32& other) const noexcept;
		bool operator>= (const Vector10ui32& other) const noexcept;

		bool operator<  (const std::uint32_t number) const noexcept;
		bool operator<= (const std::uint32_t number) const noexcept;
		bool operator>  (const std::uint32_t number) const noexcept;
		bool operator>= (const std::uint32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10ui32& other) const noexcept;
		bool operator!= (const Vector10ui32& other) const noexcept;
		bool operator== (const std::uint32_t number)   const noexcept;
		bool operator!= (const std::uint32_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint32_t stnd_value = 0U) noexcept;
		std::uint32_t& operator[](const std::uint8_t index) noexcept;
		std::uint32_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui32& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui32& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
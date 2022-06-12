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

		Type : std::int32_t
		Bytes: 4
		Range: -2.147.483.648 to 2.147.483.647
	*/

	class Vector2i32
	{
	public:
		std::int32_t x, y;
	public:
		Vector2i32() noexcept : x(0), y(0) {}
		Vector2i32(const std::int32_t x, const std::int32_t y) noexcept;
		// copy
		Vector2i32(const Vector2i32& other) noexcept;
		Vector2i32& operator=(const Vector2i32& other) noexcept;
		// move
		Vector2i32(Vector2i32&& other) noexcept;
		Vector2i32& operator=(Vector2i32&& other) noexcept;
		// assignment
		Vector2i32& operator=(const std::int32_t number) noexcept;

		// math operator
		Vector2i32 operator+(const Vector2i32& v) const noexcept;
		Vector2i32 operator-(const Vector2i32& v) const noexcept;
		Vector2i32 operator*(const Vector2i32& v) const noexcept;
		Vector2i32 operator/(const Vector2i32& v) const noexcept;

		Vector2i32 operator+(const std::int32_t number) const noexcept;
		Vector2i32 operator-(const std::int32_t number) const noexcept;
		Vector2i32 operator*(const std::int32_t number) const noexcept;
		Vector2i32 operator/(const std::int32_t number) const noexcept;

		// increment / decrement
		Vector2i32& operator++ () noexcept;		// prefix increment
		Vector2i32& operator-- () noexcept;		// prefix decrement
		Vector2i32  operator++ (int) noexcept;		// postfix increment
		Vector2i32  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2i32& operator+= (const Vector2i32& right) noexcept;
		Vector2i32& operator-= (const Vector2i32& right) noexcept;
		Vector2i32& operator*= (const Vector2i32& right) noexcept;
		Vector2i32& operator/= (const Vector2i32& right) noexcept;

		Vector2i32& operator+= (const std::int32_t number) noexcept;
		Vector2i32& operator-= (const std::int32_t number) noexcept;
		Vector2i32& operator*= (const std::int32_t number) noexcept;
		Vector2i32& operator/= (const std::int32_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2i32& other) const noexcept;
		bool operator<= (const Vector2i32& other) const noexcept;
		bool operator>	(const Vector2i32& other) const noexcept;
		bool operator>= (const Vector2i32& other) const noexcept;

		bool operator<	(const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>	(const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2i32& other) const noexcept;
		bool operator!= (const Vector2i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3i32
	{
	public:
		std::int32_t x, y, z;
	public:
		Vector3i32() : x(0), y(0), z(0) {}
		Vector3i32(const std::int32_t x, const std::int32_t y, const std::int32_t z) noexcept;
		// copy
		Vector3i32(const Vector3i32& other) noexcept;
		Vector3i32& operator=(const Vector3i32& other) noexcept;
		// move
		Vector3i32(Vector3i32&& other) noexcept;
		Vector3i32& operator=(Vector3i32&& other) noexcept;
		// assignment
		Vector3i32& operator=(const std::int32_t number) noexcept;

		// math operator
		Vector3i32 operator+(const Vector3i32& v) const noexcept;
		Vector3i32 operator-(const Vector3i32& v) const noexcept;
		Vector3i32 operator*(const Vector3i32& v) const noexcept;
		Vector3i32 operator/(const Vector3i32& v) const noexcept;

		Vector3i32 operator+(const std::int32_t number) const noexcept;
		Vector3i32 operator-(const std::int32_t number) const noexcept;
		Vector3i32 operator*(const std::int32_t number) const noexcept;
		Vector3i32 operator/(const std::int32_t number) const noexcept;

		// increment / decrement
		Vector3i32& operator++ () noexcept;		// prefix increment
		Vector3i32& operator-- () noexcept;		// prefix decrement
		Vector3i32  operator++ (int) noexcept;		// postfix increment
		Vector3i32  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3i32& operator+= (const Vector3i32& right) noexcept;
		Vector3i32& operator-= (const Vector3i32& right) noexcept;
		Vector3i32& operator*= (const Vector3i32& right) noexcept;
		Vector3i32& operator/= (const Vector3i32& right) noexcept;

		Vector3i32& operator+= (const std::int32_t number) noexcept;
		Vector3i32& operator-= (const std::int32_t number) noexcept;
		Vector3i32& operator*= (const std::int32_t number) noexcept;
		Vector3i32& operator/= (const std::int32_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3i32& other) const noexcept;
		bool operator<= (const Vector3i32& other) const noexcept;
		bool operator>  (const Vector3i32& other) const noexcept;
		bool operator>= (const Vector3i32& other) const noexcept;
		 
		bool operator<	(const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>	(const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3i32& other) const noexcept;
		bool operator!= (const Vector3i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4i32
	{
	public:
		std::int32_t a, b, c, d;
	public:
		Vector4i32() : a(0), b(0), c(0), d(0) {}
		Vector4i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d) noexcept;
		// copy
		Vector4i32(const Vector4i32& other) noexcept;
		Vector4i32& operator=(const Vector4i32& other) noexcept;
		// move
		Vector4i32(Vector4i32&& other) noexcept;
		Vector4i32& operator=(Vector4i32&& other) noexcept;
		// assignment
		Vector4i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector4i32 operator+(const Vector4i32& v) const noexcept;
		Vector4i32 operator-(const Vector4i32& v) const noexcept;
		Vector4i32 operator*(const Vector4i32& v) const noexcept;
		Vector4i32 operator/(const Vector4i32& v) const noexcept;
		
		Vector4i32 operator+(const std::int32_t number) const noexcept;
		Vector4i32 operator-(const std::int32_t number) const noexcept;
		Vector4i32 operator*(const std::int32_t number) const noexcept;
		Vector4i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector4i32& operator++ () noexcept;		// prefix increment
		Vector4i32& operator-- () noexcept;		// prefix decrement
		Vector4i32  operator++ (int) noexcept;		// postfix increment
		Vector4i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4i32& operator+= (const Vector4i32& right) noexcept;
		Vector4i32& operator-= (const Vector4i32& right) noexcept;
		Vector4i32& operator*= (const Vector4i32& right) noexcept;
		Vector4i32& operator/= (const Vector4i32& right) noexcept;
		
		Vector4i32& operator+= (const std::int32_t number) noexcept;
		Vector4i32& operator-= (const std::int32_t number) noexcept;
		Vector4i32& operator*= (const std::int32_t number) noexcept;
		Vector4i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4i32& other) const noexcept;
		bool operator<= (const Vector4i32& other) const noexcept;
		bool operator>	(const Vector4i32& other) const noexcept;
		bool operator>= (const Vector4i32& other) const noexcept;
		
		bool operator<	(const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>	(const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4i32& other) const noexcept;
		bool operator!= (const Vector4i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5i32
	{
	public:
		std::int32_t a, b, c, d, e;
	public:
		Vector5i32() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d, const std::int32_t e) noexcept;
		// copy
		Vector5i32(const Vector5i32& other) noexcept;
		Vector5i32& operator=(const Vector5i32& other) noexcept;
		// move
		Vector5i32(Vector5i32&& other) noexcept;
		Vector5i32& operator=(Vector5i32&& other) noexcept;
		// assignment
		Vector5i32& operator=(const std::int32_t number) noexcept;
		 
		// math operator
		Vector5i32 operator+(const Vector5i32& v) const noexcept;
		Vector5i32 operator-(const Vector5i32& v) const noexcept;
		Vector5i32 operator*(const Vector5i32& v) const noexcept;
		Vector5i32 operator/(const Vector5i32& v) const noexcept;
		
		Vector5i32 operator+(const std::int32_t number) const noexcept;
		Vector5i32 operator-(const std::int32_t number) const noexcept;
		Vector5i32 operator*(const std::int32_t number) const noexcept;
		Vector5i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector5i32& operator++ () noexcept;		// prefix increment
		Vector5i32& operator-- () noexcept;		// prefix decrement
		Vector5i32  operator++ (int) noexcept;		// postfix increment
		Vector5i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5i32& operator+= (const Vector5i32& right) noexcept;
		Vector5i32& operator-= (const Vector5i32& right) noexcept;
		Vector5i32& operator*= (const Vector5i32& right) noexcept;
		Vector5i32& operator/= (const Vector5i32& right) noexcept;
		
		Vector5i32& operator+= (const std::int32_t number) noexcept;
		Vector5i32& operator-= (const std::int32_t number) noexcept;
		Vector5i32& operator*= (const std::int32_t number) noexcept;
		Vector5i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5i32& other) const noexcept;
		bool operator<= (const Vector5i32& other) const noexcept;
		bool operator>	(const Vector5i32& other) const noexcept;
		bool operator>= (const Vector5i32& other) const noexcept;
		
		bool operator<	(const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>	(const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5i32& other) const noexcept;
		bool operator!= (const Vector5i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6i32
	{
	public:
		std::int32_t a, b, c, d, e, f;
	public:
		Vector6i32() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
			const std::int32_t e, const std::int32_t f) noexcept;
		// copy
		Vector6i32(const Vector6i32& other) noexcept;
		Vector6i32& operator=(const Vector6i32& other) noexcept;
		// move
		Vector6i32(Vector6i32&& other) noexcept;
		Vector6i32& operator=(Vector6i32&& other) noexcept;
		// assignment
		Vector6i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector6i32 operator+(const Vector6i32& v) const noexcept;
		Vector6i32 operator-(const Vector6i32& v) const noexcept;
		Vector6i32 operator*(const Vector6i32& v) const noexcept;
		Vector6i32 operator/(const Vector6i32& v) const noexcept;
		
		Vector6i32 operator+(const std::int32_t number) const noexcept;
		Vector6i32 operator-(const std::int32_t number) const noexcept;
		Vector6i32 operator*(const std::int32_t number) const noexcept;
		Vector6i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector6i32& operator++ () noexcept;		// prefix increment
		Vector6i32& operator-- () noexcept;		// prefix decrement
		Vector6i32  operator++ (int) noexcept;		// postfix increment
		Vector6i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6i32& operator+= (const Vector6i32& right) noexcept;
		Vector6i32& operator-= (const Vector6i32& right) noexcept;
		Vector6i32& operator*= (const Vector6i32& right) noexcept;
		Vector6i32& operator/= (const Vector6i32& right) noexcept;
		
		Vector6i32& operator+= (const std::int32_t number) noexcept;
		Vector6i32& operator-= (const std::int32_t number) noexcept;
		Vector6i32& operator*= (const std::int32_t number) noexcept;
		Vector6i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6i32& other) const noexcept;
		bool operator<  (const Vector6i32& other) const noexcept;
		bool operator>  (const Vector6i32& other) const noexcept;
		bool operator>= (const Vector6i32& other) const noexcept;
		
		bool operator<  (const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>  (const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6i32& other) const noexcept;
		bool operator!= (const Vector6i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7i32
	{
	public:
		std::int32_t a, b, c, d, e, f, g;
	public:
		Vector7i32() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
			const std::int32_t e, const std::int32_t f, const std::int32_t g) noexcept;
		// copy
		Vector7i32(const Vector7i32& other) noexcept;
		Vector7i32& operator=(const Vector7i32& other) noexcept;
		// move
		Vector7i32(Vector7i32&& other) noexcept;
		Vector7i32& operator=(Vector7i32&& other) noexcept;
		// assignment
		Vector7i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector7i32 operator+(const Vector7i32& v) const noexcept;
		Vector7i32 operator-(const Vector7i32& v) const noexcept;
		Vector7i32 operator*(const Vector7i32& v) const noexcept;
		Vector7i32 operator/(const Vector7i32& v) const noexcept;
		
		Vector7i32 operator+(const std::int32_t number) const noexcept;
		Vector7i32 operator-(const std::int32_t number) const noexcept;
		Vector7i32 operator*(const std::int32_t number) const noexcept;
		Vector7i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector7i32& operator++ () noexcept;		// prefix increment
		Vector7i32& operator-- () noexcept;		// prefix decrement
		Vector7i32  operator++ (int) noexcept;		// postfix increment
		Vector7i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7i32& operator+= (const Vector7i32& right) noexcept;
		Vector7i32& operator-= (const Vector7i32& right) noexcept;
		Vector7i32& operator*= (const Vector7i32& right) noexcept;
		Vector7i32& operator/= (const Vector7i32& right) noexcept;
		
		Vector7i32& operator+= (const std::int32_t number) noexcept;
		Vector7i32& operator-= (const std::int32_t number) noexcept;
		Vector7i32& operator*= (const std::int32_t number) noexcept;
		Vector7i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7i32& other) const noexcept;
		bool operator<  (const Vector7i32& other) const noexcept;
		bool operator>  (const Vector7i32& other) const noexcept;
		bool operator>= (const Vector7i32& other) const noexcept;
		
		bool operator<  (const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>  (const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7i32& other) const noexcept;
		bool operator!= (const Vector7i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8i32
	{
	public:
		std::int32_t a, b, c, d, e, f, g, h;
	public:
		Vector8i32() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
			const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h) noexcept;
		// copy
		Vector8i32(const Vector8i32& other) noexcept;
		Vector8i32& operator=(const Vector8i32& other) noexcept;
		// move
		Vector8i32(Vector8i32&& other) noexcept;
		Vector8i32& operator=(Vector8i32&& other) noexcept;
		// assignment
		Vector8i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector8i32 operator+(const Vector8i32& v) const noexcept;
		Vector8i32 operator-(const Vector8i32& v) const noexcept;
		Vector8i32 operator*(const Vector8i32& v) const noexcept;
		Vector8i32 operator/(const Vector8i32& v) const noexcept;
		
		Vector8i32 operator+(const std::int32_t number) const noexcept;
		Vector8i32 operator-(const std::int32_t number) const noexcept;
		Vector8i32 operator*(const std::int32_t number) const noexcept;
		Vector8i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector8i32& operator++ () noexcept;		// prefix increment
		Vector8i32& operator-- () noexcept;		// prefix decrement
		Vector8i32  operator++ (int) noexcept;		// postfix increment
		Vector8i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8i32& operator+= (const Vector8i32& right) noexcept;
		Vector8i32& operator-= (const Vector8i32& right) noexcept;
		Vector8i32& operator*= (const Vector8i32& right) noexcept;
		Vector8i32& operator/= (const Vector8i32& right) noexcept;
		
		Vector8i32& operator+= (const std::int32_t number) noexcept;
		Vector8i32& operator-= (const std::int32_t number) noexcept;
		Vector8i32& operator*= (const std::int32_t number) noexcept;
		Vector8i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8i32& other) const noexcept;
		bool operator<  (const Vector8i32& other) const noexcept;
		bool operator>  (const Vector8i32& other) const noexcept;
		bool operator>= (const Vector8i32& other) const noexcept;
		
		bool operator<  (const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>  (const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8i32& other) const noexcept;
		bool operator!= (const Vector8i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9i32
	{
	public:
		std::int32_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9i32() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
			const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h,
			const std::int32_t i) noexcept;
		// copy
		Vector9i32(const Vector9i32& other) noexcept;
		Vector9i32& operator=(const Vector9i32& other) noexcept;
		// move
		Vector9i32(Vector9i32&& other) noexcept;
		Vector9i32& operator=(Vector9i32&& other) noexcept;
		// assignment
		Vector9i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector9i32 operator+(const Vector9i32& v) const noexcept;
		Vector9i32 operator-(const Vector9i32& v) const noexcept;
		Vector9i32 operator*(const Vector9i32& v) const noexcept;
		Vector9i32 operator/(const Vector9i32& v) const noexcept;
		
		Vector9i32 operator+(const std::int32_t number) const noexcept;
		Vector9i32 operator-(const std::int32_t number) const noexcept;
		Vector9i32 operator*(const std::int32_t number) const noexcept;
		Vector9i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector9i32& operator++ () noexcept;		// prefix increment
		Vector9i32& operator-- () noexcept;		// prefix decrement
		Vector9i32  operator++ (int) noexcept;		// postfix increment
		Vector9i32  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9i32& operator+= (const Vector9i32& right) noexcept;
		Vector9i32& operator-= (const Vector9i32& right) noexcept;
		Vector9i32& operator*= (const Vector9i32& right) noexcept;
		Vector9i32& operator/= (const Vector9i32& right) noexcept;
		
		Vector9i32& operator+= (const std::int32_t number) noexcept;
		Vector9i32& operator-= (const std::int32_t number) noexcept;
		Vector9i32& operator*= (const std::int32_t number) noexcept;
		Vector9i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9i32& other) const noexcept;
		bool operator<  (const Vector9i32& other) const noexcept;
		bool operator>  (const Vector9i32& other) const noexcept;
		bool operator>= (const Vector9i32& other) const noexcept;
		
		bool operator<  (const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>  (const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9i32& other) const noexcept;
		bool operator!= (const Vector9i32& other) const noexcept;
		bool operator== (const std::int32_t number)  const noexcept;
		bool operator!= (const std::int32_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10i32
	{
	public:
		std::int32_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10i32() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10i32(const std::int32_t a, const std::int32_t b, const std::int32_t c, const std::int32_t d,
			const std::int32_t e, const std::int32_t f, const std::int32_t g, const std::int32_t h,
			const std::int32_t i, const std::int32_t j) noexcept;
		// copy
		Vector10i32(const Vector10i32& other) noexcept;
		Vector10i32& operator=(const Vector10i32& other) noexcept;
		// move
		Vector10i32(Vector10i32&& other) noexcept;
		Vector10i32& operator=(Vector10i32&& other) noexcept;
		// assignment
		Vector10i32& operator=(const std::int32_t number) noexcept;
		
		// math operator
		Vector10i32 operator+(const Vector10i32& v) const noexcept;
		Vector10i32 operator-(const Vector10i32& v) const noexcept;
		Vector10i32 operator*(const Vector10i32& v) const noexcept;
		Vector10i32 operator/(const Vector10i32& v) const noexcept;
		
		Vector10i32 operator+(const std::int32_t number) const noexcept;
		Vector10i32 operator-(const std::int32_t number) const noexcept;
		Vector10i32 operator*(const std::int32_t number) const noexcept;
		Vector10i32 operator/(const std::int32_t number) const noexcept;
		
		// increment / decrement
		Vector10i32& operator++ () noexcept;		// prefix increment
		Vector10i32& operator-- () noexcept;		// prefix decrement
		Vector10i32  operator++ (int) noexcept;	// postfix increment
		Vector10i32  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10i32& operator+= (const Vector10i32& right) noexcept;
		Vector10i32& operator-= (const Vector10i32& right) noexcept;
		Vector10i32& operator*= (const Vector10i32& right) noexcept;
		Vector10i32& operator/= (const Vector10i32& right) noexcept;
		
		Vector10i32& operator+= (const std::int32_t number) noexcept;
		Vector10i32& operator-= (const std::int32_t number) noexcept;
		Vector10i32& operator*= (const std::int32_t number) noexcept;
		Vector10i32& operator/= (const std::int32_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10i32& other) const noexcept;
		bool operator<  (const Vector10i32& other) const noexcept;
		bool operator>  (const Vector10i32& other) const noexcept;
		bool operator>= (const Vector10i32& other) const noexcept;

		bool operator<  (const std::int32_t number) const noexcept;
		bool operator<= (const std::int32_t number) const noexcept;
		bool operator>  (const std::int32_t number) const noexcept;
		bool operator>= (const std::int32_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10i32& other) const noexcept;
		bool operator!= (const Vector10i32& other) const noexcept;
		bool operator== (const std::int32_t number)   const noexcept;
		bool operator!= (const std::int32_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int32_t stnd_value = 0) noexcept;
		std::int32_t& operator[](const std::uint8_t index) noexcept;
		std::int32_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2i32& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3i32& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10i32& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
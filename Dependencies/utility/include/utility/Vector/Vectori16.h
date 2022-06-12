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

		Type : std::int16_t
		Bytes: 2
		Range: -32.768 to 32.767
	*/

	class Vector2i16
	{
	public:
		std::int16_t x, y;
	public:
		Vector2i16() noexcept : x(0), y(0) {}
		Vector2i16(const std::int16_t x, const std::int16_t y) noexcept;
		// copy
		Vector2i16(const Vector2i16& other) noexcept;
		Vector2i16& operator=(const Vector2i16& other) noexcept;
		// move
		Vector2i16(Vector2i16&& other) noexcept;
		Vector2i16& operator=(Vector2i16&& other) noexcept;
		// assignment
		Vector2i16& operator=(const std::int16_t number) noexcept;

		// math operator
		Vector2i16 operator+(const Vector2i16& v) const noexcept;
		Vector2i16 operator-(const Vector2i16& v) const noexcept;
		Vector2i16 operator*(const Vector2i16& v) const noexcept;
		Vector2i16 operator/(const Vector2i16& v) const noexcept;

		Vector2i16 operator+(const std::int16_t number) const noexcept;
		Vector2i16 operator-(const std::int16_t number) const noexcept;
		Vector2i16 operator*(const std::int16_t number) const noexcept;
		Vector2i16 operator/(const std::int16_t number) const noexcept;

		// increment / decrement
		Vector2i16& operator++ () noexcept;		// prefix increment
		Vector2i16& operator-- () noexcept;		// prefix decrement
		Vector2i16  operator++ (int) noexcept;		// postfix increment
		Vector2i16  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2i16& operator+= (const Vector2i16& right) noexcept;
		Vector2i16& operator-= (const Vector2i16& right) noexcept;
		Vector2i16& operator*= (const Vector2i16& right) noexcept;
		Vector2i16& operator/= (const Vector2i16& right) noexcept;

		Vector2i16& operator+= (const std::int16_t number) noexcept;
		Vector2i16& operator-= (const std::int16_t number) noexcept;
		Vector2i16& operator*= (const std::int16_t number) noexcept;
		Vector2i16& operator/= (const std::int16_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2i16& other) const noexcept;
		bool operator<= (const Vector2i16& other) const noexcept;
		bool operator>	(const Vector2i16& other) const noexcept;
		bool operator>= (const Vector2i16& other) const noexcept;

		bool operator<	(const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>	(const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2i16& other) const noexcept;
		bool operator!= (const Vector2i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3i16
	{
	public:
		std::int16_t x, y, z;
	public:
		Vector3i16() : x(0), y(0), z(0) {}
		Vector3i16(const std::int16_t x, const std::int16_t y, const std::int16_t z) noexcept;
		// copy
		Vector3i16(const Vector3i16& other) noexcept;
		Vector3i16& operator=(const Vector3i16& other) noexcept;
		// move
		Vector3i16(Vector3i16&& other) noexcept;
		Vector3i16& operator=(Vector3i16&& other) noexcept;
		// assignment
		Vector3i16& operator=(const std::int16_t number) noexcept;

		// math operator
		Vector3i16 operator+(const Vector3i16& v) const noexcept;
		Vector3i16 operator-(const Vector3i16& v) const noexcept;
		Vector3i16 operator*(const Vector3i16& v) const noexcept;
		Vector3i16 operator/(const Vector3i16& v) const noexcept;

		Vector3i16 operator+(const std::int16_t number) const noexcept;
		Vector3i16 operator-(const std::int16_t number) const noexcept;
		Vector3i16 operator*(const std::int16_t number) const noexcept;
		Vector3i16 operator/(const std::int16_t number) const noexcept;

		// increment / decrement
		Vector3i16& operator++ () noexcept;		// prefix increment
		Vector3i16& operator-- () noexcept;		// prefix decrement
		Vector3i16  operator++ (int) noexcept;		// postfix increment
		Vector3i16  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3i16& operator+= (const Vector3i16& right) noexcept;
		Vector3i16& operator-= (const Vector3i16& right) noexcept;
		Vector3i16& operator*= (const Vector3i16& right) noexcept;
		Vector3i16& operator/= (const Vector3i16& right) noexcept;

		Vector3i16& operator+= (const std::int16_t number) noexcept;
		Vector3i16& operator-= (const std::int16_t number) noexcept;
		Vector3i16& operator*= (const std::int16_t number) noexcept;
		Vector3i16& operator/= (const std::int16_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3i16& other) const noexcept;
		bool operator<= (const Vector3i16& other) const noexcept;
		bool operator>  (const Vector3i16& other) const noexcept;
		bool operator>= (const Vector3i16& other) const noexcept;
		 
		bool operator<	(const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>	(const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3i16& other) const noexcept;
		bool operator!= (const Vector3i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4i16
	{
	public:
		std::int16_t a, b, c, d;
	public:
		Vector4i16() : a(0), b(0), c(0), d(0) {}
		Vector4i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d) noexcept;
		// copy
		Vector4i16(const Vector4i16& other) noexcept;
		Vector4i16& operator=(const Vector4i16& other) noexcept;
		// move
		Vector4i16(Vector4i16&& other) noexcept;
		Vector4i16& operator=(Vector4i16&& other) noexcept;
		// assignment
		Vector4i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector4i16 operator+(const Vector4i16& v) const noexcept;
		Vector4i16 operator-(const Vector4i16& v) const noexcept;
		Vector4i16 operator*(const Vector4i16& v) const noexcept;
		Vector4i16 operator/(const Vector4i16& v) const noexcept;
		
		Vector4i16 operator+(const std::int16_t number) const noexcept;
		Vector4i16 operator-(const std::int16_t number) const noexcept;
		Vector4i16 operator*(const std::int16_t number) const noexcept;
		Vector4i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector4i16& operator++ () noexcept;		// prefix increment
		Vector4i16& operator-- () noexcept;		// prefix decrement
		Vector4i16  operator++ (int) noexcept;		// postfix increment
		Vector4i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4i16& operator+= (const Vector4i16& right) noexcept;
		Vector4i16& operator-= (const Vector4i16& right) noexcept;
		Vector4i16& operator*= (const Vector4i16& right) noexcept;
		Vector4i16& operator/= (const Vector4i16& right) noexcept;
		
		Vector4i16& operator+= (const std::int16_t number) noexcept;
		Vector4i16& operator-= (const std::int16_t number) noexcept;
		Vector4i16& operator*= (const std::int16_t number) noexcept;
		Vector4i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4i16& other) const noexcept;
		bool operator<= (const Vector4i16& other) const noexcept;
		bool operator>	(const Vector4i16& other) const noexcept;
		bool operator>= (const Vector4i16& other) const noexcept;
		
		bool operator<	(const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>	(const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4i16& other) const noexcept;
		bool operator!= (const Vector4i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5i16
	{
	public:
		std::int16_t a, b, c, d, e;
	public:
		Vector5i16() : a(0), b(0), c(0), d(0), e(0) {}
		Vector5i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d, const std::int16_t e) noexcept;
		// copy
		Vector5i16(const Vector5i16& other) noexcept;
		Vector5i16& operator=(const Vector5i16& other) noexcept;
		// move
		Vector5i16(Vector5i16&& other) noexcept;
		Vector5i16& operator=(Vector5i16&& other) noexcept;
		// assignment
		Vector5i16& operator=(const std::int16_t number) noexcept;
		 
		// math operator
		Vector5i16 operator+(const Vector5i16& v) const noexcept;
		Vector5i16 operator-(const Vector5i16& v) const noexcept;
		Vector5i16 operator*(const Vector5i16& v) const noexcept;
		Vector5i16 operator/(const Vector5i16& v) const noexcept;
		
		Vector5i16 operator+(const std::int16_t number) const noexcept;
		Vector5i16 operator-(const std::int16_t number) const noexcept;
		Vector5i16 operator*(const std::int16_t number) const noexcept;
		Vector5i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector5i16& operator++ () noexcept;		// prefix increment
		Vector5i16& operator-- () noexcept;		// prefix decrement
		Vector5i16  operator++ (int) noexcept;		// postfix increment
		Vector5i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5i16& operator+= (const Vector5i16& right) noexcept;
		Vector5i16& operator-= (const Vector5i16& right) noexcept;
		Vector5i16& operator*= (const Vector5i16& right) noexcept;
		Vector5i16& operator/= (const Vector5i16& right) noexcept;
		
		Vector5i16& operator+= (const std::int16_t number) noexcept;
		Vector5i16& operator-= (const std::int16_t number) noexcept;
		Vector5i16& operator*= (const std::int16_t number) noexcept;
		Vector5i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5i16& other) const noexcept;
		bool operator<= (const Vector5i16& other) const noexcept;
		bool operator>	(const Vector5i16& other) const noexcept;
		bool operator>= (const Vector5i16& other) const noexcept;
		
		bool operator<	(const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>	(const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5i16& other) const noexcept;
		bool operator!= (const Vector5i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6i16
	{
	public:
		std::int16_t a, b, c, d, e, f;
	public:
		Vector6i16() : a(0), b(0), c(0), d(0), e(0), f(0) {}
		Vector6i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f) noexcept;
		// copy
		Vector6i16(const Vector6i16& other) noexcept;
		Vector6i16& operator=(const Vector6i16& other) noexcept;
		// move
		Vector6i16(Vector6i16&& other) noexcept;
		Vector6i16& operator=(Vector6i16&& other) noexcept;
		// assignment
		Vector6i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector6i16 operator+(const Vector6i16& v) const noexcept;
		Vector6i16 operator-(const Vector6i16& v) const noexcept;
		Vector6i16 operator*(const Vector6i16& v) const noexcept;
		Vector6i16 operator/(const Vector6i16& v) const noexcept;
		
		Vector6i16 operator+(const std::int16_t number) const noexcept;
		Vector6i16 operator-(const std::int16_t number) const noexcept;
		Vector6i16 operator*(const std::int16_t number) const noexcept;
		Vector6i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector6i16& operator++ () noexcept;		// prefix increment
		Vector6i16& operator-- () noexcept;		// prefix decrement
		Vector6i16  operator++ (int) noexcept;		// postfix increment
		Vector6i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6i16& operator+= (const Vector6i16& right) noexcept;
		Vector6i16& operator-= (const Vector6i16& right) noexcept;
		Vector6i16& operator*= (const Vector6i16& right) noexcept;
		Vector6i16& operator/= (const Vector6i16& right) noexcept;
		
		Vector6i16& operator+= (const std::int16_t number) noexcept;
		Vector6i16& operator-= (const std::int16_t number) noexcept;
		Vector6i16& operator*= (const std::int16_t number) noexcept;
		Vector6i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6i16& other) const noexcept;
		bool operator<  (const Vector6i16& other) const noexcept;
		bool operator>  (const Vector6i16& other) const noexcept;
		bool operator>= (const Vector6i16& other) const noexcept;
		
		bool operator<  (const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>  (const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6i16& other) const noexcept;
		bool operator!= (const Vector6i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7i16
	{
	public:
		std::int16_t a, b, c, d, e, f, g;
	public:
		Vector7i16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
		Vector7i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g) noexcept;
		// copy
		Vector7i16(const Vector7i16& other) noexcept;
		Vector7i16& operator=(const Vector7i16& other) noexcept;
		// move
		Vector7i16(Vector7i16&& other) noexcept;
		Vector7i16& operator=(Vector7i16&& other) noexcept;
		// assignment
		Vector7i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector7i16 operator+(const Vector7i16& v) const noexcept;
		Vector7i16 operator-(const Vector7i16& v) const noexcept;
		Vector7i16 operator*(const Vector7i16& v) const noexcept;
		Vector7i16 operator/(const Vector7i16& v) const noexcept;
		
		Vector7i16 operator+(const std::int16_t number) const noexcept;
		Vector7i16 operator-(const std::int16_t number) const noexcept;
		Vector7i16 operator*(const std::int16_t number) const noexcept;
		Vector7i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector7i16& operator++ () noexcept;		// prefix increment
		Vector7i16& operator-- () noexcept;		// prefix decrement
		Vector7i16  operator++ (int) noexcept;		// postfix increment
		Vector7i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7i16& operator+= (const Vector7i16& right) noexcept;
		Vector7i16& operator-= (const Vector7i16& right) noexcept;
		Vector7i16& operator*= (const Vector7i16& right) noexcept;
		Vector7i16& operator/= (const Vector7i16& right) noexcept;
		
		Vector7i16& operator+= (const std::int16_t number) noexcept;
		Vector7i16& operator-= (const std::int16_t number) noexcept;
		Vector7i16& operator*= (const std::int16_t number) noexcept;
		Vector7i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7i16& other) const noexcept;
		bool operator<  (const Vector7i16& other) const noexcept;
		bool operator>  (const Vector7i16& other) const noexcept;
		bool operator>= (const Vector7i16& other) const noexcept;
		
		bool operator<  (const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>  (const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7i16& other) const noexcept;
		bool operator!= (const Vector7i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8i16
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h;
	public:
		Vector8i16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0) {}
		Vector8i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h) noexcept;
		// copy
		Vector8i16(const Vector8i16& other) noexcept;
		Vector8i16& operator=(const Vector8i16& other) noexcept;
		// move
		Vector8i16(Vector8i16&& other) noexcept;
		Vector8i16& operator=(Vector8i16&& other) noexcept;
		// assignment
		Vector8i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector8i16 operator+(const Vector8i16& v) const noexcept;
		Vector8i16 operator-(const Vector8i16& v) const noexcept;
		Vector8i16 operator*(const Vector8i16& v) const noexcept;
		Vector8i16 operator/(const Vector8i16& v) const noexcept;
		
		Vector8i16 operator+(const std::int16_t number) const noexcept;
		Vector8i16 operator-(const std::int16_t number) const noexcept;
		Vector8i16 operator*(const std::int16_t number) const noexcept;
		Vector8i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector8i16& operator++ () noexcept;		// prefix increment
		Vector8i16& operator-- () noexcept;		// prefix decrement
		Vector8i16  operator++ (int) noexcept;		// postfix increment
		Vector8i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8i16& operator+= (const Vector8i16& right) noexcept;
		Vector8i16& operator-= (const Vector8i16& right) noexcept;
		Vector8i16& operator*= (const Vector8i16& right) noexcept;
		Vector8i16& operator/= (const Vector8i16& right) noexcept;
		
		Vector8i16& operator+= (const std::int16_t number) noexcept;
		Vector8i16& operator-= (const std::int16_t number) noexcept;
		Vector8i16& operator*= (const std::int16_t number) noexcept;
		Vector8i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8i16& other) const noexcept;
		bool operator<  (const Vector8i16& other) const noexcept;
		bool operator>  (const Vector8i16& other) const noexcept;
		bool operator>= (const Vector8i16& other) const noexcept;
		
		bool operator<  (const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>  (const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8i16& other) const noexcept;
		bool operator!= (const Vector8i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9i16
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9i16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
		Vector9i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
			const std::int16_t i) noexcept;
		// copy
		Vector9i16(const Vector9i16& other) noexcept;
		Vector9i16& operator=(const Vector9i16& other) noexcept;
		// move
		Vector9i16(Vector9i16&& other) noexcept;
		Vector9i16& operator=(Vector9i16&& other) noexcept;
		// assignment
		Vector9i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector9i16 operator+(const Vector9i16& v) const noexcept;
		Vector9i16 operator-(const Vector9i16& v) const noexcept;
		Vector9i16 operator*(const Vector9i16& v) const noexcept;
		Vector9i16 operator/(const Vector9i16& v) const noexcept;
		
		Vector9i16 operator+(const std::int16_t number) const noexcept;
		Vector9i16 operator-(const std::int16_t number) const noexcept;
		Vector9i16 operator*(const std::int16_t number) const noexcept;
		Vector9i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector9i16& operator++ () noexcept;		// prefix increment
		Vector9i16& operator-- () noexcept;		// prefix decrement
		Vector9i16  operator++ (int) noexcept;		// postfix increment
		Vector9i16  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9i16& operator+= (const Vector9i16& right) noexcept;
		Vector9i16& operator-= (const Vector9i16& right) noexcept;
		Vector9i16& operator*= (const Vector9i16& right) noexcept;
		Vector9i16& operator/= (const Vector9i16& right) noexcept;
		
		Vector9i16& operator+= (const std::int16_t number) noexcept;
		Vector9i16& operator-= (const std::int16_t number) noexcept;
		Vector9i16& operator*= (const std::int16_t number) noexcept;
		Vector9i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9i16& other) const noexcept;
		bool operator<  (const Vector9i16& other) const noexcept;
		bool operator>  (const Vector9i16& other) const noexcept;
		bool operator>= (const Vector9i16& other) const noexcept;
		
		bool operator<  (const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>  (const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9i16& other) const noexcept;
		bool operator!= (const Vector9i16& other) const noexcept;
		bool operator== (const std::int16_t number)  const noexcept;
		bool operator!= (const std::int16_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10i16
	{
	public:
		std::int16_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10i16() : a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0), j(0) {}
		Vector10i16(const std::int16_t a, const std::int16_t b, const std::int16_t c, const std::int16_t d,
			const std::int16_t e, const std::int16_t f, const std::int16_t g, const std::int16_t h,
			const std::int16_t i, const std::int16_t j) noexcept;
		// copy
		Vector10i16(const Vector10i16& other) noexcept;
		Vector10i16& operator=(const Vector10i16& other) noexcept;
		// move
		Vector10i16(Vector10i16&& other) noexcept;
		Vector10i16& operator=(Vector10i16&& other) noexcept;
		// assignment
		Vector10i16& operator=(const std::int16_t number) noexcept;
		
		// math operator
		Vector10i16 operator+(const Vector10i16& v) const noexcept;
		Vector10i16 operator-(const Vector10i16& v) const noexcept;
		Vector10i16 operator*(const Vector10i16& v) const noexcept;
		Vector10i16 operator/(const Vector10i16& v) const noexcept;
		
		Vector10i16 operator+(const std::int16_t number) const noexcept;
		Vector10i16 operator-(const std::int16_t number) const noexcept;
		Vector10i16 operator*(const std::int16_t number) const noexcept;
		Vector10i16 operator/(const std::int16_t number) const noexcept;
		
		// increment / decrement
		Vector10i16& operator++ () noexcept;		// prefix increment
		Vector10i16& operator-- () noexcept;		// prefix decrement
		Vector10i16  operator++ (int) noexcept;	// postfix increment
		Vector10i16  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10i16& operator+= (const Vector10i16& right) noexcept;
		Vector10i16& operator-= (const Vector10i16& right) noexcept;
		Vector10i16& operator*= (const Vector10i16& right) noexcept;
		Vector10i16& operator/= (const Vector10i16& right) noexcept;
		
		Vector10i16& operator+= (const std::int16_t number) noexcept;
		Vector10i16& operator-= (const std::int16_t number) noexcept;
		Vector10i16& operator*= (const std::int16_t number) noexcept;
		Vector10i16& operator/= (const std::int16_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10i16& other) const noexcept;
		bool operator<  (const Vector10i16& other) const noexcept;
		bool operator>  (const Vector10i16& other) const noexcept;
		bool operator>= (const Vector10i16& other) const noexcept;

		bool operator<  (const std::int16_t number) const noexcept;
		bool operator<= (const std::int16_t number) const noexcept;
		bool operator>  (const std::int16_t number) const noexcept;
		bool operator>= (const std::int16_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10i16& other) const noexcept;
		bool operator!= (const Vector10i16& other) const noexcept;
		bool operator== (const std::int16_t number)   const noexcept;
		bool operator!= (const std::int16_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int16_t stnd_value = 0) noexcept;
		std::int16_t& operator[](const std::uint8_t index) noexcept;
		std::int16_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2i16& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3i16& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10i16& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
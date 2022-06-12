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

		Type : std::int64_t
		Bytes: 8
		Range: -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807
	*/

	class Vector2i64
	{
	public:
		std::int64_t x, y;
	public:
		Vector2i64() noexcept : x(0ll), y(0ll) {}
		Vector2i64(const std::int64_t x, const std::int64_t y) noexcept;
		// copy
		Vector2i64(const Vector2i64& other) noexcept;
		Vector2i64& operator=(const Vector2i64& other) noexcept;
		// move
		Vector2i64(Vector2i64&& other) noexcept;
		Vector2i64& operator=(Vector2i64&& other) noexcept;
		// assignment
		Vector2i64& operator=(const std::int64_t number) noexcept;

		// math operator
		Vector2i64 operator+(const Vector2i64& v) const noexcept;
		Vector2i64 operator-(const Vector2i64& v) const noexcept;
		Vector2i64 operator*(const Vector2i64& v) const noexcept;
		Vector2i64 operator/(const Vector2i64& v) const noexcept;

		Vector2i64 operator+(const std::int64_t number) const noexcept;
		Vector2i64 operator-(const std::int64_t number) const noexcept;
		Vector2i64 operator*(const std::int64_t number) const noexcept;
		Vector2i64 operator/(const std::int64_t number) const noexcept;

		// increment / decrement
		Vector2i64& operator++ () noexcept;		// prefix increment
		Vector2i64& operator-- () noexcept;		// prefix decrement
		Vector2i64  operator++ (int) noexcept;		// postfix increment
		Vector2i64  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2i64& operator+= (const Vector2i64& right) noexcept;
		Vector2i64& operator-= (const Vector2i64& right) noexcept;
		Vector2i64& operator*= (const Vector2i64& right) noexcept;
		Vector2i64& operator/= (const Vector2i64& right) noexcept;

		Vector2i64& operator+= (const std::int64_t number) noexcept;
		Vector2i64& operator-= (const std::int64_t number) noexcept;
		Vector2i64& operator*= (const std::int64_t number) noexcept;
		Vector2i64& operator/= (const std::int64_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2i64& other) const noexcept;
		bool operator<= (const Vector2i64& other) const noexcept;
		bool operator>	(const Vector2i64& other) const noexcept;
		bool operator>= (const Vector2i64& other) const noexcept;

		bool operator<	(const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>	(const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2i64& other) const noexcept;
		bool operator!= (const Vector2i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3i64
	{
	public:
		std::int64_t x, y, z;
	public:
		Vector3i64() : x(0ll), y(0ll), z(0ll) {}
		Vector3i64(const std::int64_t x, const std::int64_t y, const std::int64_t z) noexcept;
		// copy
		Vector3i64(const Vector3i64& other) noexcept;
		Vector3i64& operator=(const Vector3i64& other) noexcept;
		// move
		Vector3i64(Vector3i64&& other) noexcept;
		Vector3i64& operator=(Vector3i64&& other) noexcept;
		// assignment
		Vector3i64& operator=(const std::int64_t number) noexcept;

		// math operator
		Vector3i64 operator+(const Vector3i64& v) const noexcept;
		Vector3i64 operator-(const Vector3i64& v) const noexcept;
		Vector3i64 operator*(const Vector3i64& v) const noexcept;
		Vector3i64 operator/(const Vector3i64& v) const noexcept;

		Vector3i64 operator+(const std::int64_t number) const noexcept;
		Vector3i64 operator-(const std::int64_t number) const noexcept;
		Vector3i64 operator*(const std::int64_t number) const noexcept;
		Vector3i64 operator/(const std::int64_t number) const noexcept;

		// increment / decrement
		Vector3i64& operator++ () noexcept;		// prefix increment
		Vector3i64& operator-- () noexcept;		// prefix decrement
		Vector3i64  operator++ (int) noexcept;		// postfix increment
		Vector3i64  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3i64& operator+= (const Vector3i64& right) noexcept;
		Vector3i64& operator-= (const Vector3i64& right) noexcept;
		Vector3i64& operator*= (const Vector3i64& right) noexcept;
		Vector3i64& operator/= (const Vector3i64& right) noexcept;

		Vector3i64& operator+= (const std::int64_t number) noexcept;
		Vector3i64& operator-= (const std::int64_t number) noexcept;
		Vector3i64& operator*= (const std::int64_t number) noexcept;
		Vector3i64& operator/= (const std::int64_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3i64& other) const noexcept;
		bool operator<= (const Vector3i64& other) const noexcept;
		bool operator>  (const Vector3i64& other) const noexcept;
		bool operator>= (const Vector3i64& other) const noexcept;
		 
		bool operator<	(const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>	(const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3i64& other) const noexcept;
		bool operator!= (const Vector3i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4i64
	{
	public:
		std::int64_t a, b, c, d;
	public:
		Vector4i64() : a(0ll), b(0ll), c(0ll), d(0ll) {}
		Vector4i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d) noexcept;
		// copy
		Vector4i64(const Vector4i64& other) noexcept;
		Vector4i64& operator=(const Vector4i64& other) noexcept;
		// move
		Vector4i64(Vector4i64&& other) noexcept;
		Vector4i64& operator=(Vector4i64&& other) noexcept;
		// assignment
		Vector4i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector4i64 operator+(const Vector4i64& v) const noexcept;
		Vector4i64 operator-(const Vector4i64& v) const noexcept;
		Vector4i64 operator*(const Vector4i64& v) const noexcept;
		Vector4i64 operator/(const Vector4i64& v) const noexcept;
		
		Vector4i64 operator+(const std::int64_t number) const noexcept;
		Vector4i64 operator-(const std::int64_t number) const noexcept;
		Vector4i64 operator*(const std::int64_t number) const noexcept;
		Vector4i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector4i64& operator++ () noexcept;		// prefix increment
		Vector4i64& operator-- () noexcept;		// prefix decrement
		Vector4i64  operator++ (int) noexcept;		// postfix increment
		Vector4i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4i64& operator+= (const Vector4i64& right) noexcept;
		Vector4i64& operator-= (const Vector4i64& right) noexcept;
		Vector4i64& operator*= (const Vector4i64& right) noexcept;
		Vector4i64& operator/= (const Vector4i64& right) noexcept;
		
		Vector4i64& operator+= (const std::int64_t number) noexcept;
		Vector4i64& operator-= (const std::int64_t number) noexcept;
		Vector4i64& operator*= (const std::int64_t number) noexcept;
		Vector4i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4i64& other) const noexcept;
		bool operator<= (const Vector4i64& other) const noexcept;
		bool operator>	(const Vector4i64& other) const noexcept;
		bool operator>= (const Vector4i64& other) const noexcept;
		
		bool operator<	(const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>	(const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4i64& other) const noexcept;
		bool operator!= (const Vector4i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5i64
	{
	public:
		std::int64_t a, b, c, d, e;
	public:
		Vector5i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll) {}
		Vector5i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d, const std::int64_t e) noexcept;
		// copy
		Vector5i64(const Vector5i64& other) noexcept;
		Vector5i64& operator=(const Vector5i64& other) noexcept;
		// move
		Vector5i64(Vector5i64&& other) noexcept;
		Vector5i64& operator=(Vector5i64&& other) noexcept;
		// assignment
		Vector5i64& operator=(const std::int64_t number) noexcept;
		 
		// math operator
		Vector5i64 operator+(const Vector5i64& v) const noexcept;
		Vector5i64 operator-(const Vector5i64& v) const noexcept;
		Vector5i64 operator*(const Vector5i64& v) const noexcept;
		Vector5i64 operator/(const Vector5i64& v) const noexcept;
		
		Vector5i64 operator+(const std::int64_t number) const noexcept;
		Vector5i64 operator-(const std::int64_t number) const noexcept;
		Vector5i64 operator*(const std::int64_t number) const noexcept;
		Vector5i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector5i64& operator++ () noexcept;		// prefix increment
		Vector5i64& operator-- () noexcept;		// prefix decrement
		Vector5i64  operator++ (int) noexcept;		// postfix increment
		Vector5i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5i64& operator+= (const Vector5i64& right) noexcept;
		Vector5i64& operator-= (const Vector5i64& right) noexcept;
		Vector5i64& operator*= (const Vector5i64& right) noexcept;
		Vector5i64& operator/= (const Vector5i64& right) noexcept;
		
		Vector5i64& operator+= (const std::int64_t number) noexcept;
		Vector5i64& operator-= (const std::int64_t number) noexcept;
		Vector5i64& operator*= (const std::int64_t number) noexcept;
		Vector5i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5i64& other) const noexcept;
		bool operator<= (const Vector5i64& other) const noexcept;
		bool operator>	(const Vector5i64& other) const noexcept;
		bool operator>= (const Vector5i64& other) const noexcept;
		
		bool operator<	(const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>	(const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5i64& other) const noexcept;
		bool operator!= (const Vector5i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6i64
	{
	public:
		std::int64_t a, b, c, d, e, f;
	public:
		Vector6i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll), f(0ll) {}
		Vector6i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d,
			const std::int64_t e, const std::int64_t f) noexcept;
		// copy
		Vector6i64(const Vector6i64& other) noexcept;
		Vector6i64& operator=(const Vector6i64& other) noexcept;
		// move
		Vector6i64(Vector6i64&& other) noexcept;
		Vector6i64& operator=(Vector6i64&& other) noexcept;
		// assignment
		Vector6i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector6i64 operator+(const Vector6i64& v) const noexcept;
		Vector6i64 operator-(const Vector6i64& v) const noexcept;
		Vector6i64 operator*(const Vector6i64& v) const noexcept;
		Vector6i64 operator/(const Vector6i64& v) const noexcept;
		
		Vector6i64 operator+(const std::int64_t number) const noexcept;
		Vector6i64 operator-(const std::int64_t number) const noexcept;
		Vector6i64 operator*(const std::int64_t number) const noexcept;
		Vector6i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector6i64& operator++ () noexcept;		// prefix increment
		Vector6i64& operator-- () noexcept;		// prefix decrement
		Vector6i64  operator++ (int) noexcept;		// postfix increment
		Vector6i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6i64& operator+= (const Vector6i64& right) noexcept;
		Vector6i64& operator-= (const Vector6i64& right) noexcept;
		Vector6i64& operator*= (const Vector6i64& right) noexcept;
		Vector6i64& operator/= (const Vector6i64& right) noexcept;
		
		Vector6i64& operator+= (const std::int64_t number) noexcept;
		Vector6i64& operator-= (const std::int64_t number) noexcept;
		Vector6i64& operator*= (const std::int64_t number) noexcept;
		Vector6i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6i64& other) const noexcept;
		bool operator<  (const Vector6i64& other) const noexcept;
		bool operator>  (const Vector6i64& other) const noexcept;
		bool operator>= (const Vector6i64& other) const noexcept;
		
		bool operator<  (const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>  (const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6i64& other) const noexcept;
		bool operator!= (const Vector6i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7i64
	{
	public:
		std::int64_t a, b, c, d, e, f, g;
	public:
		Vector7i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll), f(0ll), g(0ll) {}
		Vector7i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d,
			const std::int64_t e, const std::int64_t f, const std::int64_t g) noexcept;
		// copy
		Vector7i64(const Vector7i64& other) noexcept;
		Vector7i64& operator=(const Vector7i64& other) noexcept;
		// move
		Vector7i64(Vector7i64&& other) noexcept;
		Vector7i64& operator=(Vector7i64&& other) noexcept;
		// assignment
		Vector7i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector7i64 operator+(const Vector7i64& v) const noexcept;
		Vector7i64 operator-(const Vector7i64& v) const noexcept;
		Vector7i64 operator*(const Vector7i64& v) const noexcept;
		Vector7i64 operator/(const Vector7i64& v) const noexcept;
		
		Vector7i64 operator+(const std::int64_t number) const noexcept;
		Vector7i64 operator-(const std::int64_t number) const noexcept;
		Vector7i64 operator*(const std::int64_t number) const noexcept;
		Vector7i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector7i64& operator++ () noexcept;		// prefix increment
		Vector7i64& operator-- () noexcept;		// prefix decrement
		Vector7i64  operator++ (int) noexcept;		// postfix increment
		Vector7i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7i64& operator+= (const Vector7i64& right) noexcept;
		Vector7i64& operator-= (const Vector7i64& right) noexcept;
		Vector7i64& operator*= (const Vector7i64& right) noexcept;
		Vector7i64& operator/= (const Vector7i64& right) noexcept;
		
		Vector7i64& operator+= (const std::int64_t number) noexcept;
		Vector7i64& operator-= (const std::int64_t number) noexcept;
		Vector7i64& operator*= (const std::int64_t number) noexcept;
		Vector7i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7i64& other) const noexcept;
		bool operator<  (const Vector7i64& other) const noexcept;
		bool operator>  (const Vector7i64& other) const noexcept;
		bool operator>= (const Vector7i64& other) const noexcept;
		
		bool operator<  (const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>  (const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7i64& other) const noexcept;
		bool operator!= (const Vector7i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8i64
	{
	public:
		std::int64_t a, b, c, d, e, f, g, h;
	public:
		Vector8i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll), f(0ll), g(0ll), h(0ll) {}
		Vector8i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d,
			const std::int64_t e, const std::int64_t f, const std::int64_t g, const std::int64_t h) noexcept;
		// copy
		Vector8i64(const Vector8i64& other) noexcept;
		Vector8i64& operator=(const Vector8i64& other) noexcept;
		// move
		Vector8i64(Vector8i64&& other) noexcept;
		Vector8i64& operator=(Vector8i64&& other) noexcept;
		// assignment
		Vector8i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector8i64 operator+(const Vector8i64& v) const noexcept;
		Vector8i64 operator-(const Vector8i64& v) const noexcept;
		Vector8i64 operator*(const Vector8i64& v) const noexcept;
		Vector8i64 operator/(const Vector8i64& v) const noexcept;
		
		Vector8i64 operator+(const std::int64_t number) const noexcept;
		Vector8i64 operator-(const std::int64_t number) const noexcept;
		Vector8i64 operator*(const std::int64_t number) const noexcept;
		Vector8i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector8i64& operator++ () noexcept;		// prefix increment
		Vector8i64& operator-- () noexcept;		// prefix decrement
		Vector8i64  operator++ (int) noexcept;		// postfix increment
		Vector8i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8i64& operator+= (const Vector8i64& right) noexcept;
		Vector8i64& operator-= (const Vector8i64& right) noexcept;
		Vector8i64& operator*= (const Vector8i64& right) noexcept;
		Vector8i64& operator/= (const Vector8i64& right) noexcept;
		
		Vector8i64& operator+= (const std::int64_t number) noexcept;
		Vector8i64& operator-= (const std::int64_t number) noexcept;
		Vector8i64& operator*= (const std::int64_t number) noexcept;
		Vector8i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8i64& other) const noexcept;
		bool operator<  (const Vector8i64& other) const noexcept;
		bool operator>  (const Vector8i64& other) const noexcept;
		bool operator>= (const Vector8i64& other) const noexcept;
		
		bool operator<  (const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>  (const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8i64& other) const noexcept;
		bool operator!= (const Vector8i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9i64
	{
	public:
		std::int64_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll), f(0ll), g(0ll), h(0ll), i(0ll) {}
		Vector9i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d,
			const std::int64_t e, const std::int64_t f, const std::int64_t g, const std::int64_t h,
			const std::int64_t i) noexcept;
		// copy
		Vector9i64(const Vector9i64& other) noexcept;
		Vector9i64& operator=(const Vector9i64& other) noexcept;
		// move
		Vector9i64(Vector9i64&& other) noexcept;
		Vector9i64& operator=(Vector9i64&& other) noexcept;
		// assignment
		Vector9i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector9i64 operator+(const Vector9i64& v) const noexcept;
		Vector9i64 operator-(const Vector9i64& v) const noexcept;
		Vector9i64 operator*(const Vector9i64& v) const noexcept;
		Vector9i64 operator/(const Vector9i64& v) const noexcept;
		
		Vector9i64 operator+(const std::int64_t number) const noexcept;
		Vector9i64 operator-(const std::int64_t number) const noexcept;
		Vector9i64 operator*(const std::int64_t number) const noexcept;
		Vector9i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector9i64& operator++ () noexcept;		// prefix increment
		Vector9i64& operator-- () noexcept;		// prefix decrement
		Vector9i64  operator++ (int) noexcept;		// postfix increment
		Vector9i64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9i64& operator+= (const Vector9i64& right) noexcept;
		Vector9i64& operator-= (const Vector9i64& right) noexcept;
		Vector9i64& operator*= (const Vector9i64& right) noexcept;
		Vector9i64& operator/= (const Vector9i64& right) noexcept;
		
		Vector9i64& operator+= (const std::int64_t number) noexcept;
		Vector9i64& operator-= (const std::int64_t number) noexcept;
		Vector9i64& operator*= (const std::int64_t number) noexcept;
		Vector9i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9i64& other) const noexcept;
		bool operator<  (const Vector9i64& other) const noexcept;
		bool operator>  (const Vector9i64& other) const noexcept;
		bool operator>= (const Vector9i64& other) const noexcept;
		
		bool operator<  (const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>  (const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9i64& other) const noexcept;
		bool operator!= (const Vector9i64& other) const noexcept;
		bool operator== (const std::int64_t number)  const noexcept;
		bool operator!= (const std::int64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10i64
	{
	public:
		std::int64_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10i64() : a(0ll), b(0ll), c(0ll), d(0ll), e(0ll), f(0ll), g(0ll), h(0ll), i(0ll), j(0ll) {}
		Vector10i64(const std::int64_t a, const std::int64_t b, const std::int64_t c, const std::int64_t d,
			const std::int64_t e, const std::int64_t f, const std::int64_t g, const std::int64_t h,
			const std::int64_t i, const std::int64_t j) noexcept;
		// copy
		Vector10i64(const Vector10i64& other) noexcept;
		Vector10i64& operator=(const Vector10i64& other) noexcept;
		// move
		Vector10i64(Vector10i64&& other) noexcept;
		Vector10i64& operator=(Vector10i64&& other) noexcept;
		// assignment
		Vector10i64& operator=(const std::int64_t number) noexcept;
		
		// math operator
		Vector10i64 operator+(const Vector10i64& v) const noexcept;
		Vector10i64 operator-(const Vector10i64& v) const noexcept;
		Vector10i64 operator*(const Vector10i64& v) const noexcept;
		Vector10i64 operator/(const Vector10i64& v) const noexcept;
		
		Vector10i64 operator+(const std::int64_t number) const noexcept;
		Vector10i64 operator-(const std::int64_t number) const noexcept;
		Vector10i64 operator*(const std::int64_t number) const noexcept;
		Vector10i64 operator/(const std::int64_t number) const noexcept;
		
		// increment / decrement
		Vector10i64& operator++ () noexcept;		// prefix increment
		Vector10i64& operator-- () noexcept;		// prefix decrement
		Vector10i64  operator++ (int) noexcept;	// postfix increment
		Vector10i64  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10i64& operator+= (const Vector10i64& right) noexcept;
		Vector10i64& operator-= (const Vector10i64& right) noexcept;
		Vector10i64& operator*= (const Vector10i64& right) noexcept;
		Vector10i64& operator/= (const Vector10i64& right) noexcept;
		
		Vector10i64& operator+= (const std::int64_t number) noexcept;
		Vector10i64& operator-= (const std::int64_t number) noexcept;
		Vector10i64& operator*= (const std::int64_t number) noexcept;
		Vector10i64& operator/= (const std::int64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10i64& other) const noexcept;
		bool operator<  (const Vector10i64& other) const noexcept;
		bool operator>  (const Vector10i64& other) const noexcept;
		bool operator>= (const Vector10i64& other) const noexcept;

		bool operator<  (const std::int64_t number) const noexcept;
		bool operator<= (const std::int64_t number) const noexcept;
		bool operator>  (const std::int64_t number) const noexcept;
		bool operator>= (const std::int64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10i64& other) const noexcept;
		bool operator!= (const Vector10i64& other) const noexcept;
		bool operator== (const std::int64_t number)   const noexcept;
		bool operator!= (const std::int64_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::int64_t stnd_value = 0ll) noexcept;
		std::int64_t& operator[](const std::uint8_t index) noexcept;
		std::int64_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2i64& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3i64& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10i64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
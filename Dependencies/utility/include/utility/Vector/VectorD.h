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

		Type : std::double_t
		Bytes: 8
		Range: 1.7E +/- 308  precision: (15 digits)
	*/

	class Vector2d
	{
	public:
		std::double_t x, y;
	public:
		Vector2d() noexcept : x(0.0), y(0.0) {}
		Vector2d(const std::double_t x, const std::double_t y) noexcept;
		// copy
		Vector2d(const Vector2d& other) noexcept;
		Vector2d& operator=(const Vector2d& other) noexcept;
		// move
		Vector2d(Vector2d&& other) noexcept;
		Vector2d& operator=(Vector2d&& other) noexcept;
		// assignment
		Vector2d& operator=(const std::double_t number) noexcept;

		// math operator
		Vector2d operator+(const Vector2d& v) const noexcept;
		Vector2d operator-(const Vector2d& v) const noexcept;
		Vector2d operator*(const Vector2d& v) const noexcept;
		Vector2d operator/(const Vector2d& v) const noexcept;

		Vector2d operator+(const std::double_t number) const noexcept;
		Vector2d operator-(const std::double_t number) const noexcept;
		Vector2d operator*(const std::double_t number) const noexcept;
		Vector2d operator/(const std::double_t number) const noexcept;

		// increment / decrement
		Vector2d& operator++ () noexcept;		// prefix increment
		Vector2d& operator-- () noexcept;		// prefix decrement
		Vector2d  operator++ (int) noexcept;		// postfix increment
		Vector2d  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2d& operator+= (const Vector2d& right) noexcept;
		Vector2d& operator-= (const Vector2d& right) noexcept;
		Vector2d& operator*= (const Vector2d& right) noexcept;
		Vector2d& operator/= (const Vector2d& right) noexcept;

		Vector2d& operator+= (const std::double_t number) noexcept;
		Vector2d& operator-= (const std::double_t number) noexcept;
		Vector2d& operator*= (const std::double_t number) noexcept;
		Vector2d& operator/= (const std::double_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2d& other) const noexcept;
		bool operator<= (const Vector2d& other) const noexcept;
		bool operator>	(const Vector2d& other) const noexcept;
		bool operator>= (const Vector2d& other) const noexcept;

		bool operator<	(const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>	(const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2d& other) const noexcept;
		bool operator!= (const Vector2d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3d
	{
	public:
		std::double_t x, y, z;
	public:
		Vector3d() : x(0.0), y(0.0), z(0.0) {}
		Vector3d(const std::double_t x, const std::double_t y, const std::double_t z) noexcept;
		// copy
		Vector3d(const Vector3d& other) noexcept;
		Vector3d& operator=(const Vector3d& other) noexcept;
		// move
		Vector3d(Vector3d&& other) noexcept;
		Vector3d& operator=(Vector3d&& other) noexcept;
		// assignment
		Vector3d& operator=(const std::double_t number) noexcept;

		// math operator
		Vector3d operator+(const Vector3d& v) const noexcept;
		Vector3d operator-(const Vector3d& v) const noexcept;
		Vector3d operator*(const Vector3d& v) const noexcept;
		Vector3d operator/(const Vector3d& v) const noexcept;

		Vector3d operator+(const std::double_t number) const noexcept;
		Vector3d operator-(const std::double_t number) const noexcept;
		Vector3d operator*(const std::double_t number) const noexcept;
		Vector3d operator/(const std::double_t number) const noexcept;

		// increment / decrement
		Vector3d& operator++ () noexcept;		// prefix increment
		Vector3d& operator-- () noexcept;		// prefix decrement
		Vector3d  operator++ (int) noexcept;		// postfix increment
		Vector3d  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3d& operator+= (const Vector3d& right) noexcept;
		Vector3d& operator-= (const Vector3d& right) noexcept;
		Vector3d& operator*= (const Vector3d& right) noexcept;
		Vector3d& operator/= (const Vector3d& right) noexcept;

		Vector3d& operator+= (const std::double_t number) noexcept;
		Vector3d& operator-= (const std::double_t number) noexcept;
		Vector3d& operator*= (const std::double_t number) noexcept;
		Vector3d& operator/= (const std::double_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3d& other) const noexcept;
		bool operator<= (const Vector3d& other) const noexcept;
		bool operator>  (const Vector3d& other) const noexcept;
		bool operator>= (const Vector3d& other) const noexcept;
		 
		bool operator<	(const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>	(const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3d& other) const noexcept;
		bool operator!= (const Vector3d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4d
	{
	public:
		std::double_t a, b, c, d;
	public:
		Vector4d() : a(0.0), b(0.0), c(0.0), d(0.0) {}
		Vector4d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d) noexcept;
		// copy
		Vector4d(const Vector4d& other) noexcept;
		Vector4d& operator=(const Vector4d& other) noexcept;
		// move
		Vector4d(Vector4d&& other) noexcept;
		Vector4d& operator=(Vector4d&& other) noexcept;
		// assignment
		Vector4d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector4d operator+(const Vector4d& v) const noexcept;
		Vector4d operator-(const Vector4d& v) const noexcept;
		Vector4d operator*(const Vector4d& v) const noexcept;
		Vector4d operator/(const Vector4d& v) const noexcept;
		
		Vector4d operator+(const std::double_t number) const noexcept;
		Vector4d operator-(const std::double_t number) const noexcept;
		Vector4d operator*(const std::double_t number) const noexcept;
		Vector4d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector4d& operator++ () noexcept;		// prefix increment
		Vector4d& operator-- () noexcept;		// prefix decrement
		Vector4d  operator++ (int) noexcept;		// postfix increment
		Vector4d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4d& operator+= (const Vector4d& right) noexcept;
		Vector4d& operator-= (const Vector4d& right) noexcept;
		Vector4d& operator*= (const Vector4d& right) noexcept;
		Vector4d& operator/= (const Vector4d& right) noexcept;
		
		Vector4d& operator+= (const std::double_t number) noexcept;
		Vector4d& operator-= (const std::double_t number) noexcept;
		Vector4d& operator*= (const std::double_t number) noexcept;
		Vector4d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4d& other) const noexcept;
		bool operator<= (const Vector4d& other) const noexcept;
		bool operator>	(const Vector4d& other) const noexcept;
		bool operator>= (const Vector4d& other) const noexcept;
		
		bool operator<	(const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>	(const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4d& other) const noexcept;
		bool operator!= (const Vector4d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5d
	{
	public:
		std::double_t a, b, c, d, e;
	public:
		Vector5d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0) {}
		Vector5d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d, const std::double_t e) noexcept;
		// copy
		Vector5d(const Vector5d& other) noexcept;
		Vector5d& operator=(const Vector5d& other) noexcept;
		// move
		Vector5d(Vector5d&& other) noexcept;
		Vector5d& operator=(Vector5d&& other) noexcept;
		// assignment
		Vector5d& operator=(const std::double_t number) noexcept;
		 
		// math operator
		Vector5d operator+(const Vector5d& v) const noexcept;
		Vector5d operator-(const Vector5d& v) const noexcept;
		Vector5d operator*(const Vector5d& v) const noexcept;
		Vector5d operator/(const Vector5d& v) const noexcept;
		
		Vector5d operator+(const std::double_t number) const noexcept;
		Vector5d operator-(const std::double_t number) const noexcept;
		Vector5d operator*(const std::double_t number) const noexcept;
		Vector5d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector5d& operator++ () noexcept;		// prefix increment
		Vector5d& operator-- () noexcept;		// prefix decrement
		Vector5d  operator++ (int) noexcept;		// postfix increment
		Vector5d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5d& operator+= (const Vector5d& right) noexcept;
		Vector5d& operator-= (const Vector5d& right) noexcept;
		Vector5d& operator*= (const Vector5d& right) noexcept;
		Vector5d& operator/= (const Vector5d& right) noexcept;
		
		Vector5d& operator+= (const std::double_t number) noexcept;
		Vector5d& operator-= (const std::double_t number) noexcept;
		Vector5d& operator*= (const std::double_t number) noexcept;
		Vector5d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5d& other) const noexcept;
		bool operator<= (const Vector5d& other) const noexcept;
		bool operator>	(const Vector5d& other) const noexcept;
		bool operator>= (const Vector5d& other) const noexcept;
		
		bool operator<	(const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>	(const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5d& other) const noexcept;
		bool operator!= (const Vector5d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6d
	{
	public:
		std::double_t a, b, c, d, e, f;
	public:
		Vector6d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0), f(0.0) {}
		Vector6d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
			const std::double_t e, const std::double_t f) noexcept;
		// copy
		Vector6d(const Vector6d& other) noexcept;
		Vector6d& operator=(const Vector6d& other) noexcept;
		// move
		Vector6d(Vector6d&& other) noexcept;
		Vector6d& operator=(Vector6d&& other) noexcept;
		// assignment
		Vector6d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector6d operator+(const Vector6d& v) const noexcept;
		Vector6d operator-(const Vector6d& v) const noexcept;
		Vector6d operator*(const Vector6d& v) const noexcept;
		Vector6d operator/(const Vector6d& v) const noexcept;
		
		Vector6d operator+(const std::double_t number) const noexcept;
		Vector6d operator-(const std::double_t number) const noexcept;
		Vector6d operator*(const std::double_t number) const noexcept;
		Vector6d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector6d& operator++ () noexcept;		// prefix increment
		Vector6d& operator-- () noexcept;		// prefix decrement
		Vector6d  operator++ (int) noexcept;		// postfix increment
		Vector6d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6d& operator+= (const Vector6d& right) noexcept;
		Vector6d& operator-= (const Vector6d& right) noexcept;
		Vector6d& operator*= (const Vector6d& right) noexcept;
		Vector6d& operator/= (const Vector6d& right) noexcept;
		
		Vector6d& operator+= (const std::double_t number) noexcept;
		Vector6d& operator-= (const std::double_t number) noexcept;
		Vector6d& operator*= (const std::double_t number) noexcept;
		Vector6d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6d& other) const noexcept;
		bool operator<  (const Vector6d& other) const noexcept;
		bool operator>  (const Vector6d& other) const noexcept;
		bool operator>= (const Vector6d& other) const noexcept;
		
		bool operator<  (const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>  (const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6d& other) const noexcept;
		bool operator!= (const Vector6d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7d
	{
	public:
		std::double_t a, b, c, d, e, f, g;
	public:
		Vector7d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0), f(0.0), g(0.0) {}
		Vector7d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
			const std::double_t e, const std::double_t f, const std::double_t g) noexcept;
		// copy
		Vector7d(const Vector7d& other) noexcept;
		Vector7d& operator=(const Vector7d& other) noexcept;
		// move
		Vector7d(Vector7d&& other) noexcept;
		Vector7d& operator=(Vector7d&& other) noexcept;
		// assignment
		Vector7d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector7d operator+(const Vector7d& v) const noexcept;
		Vector7d operator-(const Vector7d& v) const noexcept;
		Vector7d operator*(const Vector7d& v) const noexcept;
		Vector7d operator/(const Vector7d& v) const noexcept;
		
		Vector7d operator+(const std::double_t number) const noexcept;
		Vector7d operator-(const std::double_t number) const noexcept;
		Vector7d operator*(const std::double_t number) const noexcept;
		Vector7d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector7d& operator++ () noexcept;		// prefix increment
		Vector7d& operator-- () noexcept;		// prefix decrement
		Vector7d  operator++ (int) noexcept;		// postfix increment
		Vector7d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7d& operator+= (const Vector7d& right) noexcept;
		Vector7d& operator-= (const Vector7d& right) noexcept;
		Vector7d& operator*= (const Vector7d& right) noexcept;
		Vector7d& operator/= (const Vector7d& right) noexcept;
		
		Vector7d& operator+= (const std::double_t number) noexcept;
		Vector7d& operator-= (const std::double_t number) noexcept;
		Vector7d& operator*= (const std::double_t number) noexcept;
		Vector7d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7d& other) const noexcept;
		bool operator<  (const Vector7d& other) const noexcept;
		bool operator>  (const Vector7d& other) const noexcept;
		bool operator>= (const Vector7d& other) const noexcept;
		
		bool operator<  (const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>  (const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7d& other) const noexcept;
		bool operator!= (const Vector7d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8d
	{
	public:
		std::double_t a, b, c, d, e, f, g, h;
	public:
		Vector8d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0), f(0.0), g(0.0), h(0.0) {}
		Vector8d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
			const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h) noexcept;
		// copy
		Vector8d(const Vector8d& other) noexcept;
		Vector8d& operator=(const Vector8d& other) noexcept;
		// move
		Vector8d(Vector8d&& other) noexcept;
		Vector8d& operator=(Vector8d&& other) noexcept;
		// assignment
		Vector8d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector8d operator+(const Vector8d& v) const noexcept;
		Vector8d operator-(const Vector8d& v) const noexcept;
		Vector8d operator*(const Vector8d& v) const noexcept;
		Vector8d operator/(const Vector8d& v) const noexcept;
		
		Vector8d operator+(const std::double_t number) const noexcept;
		Vector8d operator-(const std::double_t number) const noexcept;
		Vector8d operator*(const std::double_t number) const noexcept;
		Vector8d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector8d& operator++ () noexcept;		// prefix increment
		Vector8d& operator-- () noexcept;		// prefix decrement
		Vector8d  operator++ (int) noexcept;		// postfix increment
		Vector8d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8d& operator+= (const Vector8d& right) noexcept;
		Vector8d& operator-= (const Vector8d& right) noexcept;
		Vector8d& operator*= (const Vector8d& right) noexcept;
		Vector8d& operator/= (const Vector8d& right) noexcept;
		
		Vector8d& operator+= (const std::double_t number) noexcept;
		Vector8d& operator-= (const std::double_t number) noexcept;
		Vector8d& operator*= (const std::double_t number) noexcept;
		Vector8d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8d& other) const noexcept;
		bool operator<  (const Vector8d& other) const noexcept;
		bool operator>  (const Vector8d& other) const noexcept;
		bool operator>= (const Vector8d& other) const noexcept;
		
		bool operator<  (const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>  (const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8d& other) const noexcept;
		bool operator!= (const Vector8d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9d
	{
	public:
		std::double_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0), f(0.0), g(0.0), h(0.0), i(0.0) {}
		Vector9d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
			const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h,
			const std::double_t i) noexcept;
		// copy
		Vector9d(const Vector9d& other) noexcept;
		Vector9d& operator=(const Vector9d& other) noexcept;
		// move
		Vector9d(Vector9d&& other) noexcept;
		Vector9d& operator=(Vector9d&& other) noexcept;
		// assignment
		Vector9d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector9d operator+(const Vector9d& v) const noexcept;
		Vector9d operator-(const Vector9d& v) const noexcept;
		Vector9d operator*(const Vector9d& v) const noexcept;
		Vector9d operator/(const Vector9d& v) const noexcept;
		
		Vector9d operator+(const std::double_t number) const noexcept;
		Vector9d operator-(const std::double_t number) const noexcept;
		Vector9d operator*(const std::double_t number) const noexcept;
		Vector9d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector9d& operator++ () noexcept;		// prefix increment
		Vector9d& operator-- () noexcept;		// prefix decrement
		Vector9d  operator++ (int) noexcept;		// postfix increment
		Vector9d  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9d& operator+= (const Vector9d& right) noexcept;
		Vector9d& operator-= (const Vector9d& right) noexcept;
		Vector9d& operator*= (const Vector9d& right) noexcept;
		Vector9d& operator/= (const Vector9d& right) noexcept;
		
		Vector9d& operator+= (const std::double_t number) noexcept;
		Vector9d& operator-= (const std::double_t number) noexcept;
		Vector9d& operator*= (const std::double_t number) noexcept;
		Vector9d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9d& other) const noexcept;
		bool operator<  (const Vector9d& other) const noexcept;
		bool operator>  (const Vector9d& other) const noexcept;
		bool operator>= (const Vector9d& other) const noexcept;
		
		bool operator<  (const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>  (const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9d& other) const noexcept;
		bool operator!= (const Vector9d& other) const noexcept;
		bool operator== (const std::double_t number)  const noexcept;
		bool operator!= (const std::double_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10d
	{
	public:
		std::double_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10d() : a(0.0), b(0.0), c(0.0), d(0.0), e(0.0), f(0.0), g(0.0), h(0.0), i(0.0), j(0.0) {}
		Vector10d(const std::double_t a, const std::double_t b, const std::double_t c, const std::double_t d,
			const std::double_t e, const std::double_t f, const std::double_t g, const std::double_t h,
			const std::double_t i, const std::double_t j) noexcept;
		// copy
		Vector10d(const Vector10d& other) noexcept;
		Vector10d& operator=(const Vector10d& other) noexcept;
		// move
		Vector10d(Vector10d&& other) noexcept;
		Vector10d& operator=(Vector10d&& other) noexcept;
		// assignment
		Vector10d& operator=(const std::double_t number) noexcept;
		
		// math operator
		Vector10d operator+(const Vector10d& v) const noexcept;
		Vector10d operator-(const Vector10d& v) const noexcept;
		Vector10d operator*(const Vector10d& v) const noexcept;
		Vector10d operator/(const Vector10d& v) const noexcept;
		
		Vector10d operator+(const std::double_t number) const noexcept;
		Vector10d operator-(const std::double_t number) const noexcept;
		Vector10d operator*(const std::double_t number) const noexcept;
		Vector10d operator/(const std::double_t number) const noexcept;
		
		// increment / decrement
		Vector10d& operator++ () noexcept;		// prefix increment
		Vector10d& operator-- () noexcept;		// prefix decrement
		Vector10d  operator++ (int) noexcept;	// postfix increment
		Vector10d  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10d& operator+= (const Vector10d& right) noexcept;
		Vector10d& operator-= (const Vector10d& right) noexcept;
		Vector10d& operator*= (const Vector10d& right) noexcept;
		Vector10d& operator/= (const Vector10d& right) noexcept;
		
		Vector10d& operator+= (const std::double_t number) noexcept;
		Vector10d& operator-= (const std::double_t number) noexcept;
		Vector10d& operator*= (const std::double_t number) noexcept;
		Vector10d& operator/= (const std::double_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10d& other) const noexcept;
		bool operator<  (const Vector10d& other) const noexcept;
		bool operator>  (const Vector10d& other) const noexcept;
		bool operator>= (const Vector10d& other) const noexcept;

		bool operator<  (const std::double_t number) const noexcept;
		bool operator<= (const std::double_t number) const noexcept;
		bool operator>  (const std::double_t number) const noexcept;
		bool operator>= (const std::double_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10d& other) const noexcept;
		bool operator!= (const Vector10d& other) const noexcept;
		bool operator== (const std::double_t number)   const noexcept;
		bool operator!= (const std::double_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::double_t stnd_value = 0.0) noexcept;
		std::double_t& operator[](const std::uint8_t index) noexcept;
		std::double_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2d& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3d& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10d& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
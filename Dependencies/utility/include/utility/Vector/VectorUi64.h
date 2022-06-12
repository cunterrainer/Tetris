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

		Type : std::uint64_t
		Bytes: 8
		Range: 0 to 18.446.744.073.709.551.615
	*/

	class Vector2ui64
	{
	public:
		std::uint64_t x, y;
	public:
		Vector2ui64() noexcept : x(0Ull), y(0Ull) {}
		Vector2ui64(const std::uint64_t x, const std::uint64_t y) noexcept;
		// copy
		Vector2ui64(const Vector2ui64& other) noexcept;
		Vector2ui64& operator=(const Vector2ui64& other) noexcept;
		// move
		Vector2ui64(Vector2ui64&& other) noexcept;
		Vector2ui64& operator=(Vector2ui64&& other) noexcept;
		// assignment
		Vector2ui64& operator=(const std::uint64_t number) noexcept;

		// math operator
		Vector2ui64 operator+(const Vector2ui64& v) const noexcept;
		Vector2ui64 operator-(const Vector2ui64& v) const noexcept;
		Vector2ui64 operator*(const Vector2ui64& v) const noexcept;
		Vector2ui64 operator/(const Vector2ui64& v) const noexcept;

		Vector2ui64 operator+(const std::uint64_t number) const noexcept;
		Vector2ui64 operator-(const std::uint64_t number) const noexcept;
		Vector2ui64 operator*(const std::uint64_t number) const noexcept;
		Vector2ui64 operator/(const std::uint64_t number) const noexcept;

		// increment / decrement
		Vector2ui64& operator++ () noexcept;		// prefix increment
		Vector2ui64& operator-- () noexcept;		// prefix decrement
		Vector2ui64  operator++ (int) noexcept;		// postfix increment
		Vector2ui64  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2ui64& operator+= (const Vector2ui64& right) noexcept;
		Vector2ui64& operator-= (const Vector2ui64& right) noexcept;
		Vector2ui64& operator*= (const Vector2ui64& right) noexcept;
		Vector2ui64& operator/= (const Vector2ui64& right) noexcept;

		Vector2ui64& operator+= (const std::uint64_t number) noexcept;
		Vector2ui64& operator-= (const std::uint64_t number) noexcept;
		Vector2ui64& operator*= (const std::uint64_t number) noexcept;
		Vector2ui64& operator/= (const std::uint64_t number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2ui64& other) const noexcept;
		bool operator<= (const Vector2ui64& other) const noexcept;
		bool operator>	(const Vector2ui64& other) const noexcept;
		bool operator>= (const Vector2ui64& other) const noexcept;

		bool operator<	(const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>	(const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2ui64& other) const noexcept;
		bool operator!= (const Vector2ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector3ui64
	{
	public:
		std::uint64_t x, y, z;
	public:
		Vector3ui64() : x(0Ull), y(0Ull), z(0Ull) {}
		Vector3ui64(const std::uint64_t x, const std::uint64_t y, const std::uint64_t z) noexcept;
		// copy
		Vector3ui64(const Vector3ui64& other) noexcept;
		Vector3ui64& operator=(const Vector3ui64& other) noexcept;
		// move
		Vector3ui64(Vector3ui64&& other) noexcept;
		Vector3ui64& operator=(Vector3ui64&& other) noexcept;
		// assignment
		Vector3ui64& operator=(const std::uint64_t number) noexcept;

		// math operator
		Vector3ui64 operator+(const Vector3ui64& v) const noexcept;
		Vector3ui64 operator-(const Vector3ui64& v) const noexcept;
		Vector3ui64 operator*(const Vector3ui64& v) const noexcept;
		Vector3ui64 operator/(const Vector3ui64& v) const noexcept;

		Vector3ui64 operator+(const std::uint64_t number) const noexcept;
		Vector3ui64 operator-(const std::uint64_t number) const noexcept;
		Vector3ui64 operator*(const std::uint64_t number) const noexcept;
		Vector3ui64 operator/(const std::uint64_t number) const noexcept;

		// increment / decrement
		Vector3ui64& operator++ () noexcept;		// prefix increment
		Vector3ui64& operator-- () noexcept;		// prefix decrement
		Vector3ui64  operator++ (int) noexcept;		// postfix increment
		Vector3ui64  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3ui64& operator+= (const Vector3ui64& right) noexcept;
		Vector3ui64& operator-= (const Vector3ui64& right) noexcept;
		Vector3ui64& operator*= (const Vector3ui64& right) noexcept;
		Vector3ui64& operator/= (const Vector3ui64& right) noexcept;

		Vector3ui64& operator+= (const std::uint64_t number) noexcept;
		Vector3ui64& operator-= (const std::uint64_t number) noexcept;
		Vector3ui64& operator*= (const std::uint64_t number) noexcept;
		Vector3ui64& operator/= (const std::uint64_t number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3ui64& other) const noexcept;
		bool operator<= (const Vector3ui64& other) const noexcept;
		bool operator>  (const Vector3ui64& other) const noexcept;
		bool operator>= (const Vector3ui64& other) const noexcept;
		 
		bool operator<	(const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>	(const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3ui64& other) const noexcept;
		bool operator!= (const Vector3ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector4ui64
	{
	public:
		std::uint64_t a, b, c, d;
	public:
		Vector4ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull) {}
		Vector4ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d) noexcept;
		// copy
		Vector4ui64(const Vector4ui64& other) noexcept;
		Vector4ui64& operator=(const Vector4ui64& other) noexcept;
		// move
		Vector4ui64(Vector4ui64&& other) noexcept;
		Vector4ui64& operator=(Vector4ui64&& other) noexcept;
		// assignment
		Vector4ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector4ui64 operator+(const Vector4ui64& v) const noexcept;
		Vector4ui64 operator-(const Vector4ui64& v) const noexcept;
		Vector4ui64 operator*(const Vector4ui64& v) const noexcept;
		Vector4ui64 operator/(const Vector4ui64& v) const noexcept;
		
		Vector4ui64 operator+(const std::uint64_t number) const noexcept;
		Vector4ui64 operator-(const std::uint64_t number) const noexcept;
		Vector4ui64 operator*(const std::uint64_t number) const noexcept;
		Vector4ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector4ui64& operator++ () noexcept;		// prefix increment
		Vector4ui64& operator-- () noexcept;		// prefix decrement
		Vector4ui64  operator++ (int) noexcept;		// postfix increment
		Vector4ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4ui64& operator+= (const Vector4ui64& right) noexcept;
		Vector4ui64& operator-= (const Vector4ui64& right) noexcept;
		Vector4ui64& operator*= (const Vector4ui64& right) noexcept;
		Vector4ui64& operator/= (const Vector4ui64& right) noexcept;
		
		Vector4ui64& operator+= (const std::uint64_t number) noexcept;
		Vector4ui64& operator-= (const std::uint64_t number) noexcept;
		Vector4ui64& operator*= (const std::uint64_t number) noexcept;
		Vector4ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4ui64& other) const noexcept;
		bool operator<= (const Vector4ui64& other) const noexcept;
		bool operator>	(const Vector4ui64& other) const noexcept;
		bool operator>= (const Vector4ui64& other) const noexcept;
		
		bool operator<	(const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>	(const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4ui64& other) const noexcept;
		bool operator!= (const Vector4ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector5ui64
	{
	public:
		std::uint64_t a, b, c, d, e;
	public:
		Vector5ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull) {}
		Vector5ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d, const std::uint64_t e) noexcept;
		// copy
		Vector5ui64(const Vector5ui64& other) noexcept;
		Vector5ui64& operator=(const Vector5ui64& other) noexcept;
		// move
		Vector5ui64(Vector5ui64&& other) noexcept;
		Vector5ui64& operator=(Vector5ui64&& other) noexcept;
		// assignment
		Vector5ui64& operator=(const std::uint64_t number) noexcept;
		 
		// math operator
		Vector5ui64 operator+(const Vector5ui64& v) const noexcept;
		Vector5ui64 operator-(const Vector5ui64& v) const noexcept;
		Vector5ui64 operator*(const Vector5ui64& v) const noexcept;
		Vector5ui64 operator/(const Vector5ui64& v) const noexcept;
		
		Vector5ui64 operator+(const std::uint64_t number) const noexcept;
		Vector5ui64 operator-(const std::uint64_t number) const noexcept;
		Vector5ui64 operator*(const std::uint64_t number) const noexcept;
		Vector5ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector5ui64& operator++ () noexcept;		// prefix increment
		Vector5ui64& operator-- () noexcept;		// prefix decrement
		Vector5ui64  operator++ (int) noexcept;		// postfix increment
		Vector5ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5ui64& operator+= (const Vector5ui64& right) noexcept;
		Vector5ui64& operator-= (const Vector5ui64& right) noexcept;
		Vector5ui64& operator*= (const Vector5ui64& right) noexcept;
		Vector5ui64& operator/= (const Vector5ui64& right) noexcept;
		
		Vector5ui64& operator+= (const std::uint64_t number) noexcept;
		Vector5ui64& operator-= (const std::uint64_t number) noexcept;
		Vector5ui64& operator*= (const std::uint64_t number) noexcept;
		Vector5ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5ui64& other) const noexcept;
		bool operator<= (const Vector5ui64& other) const noexcept;
		bool operator>	(const Vector5ui64& other) const noexcept;
		bool operator>= (const Vector5ui64& other) const noexcept;
		
		bool operator<	(const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>	(const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5ui64& other) const noexcept;
		bool operator!= (const Vector5ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector6ui64
	{
	public:
		std::uint64_t a, b, c, d, e, f;
	public:
		Vector6ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull), f(0Ull) {}
		Vector6ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
			const std::uint64_t e, const std::uint64_t f) noexcept;
		// copy
		Vector6ui64(const Vector6ui64& other) noexcept;
		Vector6ui64& operator=(const Vector6ui64& other) noexcept;
		// move
		Vector6ui64(Vector6ui64&& other) noexcept;
		Vector6ui64& operator=(Vector6ui64&& other) noexcept;
		// assignment
		Vector6ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector6ui64 operator+(const Vector6ui64& v) const noexcept;
		Vector6ui64 operator-(const Vector6ui64& v) const noexcept;
		Vector6ui64 operator*(const Vector6ui64& v) const noexcept;
		Vector6ui64 operator/(const Vector6ui64& v) const noexcept;
		
		Vector6ui64 operator+(const std::uint64_t number) const noexcept;
		Vector6ui64 operator-(const std::uint64_t number) const noexcept;
		Vector6ui64 operator*(const std::uint64_t number) const noexcept;
		Vector6ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector6ui64& operator++ () noexcept;		// prefix increment
		Vector6ui64& operator-- () noexcept;		// prefix decrement
		Vector6ui64  operator++ (int) noexcept;		// postfix increment
		Vector6ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6ui64& operator+= (const Vector6ui64& right) noexcept;
		Vector6ui64& operator-= (const Vector6ui64& right) noexcept;
		Vector6ui64& operator*= (const Vector6ui64& right) noexcept;
		Vector6ui64& operator/= (const Vector6ui64& right) noexcept;
		
		Vector6ui64& operator+= (const std::uint64_t number) noexcept;
		Vector6ui64& operator-= (const std::uint64_t number) noexcept;
		Vector6ui64& operator*= (const std::uint64_t number) noexcept;
		Vector6ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6ui64& other) const noexcept;
		bool operator<  (const Vector6ui64& other) const noexcept;
		bool operator>  (const Vector6ui64& other) const noexcept;
		bool operator>= (const Vector6ui64& other) const noexcept;
		
		bool operator<  (const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>  (const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6ui64& other) const noexcept;
		bool operator!= (const Vector6ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector7ui64
	{
	public:
		std::uint64_t a, b, c, d, e, f, g;
	public:
		Vector7ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull), f(0Ull), g(0Ull) {}
		Vector7ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
			const std::uint64_t e, const std::uint64_t f, const std::uint64_t g) noexcept;
		// copy
		Vector7ui64(const Vector7ui64& other) noexcept;
		Vector7ui64& operator=(const Vector7ui64& other) noexcept;
		// move
		Vector7ui64(Vector7ui64&& other) noexcept;
		Vector7ui64& operator=(Vector7ui64&& other) noexcept;
		// assignment
		Vector7ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector7ui64 operator+(const Vector7ui64& v) const noexcept;
		Vector7ui64 operator-(const Vector7ui64& v) const noexcept;
		Vector7ui64 operator*(const Vector7ui64& v) const noexcept;
		Vector7ui64 operator/(const Vector7ui64& v) const noexcept;
		
		Vector7ui64 operator+(const std::uint64_t number) const noexcept;
		Vector7ui64 operator-(const std::uint64_t number) const noexcept;
		Vector7ui64 operator*(const std::uint64_t number) const noexcept;
		Vector7ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector7ui64& operator++ () noexcept;		// prefix increment
		Vector7ui64& operator-- () noexcept;		// prefix decrement
		Vector7ui64  operator++ (int) noexcept;		// postfix increment
		Vector7ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7ui64& operator+= (const Vector7ui64& right) noexcept;
		Vector7ui64& operator-= (const Vector7ui64& right) noexcept;
		Vector7ui64& operator*= (const Vector7ui64& right) noexcept;
		Vector7ui64& operator/= (const Vector7ui64& right) noexcept;
		
		Vector7ui64& operator+= (const std::uint64_t number) noexcept;
		Vector7ui64& operator-= (const std::uint64_t number) noexcept;
		Vector7ui64& operator*= (const std::uint64_t number) noexcept;
		Vector7ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7ui64& other) const noexcept;
		bool operator<  (const Vector7ui64& other) const noexcept;
		bool operator>  (const Vector7ui64& other) const noexcept;
		bool operator>= (const Vector7ui64& other) const noexcept;
		
		bool operator<  (const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>  (const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7ui64& other) const noexcept;
		bool operator!= (const Vector7ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector8ui64
	{
	public:
		std::uint64_t a, b, c, d, e, f, g, h;
	public:
		Vector8ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull), f(0Ull), g(0Ull), h(0Ull) {}
		Vector8ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
			const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h) noexcept;
		// copy
		Vector8ui64(const Vector8ui64& other) noexcept;
		Vector8ui64& operator=(const Vector8ui64& other) noexcept;
		// move
		Vector8ui64(Vector8ui64&& other) noexcept;
		Vector8ui64& operator=(Vector8ui64&& other) noexcept;
		// assignment
		Vector8ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector8ui64 operator+(const Vector8ui64& v) const noexcept;
		Vector8ui64 operator-(const Vector8ui64& v) const noexcept;
		Vector8ui64 operator*(const Vector8ui64& v) const noexcept;
		Vector8ui64 operator/(const Vector8ui64& v) const noexcept;
		
		Vector8ui64 operator+(const std::uint64_t number) const noexcept;
		Vector8ui64 operator-(const std::uint64_t number) const noexcept;
		Vector8ui64 operator*(const std::uint64_t number) const noexcept;
		Vector8ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector8ui64& operator++ () noexcept;		// prefix increment
		Vector8ui64& operator-- () noexcept;		// prefix decrement
		Vector8ui64  operator++ (int) noexcept;		// postfix increment
		Vector8ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8ui64& operator+= (const Vector8ui64& right) noexcept;
		Vector8ui64& operator-= (const Vector8ui64& right) noexcept;
		Vector8ui64& operator*= (const Vector8ui64& right) noexcept;
		Vector8ui64& operator/= (const Vector8ui64& right) noexcept;
		
		Vector8ui64& operator+= (const std::uint64_t number) noexcept;
		Vector8ui64& operator-= (const std::uint64_t number) noexcept;
		Vector8ui64& operator*= (const std::uint64_t number) noexcept;
		Vector8ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8ui64& other) const noexcept;
		bool operator<  (const Vector8ui64& other) const noexcept;
		bool operator>  (const Vector8ui64& other) const noexcept;
		bool operator>= (const Vector8ui64& other) const noexcept;
		
		bool operator<  (const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>  (const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8ui64& other) const noexcept;
		bool operator!= (const Vector8ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector9ui64
	{
	public:
		std::uint64_t a, b, c, d, e, f, g, h, i;
	public:
		Vector9ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull), f(0Ull), g(0Ull), h(0Ull), i(0Ull) {}
		Vector9ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
			const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h,
			const std::uint64_t i) noexcept;
		// copy
		Vector9ui64(const Vector9ui64& other) noexcept;
		Vector9ui64& operator=(const Vector9ui64& other) noexcept;
		// move
		Vector9ui64(Vector9ui64&& other) noexcept;
		Vector9ui64& operator=(Vector9ui64&& other) noexcept;
		// assignment
		Vector9ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector9ui64 operator+(const Vector9ui64& v) const noexcept;
		Vector9ui64 operator-(const Vector9ui64& v) const noexcept;
		Vector9ui64 operator*(const Vector9ui64& v) const noexcept;
		Vector9ui64 operator/(const Vector9ui64& v) const noexcept;
		
		Vector9ui64 operator+(const std::uint64_t number) const noexcept;
		Vector9ui64 operator-(const std::uint64_t number) const noexcept;
		Vector9ui64 operator*(const std::uint64_t number) const noexcept;
		Vector9ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector9ui64& operator++ () noexcept;		// prefix increment
		Vector9ui64& operator-- () noexcept;		// prefix decrement
		Vector9ui64  operator++ (int) noexcept;		// postfix increment
		Vector9ui64  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9ui64& operator+= (const Vector9ui64& right) noexcept;
		Vector9ui64& operator-= (const Vector9ui64& right) noexcept;
		Vector9ui64& operator*= (const Vector9ui64& right) noexcept;
		Vector9ui64& operator/= (const Vector9ui64& right) noexcept;
		
		Vector9ui64& operator+= (const std::uint64_t number) noexcept;
		Vector9ui64& operator-= (const std::uint64_t number) noexcept;
		Vector9ui64& operator*= (const std::uint64_t number) noexcept;
		Vector9ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9ui64& other) const noexcept;
		bool operator<  (const Vector9ui64& other) const noexcept;
		bool operator>  (const Vector9ui64& other) const noexcept;
		bool operator>= (const Vector9ui64& other) const noexcept;
		
		bool operator<  (const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>  (const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9ui64& other) const noexcept;
		bool operator!= (const Vector9ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)  const noexcept;
		bool operator!= (const std::uint64_t number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	class Vector10ui64
	{
	public:
		std::uint64_t a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10ui64() : a(0Ull), b(0Ull), c(0Ull), d(0Ull), e(0Ull), f(0Ull), g(0Ull), h(0Ull), i(0Ull), j(0Ull) {}
		Vector10ui64(const std::uint64_t a, const std::uint64_t b, const std::uint64_t c, const std::uint64_t d,
			const std::uint64_t e, const std::uint64_t f, const std::uint64_t g, const std::uint64_t h,
			const std::uint64_t i, const std::uint64_t j) noexcept;
		// copy
		Vector10ui64(const Vector10ui64& other) noexcept;
		Vector10ui64& operator=(const Vector10ui64& other) noexcept;
		// move
		Vector10ui64(Vector10ui64&& other) noexcept;
		Vector10ui64& operator=(Vector10ui64&& other) noexcept;
		// assignment
		Vector10ui64& operator=(const std::uint64_t number) noexcept;
		
		// math operator
		Vector10ui64 operator+(const Vector10ui64& v) const noexcept;
		Vector10ui64 operator-(const Vector10ui64& v) const noexcept;
		Vector10ui64 operator*(const Vector10ui64& v) const noexcept;
		Vector10ui64 operator/(const Vector10ui64& v) const noexcept;
		
		Vector10ui64 operator+(const std::uint64_t number) const noexcept;
		Vector10ui64 operator-(const std::uint64_t number) const noexcept;
		Vector10ui64 operator*(const std::uint64_t number) const noexcept;
		Vector10ui64 operator/(const std::uint64_t number) const noexcept;
		
		// increment / decrement
		Vector10ui64& operator++ () noexcept;		// prefix increment
		Vector10ui64& operator-- () noexcept;		// prefix decrement
		Vector10ui64  operator++ (int) noexcept;	// postfix increment
		Vector10ui64  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10ui64& operator+= (const Vector10ui64& right) noexcept;
		Vector10ui64& operator-= (const Vector10ui64& right) noexcept;
		Vector10ui64& operator*= (const Vector10ui64& right) noexcept;
		Vector10ui64& operator/= (const Vector10ui64& right) noexcept;
		
		Vector10ui64& operator+= (const std::uint64_t number) noexcept;
		Vector10ui64& operator-= (const std::uint64_t number) noexcept;
		Vector10ui64& operator*= (const std::uint64_t number) noexcept;
		Vector10ui64& operator/= (const std::uint64_t number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10ui64& other) const noexcept;
		bool operator<  (const Vector10ui64& other) const noexcept;
		bool operator>  (const Vector10ui64& other) const noexcept;
		bool operator>= (const Vector10ui64& other) const noexcept;

		bool operator<  (const std::uint64_t number) const noexcept;
		bool operator<= (const std::uint64_t number) const noexcept;
		bool operator>  (const std::uint64_t number) const noexcept;
		bool operator>= (const std::uint64_t number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10ui64& other) const noexcept;
		bool operator!= (const Vector10ui64& other) const noexcept;
		bool operator== (const std::uint64_t number)   const noexcept;
		bool operator!= (const std::uint64_t number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const std::uint64_t stnd_value = 0Ull) noexcept;
		std::uint64_t& operator[](const std::uint8_t index) noexcept;
		std::uint64_t& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2ui64& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3ui64& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10ui64& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
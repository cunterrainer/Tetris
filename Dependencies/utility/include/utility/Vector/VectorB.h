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

		Type : bool
		Bytes: 1
		Range: true or false
	*/

	class Vector2b
	{
	public:
		bool x, y;
	public:
		Vector2b() noexcept : x(false), y(false) {}
		Vector2b(const bool x, const bool y) noexcept;
		// copy
		Vector2b(const Vector2b& other) noexcept;
		Vector2b& operator=(const Vector2b& other) noexcept;
		// move
		Vector2b(Vector2b&& other) noexcept;
		Vector2b& operator=(Vector2b&& other) noexcept;
		// assignment
		Vector2b& operator=(const bool number) noexcept;

		// math operator
		Vector2b operator+(const Vector2b& v) const noexcept;
		Vector2b operator-(const Vector2b& v) const noexcept;
		Vector2b operator*(const Vector2b& v) const noexcept;
		Vector2b operator/(const Vector2b& v) const noexcept;

		Vector2b operator+(const bool number) const noexcept;
		Vector2b operator-(const bool number) const noexcept;
		Vector2b operator*(const bool number) const noexcept;
		Vector2b operator/(const bool number) const noexcept;

		// increment / decrement
		Vector2b& operator++ () noexcept;		// prefix increment
		Vector2b& operator-- () noexcept;		// prefix decrement
		Vector2b  operator++ (int) noexcept;		// postfix increment
		Vector2b  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector2b& operator+= (const Vector2b& right) noexcept;
		Vector2b& operator-= (const Vector2b& right) noexcept;
		Vector2b& operator*= (const Vector2b& right) noexcept;
		Vector2b& operator/= (const Vector2b& right) noexcept;

		Vector2b& operator+= (const bool number) noexcept;
		Vector2b& operator-= (const bool number) noexcept;
		Vector2b& operator*= (const bool number) noexcept;
		Vector2b& operator/= (const bool number) noexcept;

		// less than / greater than
		bool operator<	(const Vector2b& other) const noexcept;
		bool operator<= (const Vector2b& other) const noexcept;
		bool operator>	(const Vector2b& other) const noexcept;
		bool operator>= (const Vector2b& other) const noexcept;

		bool operator<	(const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>	(const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;

		// equal / not equal
		bool operator== (const Vector2b& other) const noexcept;
		bool operator!= (const Vector2b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector3b
	{
	public:
		bool x, y, z;
	public:
		Vector3b() : x(false), y(false), z(false) {}
		Vector3b(const bool x, const bool y, const bool z) noexcept;
		// copy
		Vector3b(const Vector3b& other) noexcept;
		Vector3b& operator=(const Vector3b& other) noexcept;
		// move
		Vector3b(Vector3b&& other) noexcept;
		Vector3b& operator=(Vector3b&& other) noexcept;
		// assignment
		Vector3b& operator=(const bool number) noexcept;

		// math operator
		Vector3b operator+(const Vector3b& v) const noexcept;
		Vector3b operator-(const Vector3b& v) const noexcept;
		Vector3b operator*(const Vector3b& v) const noexcept;
		Vector3b operator/(const Vector3b& v) const noexcept;

		Vector3b operator+(const bool number) const noexcept;
		Vector3b operator-(const bool number) const noexcept;
		Vector3b operator*(const bool number) const noexcept;
		Vector3b operator/(const bool number) const noexcept;

		// increment / decrement
		Vector3b& operator++ () noexcept;		// prefix increment
		Vector3b& operator-- () noexcept;		// prefix decrement
		Vector3b  operator++ (int) noexcept;		// postfix increment
		Vector3b  operator-- (int) noexcept;		// postfix decrement

		// assignments
		Vector3b& operator+= (const Vector3b& right) noexcept;
		Vector3b& operator-= (const Vector3b& right) noexcept;
		Vector3b& operator*= (const Vector3b& right) noexcept;
		Vector3b& operator/= (const Vector3b& right) noexcept;

		Vector3b& operator+= (const bool number) noexcept;
		Vector3b& operator-= (const bool number) noexcept;
		Vector3b& operator*= (const bool number) noexcept;
		Vector3b& operator/= (const bool number) noexcept;

		// less than / greater than
		bool operator<  (const Vector3b& other) const noexcept;
		bool operator<= (const Vector3b& other) const noexcept;
		bool operator>  (const Vector3b& other) const noexcept;
		bool operator>= (const Vector3b& other) const noexcept;
		 
		bool operator<	(const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>	(const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		 
		// equal / not equal
		bool operator== (const Vector3b& other) const noexcept;
		bool operator!= (const Vector3b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;

		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector4b
	{
	public:
		bool a, b, c, d;
	public:
		Vector4b() : a(false), b(false), c(false), d(false) {}
		Vector4b(const bool a, const bool b, const bool c, const bool d) noexcept;
		// copy
		Vector4b(const Vector4b& other) noexcept;
		Vector4b& operator=(const Vector4b& other) noexcept;
		// move
		Vector4b(Vector4b&& other) noexcept;
		Vector4b& operator=(Vector4b&& other) noexcept;
		// assignment
		Vector4b& operator=(const bool number) noexcept;
		
		// math operator
		Vector4b operator+(const Vector4b& v) const noexcept;
		Vector4b operator-(const Vector4b& v) const noexcept;
		Vector4b operator*(const Vector4b& v) const noexcept;
		Vector4b operator/(const Vector4b& v) const noexcept;
		
		Vector4b operator+(const bool number) const noexcept;
		Vector4b operator-(const bool number) const noexcept;
		Vector4b operator*(const bool number) const noexcept;
		Vector4b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector4b& operator++ () noexcept;		// prefix increment
		Vector4b& operator-- () noexcept;		// prefix decrement
		Vector4b  operator++ (int) noexcept;		// postfix increment
		Vector4b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector4b& operator+= (const Vector4b& right) noexcept;
		Vector4b& operator-= (const Vector4b& right) noexcept;
		Vector4b& operator*= (const Vector4b& right) noexcept;
		Vector4b& operator/= (const Vector4b& right) noexcept;
		
		Vector4b& operator+= (const bool number) noexcept;
		Vector4b& operator-= (const bool number) noexcept;
		Vector4b& operator*= (const bool number) noexcept;
		Vector4b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector4b& other) const noexcept;
		bool operator<= (const Vector4b& other) const noexcept;
		bool operator>	(const Vector4b& other) const noexcept;
		bool operator>= (const Vector4b& other) const noexcept;
		
		bool operator<	(const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>	(const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector4b& other) const noexcept;
		bool operator!= (const Vector4b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector5b
	{
	public:
		bool a, b, c, d, e;
	public:
		Vector5b() : a(false), b(false), c(false), d(false), e(false) {}
		Vector5b(const bool a, const bool b, const bool c, const bool d, const bool e) noexcept;
		// copy
		Vector5b(const Vector5b& other) noexcept;
		Vector5b& operator=(const Vector5b& other) noexcept;
		// move
		Vector5b(Vector5b&& other) noexcept;
		Vector5b& operator=(Vector5b&& other) noexcept;
		// assignment
		Vector5b& operator=(const bool number) noexcept;
		 
		// math operator
		Vector5b operator+(const Vector5b& v) const noexcept;
		Vector5b operator-(const Vector5b& v) const noexcept;
		Vector5b operator*(const Vector5b& v) const noexcept;
		Vector5b operator/(const Vector5b& v) const noexcept;
		
		Vector5b operator+(const bool number) const noexcept;
		Vector5b operator-(const bool number) const noexcept;
		Vector5b operator*(const bool number) const noexcept;
		Vector5b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector5b& operator++ () noexcept;		// prefix increment
		Vector5b& operator-- () noexcept;		// prefix decrement
		Vector5b  operator++ (int) noexcept;		// postfix increment
		Vector5b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector5b& operator+= (const Vector5b& right) noexcept;
		Vector5b& operator-= (const Vector5b& right) noexcept;
		Vector5b& operator*= (const Vector5b& right) noexcept;
		Vector5b& operator/= (const Vector5b& right) noexcept;
		
		Vector5b& operator+= (const bool number) noexcept;
		Vector5b& operator-= (const bool number) noexcept;
		Vector5b& operator*= (const bool number) noexcept;
		Vector5b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<	(const Vector5b& other) const noexcept;
		bool operator<= (const Vector5b& other) const noexcept;
		bool operator>	(const Vector5b& other) const noexcept;
		bool operator>= (const Vector5b& other) const noexcept;
		
		bool operator<	(const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>	(const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector5b& other) const noexcept;
		bool operator!= (const Vector5b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector6b
	{
	public:
		bool a, b, c, d, e, f;
	public:
		Vector6b() : a(false), b(false), c(false), d(false), e(false), f(false) {}
		Vector6b(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f) noexcept;
		// copy
		Vector6b(const Vector6b& other) noexcept;
		Vector6b& operator=(const Vector6b& other) noexcept;
		// move
		Vector6b(Vector6b&& other) noexcept;
		Vector6b& operator=(Vector6b&& other) noexcept;
		// assignment
		Vector6b& operator=(const bool number) noexcept;
		
		// math operator
		Vector6b operator+(const Vector6b& v) const noexcept;
		Vector6b operator-(const Vector6b& v) const noexcept;
		Vector6b operator*(const Vector6b& v) const noexcept;
		Vector6b operator/(const Vector6b& v) const noexcept;
		
		Vector6b operator+(const bool number) const noexcept;
		Vector6b operator-(const bool number) const noexcept;
		Vector6b operator*(const bool number) const noexcept;
		Vector6b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector6b& operator++ () noexcept;		// prefix increment
		Vector6b& operator-- () noexcept;		// prefix decrement
		Vector6b  operator++ (int) noexcept;		// postfix increment
		Vector6b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector6b& operator+= (const Vector6b& right) noexcept;
		Vector6b& operator-= (const Vector6b& right) noexcept;
		Vector6b& operator*= (const Vector6b& right) noexcept;
		Vector6b& operator/= (const Vector6b& right) noexcept;
		
		Vector6b& operator+= (const bool number) noexcept;
		Vector6b& operator-= (const bool number) noexcept;
		Vector6b& operator*= (const bool number) noexcept;
		Vector6b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector6b& other) const noexcept;
		bool operator<  (const Vector6b& other) const noexcept;
		bool operator>  (const Vector6b& other) const noexcept;
		bool operator>= (const Vector6b& other) const noexcept;
		
		bool operator<  (const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>  (const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector6b& other) const noexcept;
		bool operator!= (const Vector6b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector7b
	{
	public:
		bool a, b, c, d, e, f, g;
	public:
		Vector7b() : a(false), b(false), c(false), d(false), e(false), f(false), g(false) {}
		Vector7b(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g) noexcept;
		// copy
		Vector7b(const Vector7b& other) noexcept;
		Vector7b& operator=(const Vector7b& other) noexcept;
		// move
		Vector7b(Vector7b&& other) noexcept;
		Vector7b& operator=(Vector7b&& other) noexcept;
		// assignment
		Vector7b& operator=(const bool number) noexcept;
		
		// math operator
		Vector7b operator+(const Vector7b& v) const noexcept;
		Vector7b operator-(const Vector7b& v) const noexcept;
		Vector7b operator*(const Vector7b& v) const noexcept;
		Vector7b operator/(const Vector7b& v) const noexcept;
		
		Vector7b operator+(const bool number) const noexcept;
		Vector7b operator-(const bool number) const noexcept;
		Vector7b operator*(const bool number) const noexcept;
		Vector7b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector7b& operator++ () noexcept;		// prefix increment
		Vector7b& operator-- () noexcept;		// prefix decrement
		Vector7b  operator++ (int) noexcept;		// postfix increment
		Vector7b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector7b& operator+= (const Vector7b& right) noexcept;
		Vector7b& operator-= (const Vector7b& right) noexcept;
		Vector7b& operator*= (const Vector7b& right) noexcept;
		Vector7b& operator/= (const Vector7b& right) noexcept;
		
		Vector7b& operator+= (const bool number) noexcept;
		Vector7b& operator-= (const bool number) noexcept;
		Vector7b& operator*= (const bool number) noexcept;
		Vector7b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector7b& other) const noexcept;
		bool operator<  (const Vector7b& other) const noexcept;
		bool operator>  (const Vector7b& other) const noexcept;
		bool operator>= (const Vector7b& other) const noexcept;
		
		bool operator<  (const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>  (const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector7b& other) const noexcept;
		bool operator!= (const Vector7b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector8b
	{
	public:
		bool a, b, c, d, e, f, g, h;
	public:
		Vector8b() : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false) {}
		Vector8b(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h) noexcept;
		// copy
		Vector8b(const Vector8b& other) noexcept;
		Vector8b& operator=(const Vector8b& other) noexcept;
		// move
		Vector8b(Vector8b&& other) noexcept;
		Vector8b& operator=(Vector8b&& other) noexcept;
		// assignment
		Vector8b& operator=(const bool number) noexcept;
		
		// math operator
		Vector8b operator+(const Vector8b& v) const noexcept;
		Vector8b operator-(const Vector8b& v) const noexcept;
		Vector8b operator*(const Vector8b& v) const noexcept;
		Vector8b operator/(const Vector8b& v) const noexcept;
		
		Vector8b operator+(const bool number) const noexcept;
		Vector8b operator-(const bool number) const noexcept;
		Vector8b operator*(const bool number) const noexcept;
		Vector8b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector8b& operator++ () noexcept;		// prefix increment
		Vector8b& operator-- () noexcept;		// prefix decrement
		Vector8b  operator++ (int) noexcept;		// postfix increment
		Vector8b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector8b& operator+= (const Vector8b& right) noexcept;
		Vector8b& operator-= (const Vector8b& right) noexcept;
		Vector8b& operator*= (const Vector8b& right) noexcept;
		Vector8b& operator/= (const Vector8b& right) noexcept;
		
		Vector8b& operator+= (const bool number) noexcept;
		Vector8b& operator-= (const bool number) noexcept;
		Vector8b& operator*= (const bool number) noexcept;
		Vector8b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector8b& other) const noexcept;
		bool operator<  (const Vector8b& other) const noexcept;
		bool operator>  (const Vector8b& other) const noexcept;
		bool operator>= (const Vector8b& other) const noexcept;
		
		bool operator<  (const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>  (const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector8b& other) const noexcept;
		bool operator!= (const Vector8b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector9b
	{
	public:
		bool a, b, c, d, e, f, g, h, i;
	public:
		Vector9b() : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false), i(false) {}
		Vector9b(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h,
			const bool i) noexcept;
		// copy
		Vector9b(const Vector9b& other) noexcept;
		Vector9b& operator=(const Vector9b& other) noexcept;
		// move
		Vector9b(Vector9b&& other) noexcept;
		Vector9b& operator=(Vector9b&& other) noexcept;
		// assignment
		Vector9b& operator=(const bool number) noexcept;
		
		// math operator
		Vector9b operator+(const Vector9b& v) const noexcept;
		Vector9b operator-(const Vector9b& v) const noexcept;
		Vector9b operator*(const Vector9b& v) const noexcept;
		Vector9b operator/(const Vector9b& v) const noexcept;
		
		Vector9b operator+(const bool number) const noexcept;
		Vector9b operator-(const bool number) const noexcept;
		Vector9b operator*(const bool number) const noexcept;
		Vector9b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector9b& operator++ () noexcept;		// prefix increment
		Vector9b& operator-- () noexcept;		// prefix decrement
		Vector9b  operator++ (int) noexcept;		// postfix increment
		Vector9b  operator-- (int) noexcept;		// postfix decrement
		
		// assignments
		Vector9b& operator+= (const Vector9b& right) noexcept;
		Vector9b& operator-= (const Vector9b& right) noexcept;
		Vector9b& operator*= (const Vector9b& right) noexcept;
		Vector9b& operator/= (const Vector9b& right) noexcept;
		
		Vector9b& operator+= (const bool number) noexcept;
		Vector9b& operator-= (const bool number) noexcept;
		Vector9b& operator*= (const bool number) noexcept;
		Vector9b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector9b& other) const noexcept;
		bool operator<  (const Vector9b& other) const noexcept;
		bool operator>  (const Vector9b& other) const noexcept;
		bool operator>= (const Vector9b& other) const noexcept;
		
		bool operator<  (const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>  (const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector9b& other) const noexcept;
		bool operator!= (const Vector9b& other) const noexcept;
		bool operator== (const bool number)  const noexcept;
		bool operator!= (const bool number)  const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	class Vector10b
	{
	public:
		bool a, b, c, d, e, f, g, h, i, j;
	public:
		Vector10b() : a(false), b(false), c(false), d(false), e(false), f(false), g(false), h(false), i(false), j(false) {}
		Vector10b(const bool a, const bool b, const bool c, const bool d,
			const bool e, const bool f, const bool g, const bool h,
			const bool i, const bool j) noexcept;
		// copy
		Vector10b(const Vector10b& other) noexcept;
		Vector10b& operator=(const Vector10b& other) noexcept;
		// move
		Vector10b(Vector10b&& other) noexcept;
		Vector10b& operator=(Vector10b&& other) noexcept;
		// assignment
		Vector10b& operator=(const bool number) noexcept;
		
		// math operator
		Vector10b operator+(const Vector10b& v) const noexcept;
		Vector10b operator-(const Vector10b& v) const noexcept;
		Vector10b operator*(const Vector10b& v) const noexcept;
		Vector10b operator/(const Vector10b& v) const noexcept;
		
		Vector10b operator+(const bool number) const noexcept;
		Vector10b operator-(const bool number) const noexcept;
		Vector10b operator*(const bool number) const noexcept;
		Vector10b operator/(const bool number) const noexcept;
		
		// increment / decrement
		Vector10b& operator++ () noexcept;		// prefix increment
		Vector10b& operator-- () noexcept;		// prefix decrement
		Vector10b  operator++ (int) noexcept;	// postfix increment
		Vector10b  operator-- (int) noexcept;	// postfix decrement
		
		// assignments
		Vector10b& operator+= (const Vector10b& right) noexcept;
		Vector10b& operator-= (const Vector10b& right) noexcept;
		Vector10b& operator*= (const Vector10b& right) noexcept;
		Vector10b& operator/= (const Vector10b& right) noexcept;
		
		Vector10b& operator+= (const bool number) noexcept;
		Vector10b& operator-= (const bool number) noexcept;
		Vector10b& operator*= (const bool number) noexcept;
		Vector10b& operator/= (const bool number) noexcept;
		
		// less than / greater than
		bool operator<= (const Vector10b& other) const noexcept;
		bool operator<  (const Vector10b& other) const noexcept;
		bool operator>  (const Vector10b& other) const noexcept;
		bool operator>= (const Vector10b& other) const noexcept;

		bool operator<  (const bool number) const noexcept;
		bool operator<= (const bool number) const noexcept;
		bool operator>  (const bool number) const noexcept;
		bool operator>= (const bool number) const noexcept;
		
		// equal / not equal
		bool operator== (const Vector10b& other) const noexcept;
		bool operator!= (const Vector10b& other) const noexcept;
		bool operator== (const bool number)   const noexcept;
		bool operator!= (const bool number)   const noexcept;
		
		std::uint8_t size() const noexcept;
		void reset(const bool stnd_value = false) noexcept;
		bool& operator[](const std::uint8_t index) noexcept;
		bool& at(const std::uint8_t index) noexcept;
	};


	// overloads for the << operator
	static inline std::ostream& operator<<(std::ostream& os, const Vector2b& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector3b& v) noexcept
	{
		os << "x: " << v.x << " | y: " << v.y << " | z: " << v.z;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector4b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector5b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector6b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector7b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector8b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector9b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i;
		return os;
	}

	static inline std::ostream& operator<<(std::ostream& os, const Vector10b& v) noexcept
	{
		os << "a: " << v.a << " | b: " << v.b << " | c: " << v.c << " | d: " << v.d << " | e: " << v.e << " | f: " << v.f << " | g: " << v.g << " | h: " << v.h << " | i: " << v.i << " | j: " << v.j;
		return os;
	}
	// End
}
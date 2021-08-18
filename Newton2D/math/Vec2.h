#pragma once
#include <string>

class Vec2 {
public:
	static const Vec2 ZERO;
	static const Vec2 X_UNIT;
	static const Vec2 Y_UNIT;

	const double x;
	const double y;
	const double length;

	Vec2(const double _x, const double _y);

	// Binary operators
	Vec2 operator+(const Vec2& v) const;

	Vec2 operator-(const Vec2& v) const;

	Vec2 operator*(const double t) const;

	Vec2 operator/(const double t) const;

	// Unary operator(s)
	Vec2 operator-() const;

	Vec2 norm() const;

	double dot(const Vec2& v) const;

	/*
	Returns the cosine of the angle between this vector and another
	*/
	double cosAngleBetween(const Vec2& other) const;

	std::string toString() const;
};

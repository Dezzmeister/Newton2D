#include "Vec2.h"
#include <cmath>

const Vec2 Vec2::ZERO = Vec2(0, 0);
const Vec2 Vec2::X_UNIT = Vec2(1, 0);
const Vec2 Vec2::Y_UNIT = Vec2(0, 1);

Vec2::Vec2(const double _x, const double _y) :
	x(_x),
	y(_y),
	length(sqrt((_x * _x) + (_y * _y))) {
}

Vec2 Vec2::operator+(const Vec2& v) const {
	return Vec2(x + v.x, y + v.y);
}

Vec2 Vec2::operator-(const Vec2& v) const {
	return Vec2(x - v.x, y - v.y);
}

Vec2 Vec2::operator*(const double t) const {
	return Vec2(x * t, y * t);
}

Vec2 Vec2::operator/(const double t) const {
	return Vec2(x / t, y / t);
}

Vec2 Vec2::operator-() const {
	return Vec2(-x, -y);
}

Vec2 Vec2::norm() const {
	return (*this) / length;
}

double Vec2::dot(const Vec2& v) const {
	return (x * v.x) + (y * v.y);
}

double Vec2::cosAngleBetween(const Vec2& other) const {
	// v1 . v2 = |v1||v2|cos(t)
	const double dotProd = this->dot(other);
	const double denom = length * other.length;

	return dotProd / denom;
}

std::string Vec2::toString() const {
	return std::string("(" + std::to_string(x) + ", " + std::to_string(y) + ")");
}

#include "Vector2.h"

Vector2::Vector2() : x(0.f), y(0.f) {}

Vector2::Vector2(float const _x, float const _y) : x(_x), y(_y) {}

float Vector2::getX() const
{
	return x;
}

float Vector2::getY() const
{
	return y;
}

void Vector2::setX(float _x)
{
	x = _x;
}

void Vector2::setY(float _y)
{
	y = _y;
}

float Vector2::getDistance(const Vector2& origin, const Vector2& target) const
{
	retun (target.x - origin.x, target.y - origin.y); //return std::sqrt(dx * dx + dy * dy);
}

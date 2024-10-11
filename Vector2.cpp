#include "Vector2.h"

Vector2::Vector2() : x(0.f), y(0.f) {}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

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
float Vector2::getDistance(const Vector2& target) const
{
	return std::sqrt(std::pow(target.y - this->y, 2) * std::pow(target.x - this->x, 2));
}

Vector2 Vector2::getDirection(const Vector2& target) const
{
	return Vector2(target.x - this->x, target.y - this->y);
}


Vector2 Vector2::getDirectionNormalized(const Vector2& target) const
{
	return Vector2((target.x - this->x < this->x) * -1, (target.y - this->y < this->y) * -1);
}
#include "AMovable.h"

AMovable::AMovable() : direction(0.f, 0.f), velocity(0.f) {}
AMovable::AMovable(float _direction_x, float _direction_y, float _velocity) : direction(_direction_x, _direction_y), velocity(_velocity) {}

float AMovable::getVelocity() const
{
	return velocity;
}

void AMovable::setDirection(float _direction_x, float _direction_y)
{
	direction.setX(_direction_x);
	direction.setY(_direction_y);
}

void AMovable::setVelocity(float _velocity)
{
	velocity = _velocity;
}

int AMovable::Normalize(const float value) const
{
	return (value > 0) - (value < 0);
}
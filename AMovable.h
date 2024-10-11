#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable
{
	Vector2 direction;
	float velocity;

public:
	AMovable();
	AMovable(float _direction_x, float _direction_y, float _velocity);

	float getVelocity() const;

	virtual void setDirection(float, float);
	virtual void setVelocity(float);
	virtual void Move(float, float) = 0;
	virtual void MoveTo(float, float) = 0;
	int Normalize(const float value) const;
};

#endif


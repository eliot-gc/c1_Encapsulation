#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable
{
	Vector2 direction;
	float velocity;


	AMovable();
	AMovable(float, float, float);

public:
	virtual void setDirection(float, float);
	virtual void setVelocity(float);
	virtual void Move() = 0;
};

#endif


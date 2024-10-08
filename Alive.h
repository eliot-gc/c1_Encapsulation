#ifndef ALIVE_H__
#define ALIVE_H__

#include <iostream>

class Alive
{
	float max_health;
	float health;

	virtual void setDead();

public:

	Alive(float _health, float _max_health);
	virtual float getmaxHealth() const;
	virtual float getHealth() const;
	virtual void takeDamage(float _dmg);
};

#endif


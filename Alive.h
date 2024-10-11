#ifndef ALIVE_H__
#define ALIVE_H__

#include <iostream>

class Alive
{
	float max_health;
	float health;
	bool isDead;

protected:
	virtual void setDead();

public:

	Alive(float _health, float _max_health);
	bool getIsDead() const;
	virtual float getmaxHealth() const;
	virtual float getHealth() const;
	virtual void takeDamage(float _dmg);
};

#endif


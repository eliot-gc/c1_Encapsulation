#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Alive.h"
#include "Entity.h"
#include <iostream>

class BreakableObject : public Entity, public Alive
{

protected:
	virtual void setDead() override;

public:
	BreakableObject(float _location_x, float _location_y, float _max_health, float _health);
	virtual void takeDamage(float _dmg) override;
};

#endif
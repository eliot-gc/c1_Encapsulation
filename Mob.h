#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable
{

public:
	Mob(float _location_x, float _location_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity);
	
	virtual void takeDamage(float _dmg) override;
	virtual void Move(float _move_x, float _move_y) override;
};

#endif
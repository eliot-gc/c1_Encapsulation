#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable
{

protected:
	virtual void setDead() override;
public:
	Mob(float _location_x, float _location_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity);
	
	virtual void Move(float _target_x, float _target_y) override;
	virtual void MoveTo(float _new_x, float _new_y) override;
};

#endif
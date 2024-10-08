#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Amovable.h"
#include "IAttacker.h"
#include <iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(float _location_x, float _location_y, float _health, float _max_heatlh, float _direction_x, float _direction_y, float _velocity);
	virtual void takeDamage(float _dmg) override;
	virtual void Move(float _new_x, float _new_y);
	virtual void Attack(Alive* target) override;
};

#endif
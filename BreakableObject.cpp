#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float _location_x, float _location_y, float _max_health, float _health) : Entity(_location_x, _location_y), Alive(_health, _max_health) 
{
	std::cout << "Breakable Object just created at x =" << _location_x << " and y =" << _location_y << " with " << _health << "HP.";
}


void BreakableObject::updateHealth(float _healthModifier)
{
	std::cout << "Breakable Object just broke.";
}

#include "BreakableObject.h"

void BreakableObject::setDead()
{
	Alive::setDead();
	std::cout << "BreakableObject is broken" << std::endl;
}

BreakableObject::BreakableObject(float _location_x, float _location_y, float _max_health, float _health) : Entity(_location_x, _location_y), Alive(_health, _max_health)
{
	std::cout << "Breakable Object just created at X=" << _location_x << " and Y=" << _location_y << " with " << _max_health << " Max HP." << std::endl;
}

void BreakableObject::takeDamage(float _dmg)
{
	Alive::takeDamage(_dmg);
}

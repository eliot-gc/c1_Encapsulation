#include "Mob.h"

Mob::Mob(float _loc_x, float _loc_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity) : Entity(_loc_x, _loc_y), Alive(_health, _max_health), AMovable(_direction_x, _direction_y, _velocity)
{
	std::cout << "Mob just created at X=" << _loc_x << " and Y=" << _loc_y << " with " << _max_health << " Max HP with direction X=" << _direction_x << " and X=" << _direction_y << "." << std::endl;
}

void Mob::takeDamage(float)
{
	std::cout << "Mob just die" << std::endl; 
}

void Mob::Move(float _add_x, float _add_y)
{
	Vector2 directionNormalized(this->getLocation().getDirectionNormalized(Vector2(_add_x, _add_y)));
	this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY() + directionNormalized.getY() * getVelocity());
	std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
}
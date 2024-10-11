#include "Mob.h"

void Mob::setDead()
{
	Alive::setDead();
	std::cout << "Mob is dead" << std::endl;
}

Mob::Mob(float _loc_x, float _loc_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity) : Entity(_loc_x, _loc_y), Alive(_health, _max_health), AMovable(_direction_x, _direction_y, _velocity)
{
	std::cout << "Mob just created at X=" << _loc_x << " and Y=" << _loc_y << " with " << _max_health << " Max HP with direction X=" << _direction_x << " and X=" << _direction_y << "." << std::endl;
}

void Mob::Move(float _target_x, float _target_y)
{
	Vector2 directionNormalized(this->getLocation().getDirectionNormalized(Vector2(_target_x, _target_y)));

	if ( _target_x == this->getLocationX() && _target_y == this->getLocationY()) { //TARGET REACHED
		std::cout << "Cible atteinte " << std::endl;
	}

	else if (_target_x == this->getLocationX()) //X REACHED
	{
		this->setLocation(this->getLocationX(), this->getLocationY() + directionNormalized.getY() * getVelocity());
		std::cout << "Déplacement de " << "0X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
	}
	
	else if ( _target_y == this->getLocationY()) //Y REACHED
	{
		this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY());
		std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << "0Y." << std::endl;
	}
	
	/*if (this->getLocation().getDistance(Vector2(_target_x, _target_y)) < getVelocity()) { //Techniquement c'est pour ne pas dépasser la cible avec des vitesses de "marche" différentes mais j'ai pas fini

		this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY() + directionNormalized.getY() * getVelocity());
		std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
	}
	if {*/
	else {
		this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY() + directionNormalized.getY() * getVelocity());
		std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
	}
	std::cout << "New: " << this->getLocationStr() << std::endl;
}

void Mob::MoveTo(float _new_x, float _new_y)
{
	std::cout << "Mob moved to X=" << _new_x << " and Y=" << _new_y << "." << std::endl;
}
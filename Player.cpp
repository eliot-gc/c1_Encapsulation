#include "Player.h"

Player::Player(float _location_x, float _location_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity) : Entity(_location_x, _location_y), Alive(_health, _max_health), AMovable(_direction_x, _direction_y, _velocity)
{
	std::cout << "Player just created at X=" << _location_x << " and Y=" << _location_y << " with " << _max_health << " Max HP and with direction X=" << _direction_x << " and Y=" << _direction_y << "." << std::endl;
}

void Player::Move(float _target_x, float _target_y)
{
	Vector2 directionNormalized(this->getLocation().getDirectionNormalized(Vector2(_target_x, _target_y)));

	if (_target_x == this->getLocationX() && _target_y == this->getLocationY()) { //TARGET REACHED
		std::cout << "Cible atteinte " << std::endl;
	}

	else if (_target_x == this->getLocationX()) //X REACHED
	{
		this->setLocation(this->getLocationX(), this->getLocationY() + directionNormalized.getY() * getVelocity());
		std::cout << "Déplacement de " << "0X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
	}

	else if (_target_y == this->getLocationY()) //Y REACHED
	{
		this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY());
		std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << "0Y." << std::endl;
	}

	else {
		this->setLocation(this->getLocationX() + directionNormalized.getX() * getVelocity(), this->getLocationY() + directionNormalized.getY() * getVelocity());
		std::cout << "Déplacement de " << directionNormalized.getX() * getVelocity() << "X et de " << directionNormalized.getY() * getVelocity() << "Y." << std::endl;
	}
	std::cout << "New: " << this->getLocationStr() << std::endl;
}

void Player::MoveTo(float _new_x, float _new_y)
{
	std::cout << "Player moved to X=" << _new_x << " and Y=" << _new_y << "." << std::endl;
}

void Player::Attack(Alive* target)
{
	std::cout << "Player just attacked." << std::endl;
	target->takeDamage(-10);
}

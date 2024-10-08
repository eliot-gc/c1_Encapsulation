#include "Player.h"

Player::Player(float _location_x, float _location_y, float _health, float _max_health, float _direction_x, float _direction_y, float _velocity) : Entity(_location_x, _location_y), Alive(_health, _max_health), AMovable(_direction_x, _direction_y, _velocity)
{
	std::cout << "Player just created at X=" << _location_x << " and Y=" << _location_y << " with " << _max_health << " Max HP and with direction X=" << _direction_x << " and Y=" << _direction_y << "." << std::endl;
}

void Player::takeDamage(float _dmg)
{
	std::cout << "Player just died." << std::endl;
}

void Player::Move(float _new_x, float _new_y)
{
	std::cout << "Player moved to X=" << _new_x << " and Y=" << _new_y << "." << std::endl;
}

void Player::Attack(Alive* target)
{
	std::cout << "Player just attacked.";
	target->takeDamage(-10);
}

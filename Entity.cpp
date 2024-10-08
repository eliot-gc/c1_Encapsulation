#include "Entity.h"

Entity::Entity(float loc_x, float loc_y) : location(loc_x, loc_y) {}


std::string Entity::getLocation() const
{
	std::stringstream temp_stream;
	temp_stream << "X=" << location.getX() << ", Y=" << location.getY();
	return temp_stream.str();
}

float Entity::getLocationX() const
{
	return location.getX();
}
float Entity::getLocationY() const
{
	return location.getY();
}

void Entity::setLocation(float const _x, float const _y)
{
	location.setX(_x);
	location.setY(_y);
}
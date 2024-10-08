//
//  Entity.cpp
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#include <iostream>
#include "Entity.h"

Entity::Entity(float loc_x, float loc_y) : location(loc_x, loc_y) {}


std::string Entity::getLocation() const
{
	std::stringstream temp_stream;
	temp_stream << location.getX() << ", " << location.getY();
	return temp_stream.str();
}

void Entity::setLocation(float const _x, float const _y)
{
	location.setX(_x);
	location.setY(_y);
}
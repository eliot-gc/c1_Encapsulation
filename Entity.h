#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vector2.h"
#include <sstream>
#include <string>

class Entity {
	Vector2 location;

public:
	Entity(float loc_x, float loc_y);
	virtual std::string getLocationStr() const;
	Vector2 getLocation() const;
	float getLocationX() const;
	float getLocationY() const;
	virtual void setLocation(float const _x, float const _y);
};

#endif
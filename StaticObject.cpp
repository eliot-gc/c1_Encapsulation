#include "StaticObject.h"

StaticObject::StaticObject(float _loc_x, float _loc_y) : Entity(_loc_x, _loc_y)
{
	std::cout << "Static Object just created at x=" << _loc_x <<" and y=" << _loc_y << "." << std::endl;
}
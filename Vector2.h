#ifndef VECTOR2_H__
#define VECTOR2_H__

#include "cmath"

class Vector2
{
	float x, y;

public:

	Vector2();
	Vector2(float _x, float _y);
	float getX() const;
	float getY() const;
	void setX(float);
	void setY(float);
	double getDistance(const Vector2& target) const;
	Vector2 getDirection(const Vector2& target) const;
	Vector2 getDirectionNormalized(const Vector2& target) const;
};

#endif


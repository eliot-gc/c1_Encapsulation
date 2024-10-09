#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2
{
	float x, y;

public:

	Vector2();
	Vector2(float const _x, float const _y);
	float getX() const;
	float getY() const;
	void setX(float);
	void setY(float);
	float getDistance(const Vector2& origin, const Vector2& target) const;
};

#endif


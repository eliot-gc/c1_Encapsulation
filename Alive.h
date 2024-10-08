#ifndef ALIVE_H__
#define ALIVE_H__

class Alive
{
	float max_health;
	float health;

public:

	Alive(float, float);
	virtual float getmaxHealth() const;
	virtual float getHealth() const;
	virtual void updateHealth(float);
};

#endif


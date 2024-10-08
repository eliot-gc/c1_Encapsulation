#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Alive.h"
#include "Entity.h"

class BreakableObject : public Entity, public Alive
{
public:
	BreakableObject(float, float, float, float);
	void updateHealth(float) override;
};

#endif
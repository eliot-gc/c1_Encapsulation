#include "Alive.h"
#ifndef IATTACKER_H__
#define IATTACKER_H__

class IAttacker
{
public :
	virtual void Attack(Alive*) = 0;
};

#endif
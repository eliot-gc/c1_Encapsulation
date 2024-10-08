#include "Alive.h"

Alive::Alive(float _health, float _max_health) : health(_health), max_health(_max_health) {}

float Alive::getmaxHealth() const
{
    return max_health;
}

float Alive::getHealth() const
{
    return health;
}

void Alive::updateHealth(float healthModifier)
{
    health += healthModifier;
}

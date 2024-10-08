#include "Alive.h"

void Alive::setDead()
{
    std::cout << "Entity is dead" << std::endl;
}

Alive::Alive(float _health, float _max_health) : health(_health), max_health(_max_health) {}

float Alive::getmaxHealth() const
{
    return max_health;
}

float Alive::getHealth() const
{
    return health;
}

void Alive::takeDamage(float healthModifier)
{
    health += healthModifier;

    if (health <= 0) {
        setDead();
    }
}
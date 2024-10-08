#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Vector2.h"
#include "StaticObject.h"
#include "BreakableObject.h"


void applyDamage(IAlive* alive) {
    alive->TakeDamage(10);
}

int main(int argc, const char* argv[]) {
    //Player* p = new Player();

    //hello(p);
    //applyDamage(p);
    //std::cout << p->IsAlive();

    BreakableObject test(45.54f, 14.4f, 20, 10);
    return 0;
}
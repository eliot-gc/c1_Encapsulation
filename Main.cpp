#include <iostream>
#include "Mob.h"
#include "Player.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "World.h"
#include <Windows.h>

int main(int argc, const char* argv[]) {
    
    SetConsoleOutputCP(1252);

    //Player player(100.f, -1500.f, 20, 20, 1, 0, 2.f);

    //StaticObject grass_block(100.5f, -1550.25f);
    //std::cout << "-Le héros voit un bloc d'herbe, il se trouve en : " << grass_block.getLocation() << "." << std::endl;
    //std::cout << "-Le héros déplace le bloc d'herbe." << std::endl;
    //grass_block.setLocation(150.f, -250.f);
    //std::cout << "-Le bloc d'herbe se trouve maintenant en : " << grass_block.getLocation() << "." << std::endl;
    //std::cout << std::endl;
    //
    //BreakableObject brick(125.54f, -1540.44f, 3, 2);
    //std::cout << "-Une brique vient d'apparaitre devant notre héros à l'emplacement : " << brick.getLocation() << ", elle est destructible et possède actuellement " << brick.getHealth() << "/" << brick.getmaxHealth() << "HP." << std::endl;
    //std::cout << "-Le héros essaye de sauter sur la brique..." << std::endl;
    //brick.setLocation(127.f, -1540);
    //std::cout << "-La brique s'est déplacée comme par magie ! Elle se trouve désormais à l'emplacement : " << brick.getLocation() << "." << std::endl;
    //std::cout << "-Le héros se dépèche de sauter une nouvelle fois sur la brique..." << std::endl;
    //brick.takeDamage(1);
    //std::cout << "-Le héros a réussi à casser notre brique grace à sa rapidité d'action !" << std::endl;
    //std::cout << std::endl;
    //
    //Mob zombie(130.f, -1545.5f, 10, 10, 1, 0, 1.5f);
    //std::cout << "-Un zombie vient d'apparaitre devant notre héros, attention !" << std::endl;
    //std::cout << "-Le zombie en appercevant notre héros se met à courrir dans sa direction." << std::endl;
    //zombie.setVelocity(2.5f);
    //zombie.Move(player.getLocationX(), player.getLocationY());
    //std::cout << "-Notre héros acculé lance un coup d'épée en avant et blesse le zombie qui meurt sur le coup !" << std::endl;
    //player.Attack(&zombie);
    //std::cout << std::endl;

    World world;
    world.Init();
    std::cout << "------------------------" << std::endl;
    world.Step();

    std::cout << "Simulation Finished";

    return 0;
}
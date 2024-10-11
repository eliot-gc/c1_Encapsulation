#include "World.h"

void World::Init()
{
	StaticObject* tree = new StaticObject(100.f, -200.f);
	BreakableObject* bridge = new BreakableObject(120.f, -200.f, 1, 1);
	Mob* skeleton = new Mob(130.f, -200.f, 20, 20, -1, 0, 1.0f);
	Player* p = new Player(120.f, -200.f, 10, 10, 1, 0, 1.0f);

	Entities.push_back(tree);
	Entities.push_back(bridge);
	Entities.push_back(skeleton);
	Entities.push_back(p);
}

void World::Step()
{
	std::cout << std::endl << "Starting Simulation..." << std::endl << std::endl;
	bool mobAlive = true;

	for (;;)
	{
		for (int i(0); i < Entities.size(); i++)
		{
			if (Entities[i] == nullptr) {} //CATCH NULLPTR

			else if (Mob* mob = dynamic_cast<Mob*>(Entities[i]))
			{
				std::cout << "Mob" << std::endl;

				for (int j(0); j < Entities.size(); j++) {
					if (BreakableObject* _breakableobject = dynamic_cast<BreakableObject*>(Entities[j])) {
						mob->Move(_breakableobject->getLocationX(), _breakableobject->getLocationY());
						std::cout << "Target_BreakableObject:" << _breakableobject->getLocationStr() << std::endl;
						std::cout << std::endl;
					}
				}
			}

			else if (Player* p = dynamic_cast<Player*>(Entities[i]))
			{
				std::cout << "Player" << std::endl;

				for (int j(0); j < Entities.size(); j++) {

					if (Entities[j] == nullptr) {} //CATCH NULLPTR

					else if (mobAlive == true) { //If the mob still alive
						if (Mob* mob = dynamic_cast<Mob*>(Entities[j])) {

							p->Move(mob->getLocationX(), mob->getLocationY());
							std::cout << "Target_Mob:" << mob->getLocationStr() << std::endl;

							if (p->getLocation().getDistance(mob->getLocation()) < 1.0f)
							{
								p->Attack(mob);
								if (mob->getIsDead()) //Mob is dead?
								{
									Entities.erase(Entities.begin() + j);
									Entities.shrink_to_fit();
									mobAlive = false;
									free(mob);
									i--, j--;
								}
							}
							std::cout << std::endl;
						}
						
					}

					else if (BreakableObject* _breakableobject = dynamic_cast<BreakableObject*>(Entities[j])) //BreakableObject && don't reachable if the mob still alive
					{
						p->Move(_breakableobject->getLocationX(), _breakableobject->getLocationY());
						std::cout << "Target_BreakableObject:" << _breakableobject->getLocationStr() << std::endl;

						if (p->getLocation().getDistance(_breakableobject->getLocation()) < 1.0f)
						{
							p->Attack(_breakableobject);
							if (_breakableobject->getIsDead()) //Mob is dead?
							{
								Entities.erase(Entities.begin() + j);
								Entities.shrink_to_fit();
								free(_breakableobject);
								i--, j--;
								std::cout << std::endl << "Simulation Finished" << std::endl;
								return;
							}
						}
						std::cout << std::endl;
					}
				}
			}
		}
	}	
}

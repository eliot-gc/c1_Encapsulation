#include "World.h"

void World::Init()
{
	StaticObject* tree = new StaticObject(100.f, -200.f);
	BreakableObject* bridge = new BreakableObject(120.f, -200.f, 1, 1);
	Mob* skeleton = new Mob(130.f, -200.f, 20, 20, -1, 0, 2.f);
	Player* p = new Player(120.f, -200.f, 10, 10, 1, 0, 2.5f);

	Entities.push_back(tree);
	Entities.push_back(bridge);
	Entities.push_back(skeleton);
	Entities.push_back(p);
}

void World::Step()
{
	StaticObject* tree = (StaticObject*)Entities[0];
	BreakableObject* bridge = (BreakableObject*)Entities[1];
	Mob* skeleton = (Mob*)Entities[2];
	Player* p = (Player*)Entities[3];

	for (int i(0); i < Entities.size(); i++)
	{
		if (Entities[i] == nullptr) {continue;} //CATCH NULLPTR

		else if( dynamic_cast<Mob*>(Entities[i]))
		{
			std::cout << "Mob";
			if (std::find(Entities.begin(), Entities.end(), bridge) != Entities.end()) //BreakableObject still exist?
			{
				skeleton->Move(bridge->getLocationX(), bridge->getLocationY());
			}
			continue;
		}
		else if( dynamic_cast<Player*>(Entities[i]))
		{
			std::cout << "Player";
			if (std::find(Entities.begin(), Entities.end(), skeleton) != Entities.end()) //Mob still exist?
			{
				p->Move(skeleton->getLocationX(), skeleton->getLocationY());

				Vector2 distance;
				if (distance.getDistance(p->getLocation(), skeleton->getLocation())  0)
			}
			continue;
		}
	}

	if (Entities.size() != 0) {
		Step();
	}		
}

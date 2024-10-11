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

	bool test = dynamic_cast<Player*>(Entities[2]);
	std::cout << test;

	for (int i(0); i < Entities.size(); i++)
	{
		/*if (i == Entities.size() - 1) {
			i = 0;
			std::cout << std::endl << std::endl << std::endl << "New itteration" << std::endl << std::endl;
		}*/

		//else if (Entities[i] == nullptr) {continue;} //CATCH NULLPTR

		if (Mob* mob = dynamic_cast<Mob*>(Entities[i]))
		{
			for (int j(0); j < Entities.size(); j++) {
				if (BreakableObject* _breakableobject = dynamic_cast<BreakableObject*>(Entities[j])) {
					mob->Move(_breakableobject->getLocationX(), _breakableobject->getLocationY());
				}
			}
		}
		
		else if (Player* p = dynamic_cast<Player*>(Entities[i]))
		{
			for (int j(0); j < Entities.size(); j++) {

				if (Mob* mob = dynamic_cast<Mob*>(Entities[j])) {
					p->Move(mob->getLocationX(), mob->getLocationY());
				}
				
				else if (BreakableObject* _breakableobject = dynamic_cast<BreakableObject*>(Entities[j]) and //SI LE MOB EST PAS EN VIE) {
					p->Move(_breakableobject->getLocationX(), _breakableobject->getLocationY());
				}
			}
		}
	}	

}

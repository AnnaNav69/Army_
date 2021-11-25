#include "Soldier.h"
#include "../State/SoldierState.h"

Soldier::Soldier(const std::string& name, int hp, int dmg) : Unit(new SoldierState(name, hp, dmg), new Attack()) {
	std::cout<<"Soldier constructor"<<std::endl;
}
Soldier::~Soldier() {
	std::cout<<"Soldier destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}
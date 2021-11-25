#include "Berserker.h"
#include "../State/BerserkerState.h"

Berserker::Berserker(const std::string& name, int hp, int dmg) 
: Unit(new BerserkerState(name, hp, dmg), new BerserkerAttack()) {
	std::cout<<"Berserker constructor"<<std::endl;
}

Berserker::~Berserker() {
	std::cout<<"Berserker destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}

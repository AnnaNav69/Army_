#include "Vampire.h"
#include "../State/VampireState.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(new VampireState(name, hp, dmg), new VampireAttack()) {
	std::cout<<"Vampire constructor"<<std::endl;
}

Vampire::~Vampire(){
	std::cout<<"Vampire destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}


#include "Rogue.h"
#include "../State/RogueState.h"

Rogue::Rogue(const std::string& name, int hp, int dmg) 
: Unit(new RogueState(name, hp, dmg), new RogueAttack()) {
	std::cout<<"Rogue constructor"<<std::endl;
}

Rogue::~Rogue() {
	std::cout<<"Rogue destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}

#include "Healer.h"
#include "../SpellCasterState/HealerState.h"
#include "../SpellCasterAttack/HealerAttack.h"

Healer::Healer(const std::string& name, int hp, int dmg, int mp) 
: SpellCaster (new HealerState(name, hp, dmg, mp), new HealerAttack()) {
	std::cout<<"Healer constructor"<<std::endl;
}
Healer::~Healer() {
	std::cout<<"Healer destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}

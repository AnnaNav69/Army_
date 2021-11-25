#include "Priest.h"
#include "../SpellCasterState/PriestState.h"
#include "../SpellCasterAttack/PriestAttack.h"

Priest::Priest(const std::string& name, int hp, int dmg, int mp) 
: SpellCaster (new PriestState(name, hp, dmg, mp), new PriestAttack()) {
	std::cout<<"Priest constructor"<<std::endl;
}
Priest::~Priest() {
	std::cout<<"Priest destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}
#include "Wizard.h"
#include "../SpellCasterState/WizardState.h"
#include "../SpellCasterAttack/WizardAttack.h"


Wizard::Wizard(const std::string& name, int hp, int dmg, int mp) 
: SpellCaster(new WizardState(name, hp, dmg, mp), new WizardAttack()) {
	std::cout<<"Wizard constructor"<<std::endl;
}

Wizard::~Wizard() {
	std::cout<<"Wizard destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}

#include "WizardState.h"

WizardState::WizardState (const std::string& name, int hp, int dmg, int mp)
: SCasterState(name, hp, dmg, mp) {
	std::cout<<"WizardState constructor"<<std::endl;
}
WizardState::~WizardState() {
	std::cout<<"WizardState destructor"<<std::endl;
}

bool WizardState::isAWizard() {
	return true;
}
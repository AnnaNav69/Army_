#include "PriestState.h"

PriestState::PriestState(const std::string& name, int hp, int dmg, int mp) : SCasterState(name, hp, dmg, mp) {
	std::cout<<"PriestState constructor"<<std::endl;
}
PriestState::~PriestState() {
	std::cout<<"PriestState destructor"<<std::endl;
}

bool PriestState::isAPriest() {
	return true;
}
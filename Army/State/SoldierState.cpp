#include "SoldierState.h"

SoldierState::SoldierState (const std::string& name, int hp, int dmg) : State(name, hp, dmg) {
	std::cout<<"SoldierState constructor"<<std::endl;
}
SoldierState::~SoldierState() {
	std::cout<<"SoldierState destructor"<<std::endl;
}

bool SoldierState::isASoldier() {
	return true;
}
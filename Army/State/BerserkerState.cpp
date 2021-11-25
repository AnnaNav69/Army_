#include "BerserkerState.h"

BerserkerState::BerserkerState (const std::string& name, int hp, int dmg) : State(name, hp, dmg) {
	std::cout<<"BerserkerState constructor"<<std::endl;
}
BerserkerState::~BerserkerState() {
	std::cout<<"BerserkerState destructor"<<std::endl;
}

bool BerserkerState::isABerserker() {
	return true;
}
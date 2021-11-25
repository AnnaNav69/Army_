#include "VampireState.h"

VampireState::VampireState (const std::string& name, int hp, int dmg) : State(name, hp, dmg) {
	std::cout<<"VampireState constructor"<<std::endl;
}
VampireState::~VampireState() {
	std::cout<<"VampireState destructor"<<std::endl;
}

bool VampireState::isAVampire() {
	return true;
}
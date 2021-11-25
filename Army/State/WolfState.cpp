#include "WolfState.h"

WolfState::WolfState(const std::string& name, int hp, int hpl, int dmg) : State(name, hp, dmg) {
	this->hitPointsLimmit = hpl;
	std::cout<<"WolfState constructor"<<std::endl;
}
WolfState::~WolfState() {
	std::cout<<"WolfState destructor"<<std::endl;
}

bool WolfState::isAWolf() {
	return true;	
}
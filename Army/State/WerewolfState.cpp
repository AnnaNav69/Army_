#include "WerewolfState.h"

WerewolfState::WerewolfState (const std::string& name, int hp, int hpl, int dmg) : State(name, hp, dmg) {
	this->hitPointsLimmit = hpl;
	std::cout<<"WerewolfState constructor"<<std::endl;
}
WerewolfState::~WerewolfState() {
std::cout<<"WerewolfState destructor"<<std::endl;
}

bool WerewolfState::isAWerewolf() {
	return true;
}
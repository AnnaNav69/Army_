#include "RogueState.h"

RogueState::RogueState (const std::string& name, int hp, int dmg) : State(name, hp, dmg) {
	std::cout<<"RogueState constructor"<<std::endl;
}
RogueState::~RogueState() {
	std::cout<<"RogueState destructor"<<std::endl;
}

bool RogueState::isARogue() {
	return true;
}
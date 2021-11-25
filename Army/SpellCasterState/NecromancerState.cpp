#include "NecromancerState.h"

NecromancerState::NecromancerState(const std::string& name, int hp, int dmg, int mp) 
: SCasterState(name, hp, dmg, mp) {
	std::cout<<"NecromancerState constructor"<<std::endl;
}
NecromancerState::~NecromancerState() {
	std::cout<<"NecromancerState destructor"<<std::endl;
}

bool NecromancerState::isANecromancer() {
	return true;
}

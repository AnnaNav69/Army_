#include "WarlockState.h"

WarlockState::WarlockState (const std::string& name, int hp, int dmg, int mp)
: SCasterState(name, hp, dmg, mp) {
	std::cout<<"WarlockState constructor"<<std::endl;
}
WarlockState::~WarlockState() {
	std::cout<<"WarlockState destructor"<<std::endl;
}

bool WarlockState::isAWarlock() {
	return true;
}



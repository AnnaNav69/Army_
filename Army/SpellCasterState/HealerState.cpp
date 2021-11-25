#include "HealerState.h"

HealerState::HealerState(const std::string& name, int hp, int dmg, int mp) : SCasterState(name, hp, dmg, mp) {
	std::cout<<"HealerState constructor"<<std::endl;
}
HealerState::~HealerState() {
	std::cout<<"HealerState destructor"<<std::endl;
}

bool HealerState::isAHealer() {
	return true;
}
#include "SCasterState.h"

SCasterState::SCasterState(const std::string& name, int hp, int dmg, int mp) 
: State(name, hp, dmg) {
	this->magicPowers = mp;
	std::cout<<"SpellCasterState constructor"<<std::endl;
}
SCasterState::~SCasterState() {
	std::cout<<"SpellCasterState destructor"<<std::endl;
}

const int SCasterState::getMagicPowers() const {
	return this->magicPowers;
}

bool SCasterState::reduceMagicPower(int mp) {
	int newMP = this->magicPowers - mp;

	if ( newMP >= 0 ) {
		this->magicPowers = newMP;
		return true;
	}
	return false;
}

bool SCasterState::isASpellCaster() {
	return true;
}

bool SCasterState::isAWizard() {
	return false;
}
bool SCasterState::isAHealer() {
	return false;
}
bool SCasterState::isAPriest() {
	return false;
}
bool SCasterState::isAWarlock() {
	return false;
}
bool SCasterState::isANecromancer() {
	return false;
}

std::ostream& operator<<(std::ostream& out, SCasterState& state) {
	out<<state.getName()<<" [ " <<state.getHitPoints()
	<<"/"<<state.getHitPointsLimit()
	<<"/"<<state.getDamage()
	<<"/"<<state.getMagicPowers()<<" ]";
	return out;
}


#include "Heal.h"

Heal::Heal(const std::string& spellName, int nMP, int sPow ) 
: Spell(spellName, nMP, sPow) {
	std::cout<<"Heal constructor"<<std::endl;
}
Heal::~Heal() {
	std::cout<<"Heal destructor"<<std::endl;
}

void Heal::castSpellUpon(Unit* wizard, Unit* unit) {
	int heal = this->spellPower;
	int maxHP = unit->getState()->getHitPointsLimit();
	int newHP = unit->getState()->getHitPoints() + heal;

	unit->ensureIsAlive();
	if ( unit->getState()->isABerserker()) {
		return;
	}
	if ( (static_cast<SCasterState*>(wizard->getState()))->isAWizard() ) {
		heal /= 2;
		newHP = unit->getState()->getHitPoints() + heal;
	}
	if ( newHP > maxHP ) {
		unit->getState()->setHitPoints(maxHP);
	} else {
		unit->getState()->setHitPoints(newHP);
	}
}
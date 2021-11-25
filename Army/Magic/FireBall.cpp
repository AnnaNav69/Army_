#include "FireBall.h"

FireBall::FireBall (const std::string& spellName, int nMP, int sPow) 
: Spell(spellName, nMP, sPow) {
	std::cout<<"FireBall constructor"<<std::endl;
}

FireBall::~FireBall () {
	std::cout<<"FireBall destructor"<<std::endl;
}

void FireBall::castSpellUpon(Unit* wizard, Unit* unit) {
	int dmg = this->spellPower;

	if ( unit->getState()->isABerserker()) {
		return;
	}
	if ( (static_cast<SCasterState*>(wizard->getState()))->isAHealer() ) {
		dmg /= 2;
	}
	if ( static_cast<SCasterState*>(wizard->getState())->isAPriest() ) {
		dmg /= 2;
		if ( unit->getState()->isAVampire() || static_cast<SCasterState*>(wizard->getState())->isANecromancer() ) {
			int unitBoost = 4;

			dmg *= unitBoost;
		} 
	}
	if ( unit->getState()->isAWolf()) {
		int unitBoost = 4;

		dmg *= unitBoost;
	}
	unit->getAttack()->takePDamage(unit, dmg);
}

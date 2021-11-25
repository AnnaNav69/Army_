#include "PriestAttack.h"
#include "../SpellCasterState/SCasterState.h"

PriestAttack::PriestAttack() : SpellCasterAttack() {
	std::cout<<"PriestAttack constructor"<<std::endl;
}
PriestAttack::~PriestAttack(){
	std::cout<<"PriestAttack destructor"<<std::endl;
}

// void PriestAttack::attack(Unit* unit, Unit* enemy) {
// 	int dmg = unit->getState()->getDamage();

// 	if ( enemy->getState()->isAVampire() || static_cast<SCasterState*>(enemy->getState())->isANecromancer() ) {
// 		dmg *= 2;
// 	}
// 	this->takePDamage(enemy, dmg);
// 	if ( enemy->getState()->getHitPoints() > 0 ) {
// 		this->counterAttack(unit, enemy->getState()->getDamage()/2);
// 	}
// }

// void PriestAttack::counterAttack(Unit* enemy, int dmg) {
// 	this->takePDamage(enemy, dmg);
// }
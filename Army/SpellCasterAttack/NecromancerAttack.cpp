#include "NecromancerAttack.h"
#include "../SpellCaster/Necromancer.h"

class Necromancer;

NecromancerAttack::NecromancerAttack() : SpellCasterAttack() {
	std::cout<<"NecromancerAttack constructor"<<std::endl;
}
NecromancerAttack::~NecromancerAttack(){
	std::cout<<"NecromancerAttack destructor"<<std::endl;
}

void NecromancerAttack::attack(Observable* unit, Observable* enemy) {
	Unit* unitObject = static_cast<Unit*>(unit);
	Unit* enemyObject = static_cast<Unit*>(enemy);
	
	enemy->attach(static_cast<Necromancer*>(unit));
	enemyObject->getAttack()->takePDamage(enemyObject, unitObject->getState()->getDamage());
	if ( enemyObject->getState()->getHitPoints() > 0 ) {
		enemyObject->getAttack()->counterAttack(unitObject, enemyObject);
	}
}

void NecromancerAttack::magicAttack(SpellCaster* wizard, SpellBook::spells spell, Unit* enemy) {
	enemy->attach(static_cast<Necromancer*>(wizard));
	Spell* magic = this->castASpell(wizard, spell);
	if ( magic == NULL ) {
		wizard->attack(enemy);
	} else {
		magic->castSpellUpon(wizard, enemy);
	}
	enemy->getAttack()->counterAttack(wizard, enemy);
}

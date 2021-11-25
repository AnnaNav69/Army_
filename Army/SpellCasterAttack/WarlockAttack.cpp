#include "WarlockAttack.h"
#include "../SpellCaster/Warlock.h"

WarlockAttack::WarlockAttack() : SpellCasterAttack() {
	std::cout<<"WarlockAttack constructor"<<std::endl;
}
WarlockAttack::~WarlockAttack() {
	std::cout<<"WarlockAttack destructor"<<std::endl;

}

void WarlockAttack::attack(Observable* unit, Observable* enemy) {
	Warlock* warlock = static_cast<Warlock*>(unit);
	int size = warlock->getDemonListSize();

	if( size > 0 ) {
		for ( int i = 0; i < size; i++ ) {
			warlock->getDemon(i)->attack(enemy);
		}
	} else {
		Unit* unitObject = static_cast<Unit*>(unit);
		Unit* enemyObject = static_cast<Unit*>(enemy);

		enemyObject->getAttack()->takePDamage(enemyObject, unitObject->getState()->getDamage());
		if ( enemyObject->getState()->getHitPoints() > 0 ) {
			enemyObject->getAttack()->counterAttack(unitObject, enemyObject);
		}
	}
}

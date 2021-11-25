#include "VampireAttack.h"
#include "../State/VampireState.h"
#include "../Unit/Vampire.h"

VampireAttack::VampireAttack() : Attack() {
	std::cout<<"VampireAttack constructor"<<std::endl;
}
VampireAttack::~VampireAttack() {
	std::cout<<"VampireAttack destructor"<<std::endl;
}

void VampireAttack::attack(Observable* unit, Observable* enemy) {
	Unit* unitObject = static_cast<Unit*>(unit);
	Unit* enemyObject = static_cast<Unit*>(enemy);
	int vampireBoost = enemyObject->getState()->getHitPoints()/10;

	enemyObject->getAttack()->takePDamage(enemyObject, vampireBoost);
	unitObject->getAttack()->addHitPoints(unitObject, vampireBoost);
	enemyObject->getAttack()->takePDamage(enemyObject, unitObject->getState()->getDamage());
	if ( enemyObject->getState()->getHitPoints() > 0 ) {
		enemyObject->getAttack()->counterAttack(unitObject, enemyObject);
	}
}

void VampireAttack::counterAttack(Unit* enemy, Unit* unit) {
	int vampireBoost = enemy->getState()->getHitPoints()/10;

	enemy->getAttack()->takePDamage(enemy, vampireBoost);
	unit->getAttack()->addHitPoints(unit, vampireBoost);
	enemy->getAttack()->takePDamage(enemy, unit->getState()->getDamage()/2);
}

void VampireAttack::bite(Observable* unit) {
	// if ( unit->getState()->isAVampire() || unit->getState()->isAWerewolf() || unit->getState()->isAWolf() ) {
	// 	return;
	// }
	Unit* unitObject = static_cast<Unit*>(unit);
	unitObject->changeState(new VampireState());
	unitObject->changeAbility(new VampireAttack());
}
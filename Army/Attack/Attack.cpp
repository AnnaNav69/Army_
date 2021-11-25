#include "Attack.h"

Attack::Attack() {
	std::cout<<"Attack constructor"<<std::endl;
}
Attack::~Attack() {
	std::cout<<"Attack destructor"<<std::endl;
}

void Attack::takePDamage(Unit* unit, int dmg) {
	// Unit* object = static_cast<Unit*>(unit);

	unit->ensureIsAlive();
	int hp = unit->getState()->getHitPoints();

	if ( hp > dmg ) {
		unit->getState()->setHitPoints(hp - dmg);
	} else {
		unit->getState()->setHitPoints(0);
		unit->notify();
	}
}

void Attack::addHitPoints(Observable* unit, int hp) {
	Unit* object = static_cast<Unit*>(unit);

	object->ensureIsAlive();
	int newHP = object->getState()->getHitPoints() + hp;

	if ( newHP > object->getState()->getHitPointsLimit() ) {
		newHP = object->getState()->getHitPointsLimit();
	}
	object->getState()->setHitPoints(newHP);
}

void Attack::attack(Observable* unit, Observable* enemy) {
	Unit* unitObject = static_cast<Unit*>(unit);
	Unit* enemyObject = static_cast<Unit*>(enemy);

	enemyObject->getAttack()->takePDamage(enemyObject, unitObject->getState()->getDamage());
	if ( enemyObject->getState()->getHitPoints() > 0 ) {
		enemyObject->getAttack()->counterAttack(unitObject, enemyObject);
	}
}

void Attack::counterAttack(Unit* enemy, Unit* unit) {
	enemy->getAttack()->takePDamage(enemy, unit->getState()->getDamage()/2);
}


void Attack::bite(Observable* unit) {}

void Attack::transform(Observable* unit) {}





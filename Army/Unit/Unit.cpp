#include "Unit.h"

Unit::Unit(State* uState, Attack* uAttack) : uState(uState), uAttack(uAttack) {
	std::cout<<"Unit constructor"<<std::endl;
}

Unit::~Unit() {
	std::cout<<"Unit destructor"<<std::endl;
}

void Unit::ensureIsAlive() {
	if (this->uState->getHitPoints() <= 0) {
		throw UnitIsDead();
	}
}

State* Unit::getState() {
	return this->uState;
}

Attack* Unit::getAttack() {
	return this->uAttack;
}

void Unit::attack(Observable* enemy) {
	this->uAttack->attack(this, enemy);
}

void Unit::changeState(State* state) {
	delete(this->uState);
	this->uState = state;
}
void Unit::changeAbility(Attack* attack) {
	delete(this->uAttack);
	this->uAttack = attack;
}

void Unit::bite(Observable* enemy) {
	if ( this->uState->isAVampire() || this->uState->isAWerewolf() || this->uState->isAWolf() ) {
		this->uAttack->bite(enemy);
	}
}

void Unit::transform() {
	if ( this->uState->isAWolf() || this->uState->isAWerewolf() ) {
		this->uAttack->transform(this);
	}
}

void Unit::attach(Observer* observer) {
	this->contactList.insert(observer);
}

void Unit::detach(Observer* observer) {
	this->contactList.erase(observer);
}

void Unit::notify() {
	std::set<Observer*>::iterator it;

	for (it = this->contactList.begin(); it != this->contactList.end(); it++ ) {
		(*it)->getNotificated(this->uState->getDamage());
	}
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
	out<<*unit.getState();
	return out;
}
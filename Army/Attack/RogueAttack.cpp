#include "RogueAttack.h"

RogueAttack::RogueAttack() : Attack() {
	std::cout<<"RogueAttack constructor"<<std::endl;
}
RogueAttack::~RogueAttack() {
	std::cout<<"RogueAttack destructor"<<std::endl;
}

void RogueAttack::attack(Observable* unit, Observable* enemy) {
	Unit* unitObject = static_cast<Unit*>(unit);
	Unit* enemyObject = static_cast<Unit*>(enemy);
	this->takePDamage(enemyObject, unitObject->getState()->getDamage());
}

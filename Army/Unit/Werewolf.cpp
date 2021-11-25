#include "Werewolf.h"
#include "../State/WerewolfState.h"
#include "../State/WolfState.h"
#include "../Attack/WerewolfAttack.h"

Werewolf::Werewolf(const std::string& name, int hp, int hpl, int dmg) 
: Unit(new WerewolfState(name, hp, hpl, dmg), new WerewolfAttack()) {
	std::cout<<"Werewolf constructor"<<std::endl;
}

Werewolf::~Werewolf(){
	std::cout<<"Werewolf destructor"<<std::endl;
	delete(uState);
	delete(uAttack);
}

// void Werewolf::transformIntoWolf () {
// 	if ( this->uState->isAWolf() ) {
// 		return;
// 	}

// 	int newHP = this->getState()->getHitPoints()*2;
// 	int newDMG = this->getState()->getDamage()*4;
// 	int newHPL = this->getState()->getHitPointsLimit()*2;
// 	delete(this->uState);
// 	// delete(this->uAttack);
// 	this->uState = new WolfState("Wolf", newHP, newHPL, newDMG);
// 	// this->uAttack = new WolfAttack();
// }

// void Werewolf::transformIntoWerewolf() {
// 	if ( this->uState->isAWerewolf() ) {
// 		return;
// 	}
// 	int newHP = this->getState()->getHitPoints()/2;
// 	int newDMG = this->getState()->getDamage()/4;
// 	int newHPL = this->getState()->getHitPointsLimit()/2;
// 	delete(this->uState);
// 	// delete(this->uAttack);
// 	this->uState = new WerewolfState("Werewolf", newHP, newHPL, newDMG);
// 	// this->uAttack = new Attack();
// }

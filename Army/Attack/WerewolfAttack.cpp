#include "WerewolfAttack.h"
#include "../State/WolfState.h"
#include "../State/WerewolfState.h"

WerewolfAttack::WerewolfAttack() : Attack() {
	std::cout<<"WerewolfAttack constructor"<<std::endl;
}
WerewolfAttack::~WerewolfAttack(){
	std::cout<<"WerewolfAttack destructor"<<std::endl;
}

void WerewolfAttack::bite(Observable* unit) {
	// if ( unit->getState()->isAVampire() || unit->getState()->isAWerewolf() || unit->getState()->isAWolf() ) {
	// 	return;
	// }
	Unit* unitObject = static_cast<Unit*>(unit);
	unitObject->changeState(new WerewolfState());
	unitObject->changeAbility(new WerewolfAttack());
}

void WerewolfAttack::transform(Observable* unit) {
	Unit* unitObject = static_cast<Unit*>(unit);

	if ( unitObject->getState()->isAWerewolf() ) {
		int newHP = unitObject->getState()->getHitPoints()*2;
		int newHPL = unitObject->getState()->getHitPointsLimit()*2;
		int newDMG = unitObject->getState()->getDamage()*4;

		unitObject->changeState(new WolfState("Wolf", newHP, newHPL, newDMG));
	} else if ( unitObject->getState()->isAWolf() ) {
		int newHP = unitObject->getState()->getHitPoints()/2;
		int newDMG = unitObject->getState()->getDamage()/4;
		int newHPL = unitObject->getState()->getHitPointsLimit()/2;

		unitObject->changeState(new WerewolfState("Werewolf", newHP, newHPL, newDMG));
	}
}
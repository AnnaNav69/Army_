#include "Necromancer.h"
#include "../SpellCasterState/NecromancerState.h"
#include "../SpellCasterAttack/NecromancerAttack.h"

Necromancer::Necromancer (const std::string& name, int hp, int dmg, int mp) 
: SpellCaster(new NecromancerState (name, hp, dmg, mp), new NecromancerAttack()) {
	std::cout<<"Necromancer constructor"<<std::endl;
}
Necromancer::~Necromancer() {
	delete(this->uState);
	delete(this->uAttack);
	std::cout<<"Necromancer destructor"<<std::endl;
}

// void Necromancer::track(Observable* unit) {
// 	if ( this->getState()->isANecromancer() ) {
// 		observabletList.insert(unit);
// 	} else {
// 		throw NotASpellCaster();
// 	}
// }

// void Necromancer::release(Observable* unit) {
// 	if ( this->getState()->isANecromancer() ) {
// 		observabletList.erase(unit);
// 	} else {
// 		throw NotASpellCaster();
// 	}
// }

void Necromancer::getNotificated(int boost) {
	if ( !static_cast<NecromancerState*>(this->getState())->isANecromancer() ) {
		throw NotASpellCaster();
	} else {
		this->uAttack->addHitPoints(this, boost);
	}
}

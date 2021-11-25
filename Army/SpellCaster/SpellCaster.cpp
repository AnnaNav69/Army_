#include "SpellCaster.h"
#include "../SpellCasterAttack/SpellCasterAttack.h"

SpellCaster::SpellCaster(State* uState, Attack* uAttack) 
: Unit(uState, uAttack), spellBook(new SpellBook()) {
	std::cout<<"SpellCaster constructor"<<std::endl;
}

SpellCaster::~SpellCaster() {
	std::cout<<"SpellCaster destructor"<<std::endl;
	delete(this->spellBook);
}

void SpellCaster::hasSpellCasterPowers() {
	if ( !this->getState()->isASpellCaster() ) {
		throw NotASpellCaster();
	}
}

void SpellCaster::magicPowerNotEmpty() {
	this->hasSpellCasterPowers();
	if ( static_cast<SCasterState*>(this->uState)->magicPowers <= 0 ) {
		throw noManaAvaliable();
	}
}

SCasterState* SpellCaster::getSCasterState() {
	return static_cast<SCasterState*>(this->uState);
}

void SpellCaster::wiz(SpellBook::spells spell, Unit* enemy) {
	this->hasSpellCasterPowers();
	static_cast<SpellCasterAttack*>(this->uAttack)->wiz(this, spell, enemy);
}


std::ostream& operator<<(std::ostream& out, SpellCaster& wizard) {
	if ( wizard.getState()->isASpellCaster() ) {
		out<<*wizard.getSCasterState();
	} else {
		out<<*wizard.getState();
	}
	return out;
}



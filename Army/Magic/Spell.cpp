#include "Spell.h"

Spell::Spell(const std::string& spellName, int nMP, int sPow) 
: spellName(spellName), necessaryMagicPower(nMP), spellPower(sPow) {
	std::cout<<"Spell constructor"<<std::endl;
}
Spell::~Spell() {
	std::cout<<"Spell destructor"<<std::endl;
}

const std::string Spell::getSpellName() const {
	return this->spellName;
}
const int Spell::getNecessaryMagicPower() const {
	return this->necessaryMagicPower;
}

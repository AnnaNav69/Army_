#include "SpellBook.h"

SpellBook::SpellBook() {
	std::cout<<"SpellBook constructor"<<std::endl;
	this->spellsList.insert(std::pair<spells, Spell*> (FIREBALL, new FireBall()));
	this->spellsList.insert(std::pair<spells, Spell*> (HEAL, new Heal()));
}
SpellBook::~SpellBook() {
	std::cout<<"SpellBook destructor"<<std::endl;
	delete (spellsList.find(FIREBALL)->second);
	delete (spellsList.find(HEAL)->second);
}

Spell*  SpellBook::readSpell (spells s) {
	return spellsList.find(s)->second;
}

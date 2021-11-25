#ifndef SPELLBOOK_H
#define SPELLBOOK_H
#include <map>
#include <iostream>

#include "FireBall.h"
#include "Heal.h"

class SpellBook {
	public:
		typedef enum {FIREBALL, HEAL} spells;
		std::map<spells, Spell*> spellsList;
	public:
		SpellBook();
		~SpellBook();

		Spell* readSpell (spells s);
};

#endif //SPELLBOOK_H

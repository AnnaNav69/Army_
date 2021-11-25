#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
	public:
		Heal(const std::string& spellName = "Heal", int nMP = 20, int sPow = 30);
		virtual ~Heal();

		virtual void castSpellUpon(Unit* wizard, Unit* unit);
};

#endif //HEAL_H
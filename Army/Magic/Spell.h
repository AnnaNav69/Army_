#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "../Unit/Unit.h"
#include "../SpellCasterState/SCasterState.h"

class Unit;

class Spell {
	protected:
		std::string spellName;
		int necessaryMagicPower;
		int spellPower;
	public:
		Spell(const std::string& spellName, int nMP, int sPow);
		virtual ~Spell();

		virtual const std::string getSpellName() const;
		virtual const int getNecessaryMagicPower() const;

		virtual void castSpellUpon(Unit* wizard, Unit* unit) = 0;
};

#endif //SPELL_H
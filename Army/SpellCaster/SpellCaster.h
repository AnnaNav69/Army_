#ifndef SPELLCASTERSTATE_H
#define SPELLCASTERSTATE_H

#include <iostream>
#include "../Unit/Unit.h"
#include "../Magic/SpellBook.h"
#include "../SpellCasterState/SCasterState.h"

class SpellBook;

class SpellCaster : public Unit {
	public:
		SpellBook* spellBook;
		SpellCaster(State* uState, Attack* uAttack);
		virtual ~SpellCaster();

		virtual void hasSpellCasterPowers();

		virtual void magicPowerNotEmpty();

		virtual SCasterState* getSCasterState();

		virtual void wiz(SpellBook::spells s, Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, SpellCaster& wizard);

#endif //SPELLCASTERSTATE_H

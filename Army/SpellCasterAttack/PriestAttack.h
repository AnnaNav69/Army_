#ifndef PRIESTATTACK_H
#define PRIESTATTACK_H

#include "SpellCasterAttack.h"

class PriestAttack : public SpellCasterAttack {
	public:
		PriestAttack();
		virtual ~PriestAttack();

		// virtual void attack(Unit* unit, Unit* enemy);
		// virtual void counterAttack(Unit* enemy, int dmg);
};

#endif //PRIESTATTACK_H
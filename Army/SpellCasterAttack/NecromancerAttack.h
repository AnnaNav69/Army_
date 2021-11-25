#ifndef NECROMANCERATTACK_H
#define NECROMANCERATTACK_H

#include "SpellCasterAttack.h"
#include "../SpellCaster/Necromancer.h"

class Necromancer;

class NecromancerAttack : public SpellCasterAttack {
	public:
		NecromancerAttack();
		virtual ~NecromancerAttack();

		virtual void attack(Observable* unit, Observable* enemy);
		virtual void magicAttack(SpellCaster* wizard, SpellBook::spells spell, Unit* enemy);
};

#endif //NECROMANCERATTACK_H
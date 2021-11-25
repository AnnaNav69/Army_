#ifndef WARLOCKATTACK_H
#define WARLOCKATTACK_H

#include "SpellCasterAttack.h"


class WarlockAttack : public SpellCasterAttack {
public:
	WarlockAttack();
	virtual ~WarlockAttack();

	virtual void attack(Observable* unit, Observable* enemy);
};

#endif //WARLOCKATTACK_H
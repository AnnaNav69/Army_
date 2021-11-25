#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include "Attack.h"

class VampireAttack : public Attack {
public:
	VampireAttack();
	virtual ~VampireAttack();

	virtual void attack(Observable* unit, Observable* enemy);
	virtual void counterAttack(Unit* enemy, Unit* unit);

	virtual void bite(Observable* unit);
};

#endif //VAMPIREATTACK_H

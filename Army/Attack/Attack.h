#ifndef ATTACK_H
#define ATTACK_H

#include "../Unit/Observable.h"
#include "../Magic/Spell.h"
#include "../State/State.h"

class Unit;

class Attack {
public:
	Attack();
	virtual ~Attack();

	virtual void takePDamage(Unit* unit, int dmg);
	virtual void addHitPoints(Observable* unit, int hp);

	virtual void attack(Observable* unit, Observable* enemy);
	virtual void counterAttack(Unit* enemy, Unit* unit);

	virtual void bite(Observable* unit);

	virtual void transform(Observable* unit);

};

#endif //ATTACK_H
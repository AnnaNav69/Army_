#ifndef WEREWOLFATTACK_H
#define WEREWOLFATTACK_H

#include "Attack.h"

class WerewolfAttack : public Attack {
public:
	WerewolfAttack();
	virtual ~WerewolfAttack();

	virtual void bite(Observable* unit);

	virtual void transform(Observable* unit);

};

#endif //WEREWOLFATTACK_H

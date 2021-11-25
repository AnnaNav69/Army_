#ifndef ROGUEATTACK_H
#define ROGUEATTACK_H

#include<iostream>
#include "Attack.h"

class RogueAttack : public Attack {
public:
	RogueAttack();
	virtual ~RogueAttack();
	
	virtual void attack(Observable* unit, Observable* enemy);
};

#endif //ROGUEATTACK_H
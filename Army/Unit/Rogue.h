#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"
#include "../Attack/RogueAttack.h"

class Rogue : public Unit {
public:
	Rogue(const std::string& name = "Rogue", int hp = 180, int dmg = 30);
	virtual ~Rogue();
};

#endif //ROGUE_H
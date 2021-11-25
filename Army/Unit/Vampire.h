#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../Attack/VampireAttack.h"

class Vampire : public Unit {
public:
	Vampire(const std::string& name = "Vampire", int hp = 100, int dmg = 10);
	virtual ~Vampire();
};

#endif //VAMPIRE_H
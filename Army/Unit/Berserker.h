#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../Attack/BerserkerAttack.h"

class Berserker : public Unit {
public:
	Berserker(const std::string& name = "Berserker", int hp = 120, int dmg = 40);
	virtual ~Berserker();
};

#endif //BERSERKER_H
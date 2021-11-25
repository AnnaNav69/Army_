#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"


class Werewolf : public Unit {
public:
	Werewolf(const std::string& name = "Werewolf", int hp = 140, int hpl = 140, int dmg = 10);
	virtual ~Werewolf();

	// void transformIntoWolf();
	// void transformIntoWerewolf();
};

#endif //WEREWOLF_H
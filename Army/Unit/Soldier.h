#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"
// #include "Attack.h"


class Soldier : public Unit {
	public:
		Soldier(const std::string& name = "Soldier", int hp = 200, int dmg = 20);
		virtual ~Soldier();
};

#endif //SOLDIER_H
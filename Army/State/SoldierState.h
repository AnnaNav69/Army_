#ifndef SOLDIERSTATE_H
#define SOLDIERSTATE_H

#include "State.h"

class SoldierState : public State {
	public:
		SoldierState (const std::string& name, int hp, int dmg);
		virtual ~SoldierState();

		virtual bool isASoldier();	
};


#endif //SOLDIERSTATE_H
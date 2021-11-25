#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H

#include "State.h"

class BerserkerState : public State {
	public:
		BerserkerState (const std::string& name, int hp, int dmg);
		virtual ~BerserkerState();

		virtual bool isABerserker();	
};


#endif //BERSERKERSTATE_H
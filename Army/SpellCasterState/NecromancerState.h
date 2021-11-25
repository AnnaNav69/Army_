#ifndef NECROMANCERSTATE_H
#define NECROMANCERSTATE_H

#include "SCasterState.h"

class NecromancerState : public SCasterState {
	public:
		NecromancerState(const std::string& name = "Necromancer", int hp = 100, int dmg = 10, int mp = 100);
		virtual ~NecromancerState();

		virtual bool isANecromancer();
	
};
#endif //NECROMANCERSTATE_H

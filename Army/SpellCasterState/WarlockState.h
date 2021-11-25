#ifndef WARLOCKSTATE_H
#define WARLOCKSTATE_H

#include "SCasterState.h"

class WarlockState : public SCasterState {
	public:
		WarlockState (const std::string& name = "Warlock", int hp = 90, int dmg = 10, int mp = 200);
		virtual ~WarlockState();

		virtual bool isAWarlock();
};

#endif //WARLOCKSTATE_H
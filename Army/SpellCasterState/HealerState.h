#ifndef HEALERSTATE_H
#define HEALERSTATE_H

#include "SCasterState.h"

class HealerState : public SCasterState {
public:
	HealerState(const std::string& name = "Healer", int hp = 100, int dmg = 20, int mp = 100);
	virtual ~HealerState();

	virtual bool isAHealer();
};

#endif //HEALERSTATE_H

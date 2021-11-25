#ifndef PRIESTSTATE_H
#define PRIESTSTATE_H

#include "SCasterState.h"

class PriestState : public SCasterState {
public:
	PriestState(const std::string& name = "Priest", int hp = 110, int dmg = 20, int mp = 90);
	virtual ~PriestState();

	virtual bool isAPriest();
};

#endif //PRIESTSTATE_H

#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H

#include "State.h"

class VampireState : public State {
	public:
		VampireState (const std::string& name = "Vampire", int hp = 100, int dmg = 10);
		virtual ~VampireState();

		virtual bool isAVampire();	
};


#endif //VAMPIRESTATE_H
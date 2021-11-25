#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#include "State.h"

class WolfState : public State {
	public:
		WolfState(const std::string& name = "Werewolf", int hp = 280, int hpl = 280, int dmg = 40);
		virtual ~WolfState();

		virtual bool isAWolf();

};

#endif //WOLFSTATE_H

#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H

#include "State.h"

class WerewolfState : public State {
	public:
		WerewolfState (const std::string& name = "Werewolf", int hp = 140, int hpl = 140, int dmg = 10);
		virtual ~WerewolfState();

		virtual bool isAWerewolf();	
};


#endif //WEREWOLFSTATE_H
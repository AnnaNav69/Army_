#ifndef ROGUESTATE_H
#define ROGUESTATE_H

#include "State.h"

class RogueState : public State {
	public:
		RogueState (const std::string& name, int hp, int dmg);
		virtual ~RogueState();

		virtual bool isARogue();	
};


#endif //ROGUESTATE_H
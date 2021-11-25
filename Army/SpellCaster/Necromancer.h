#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "SpellCaster.h"
#include "../Unit/Observer.h"

class Necromancer : public SpellCaster, public Observer {
	private:
		// std::set<Observable*> observabletList;
	public:
		Necromancer(const std::string& name = "Necromancer", int hp = 100, int dmg = 10, int mp = 100);
		virtual ~Necromancer();
		// virtual void track(Observable* unit);
		// virtual void release(Observable* unit);
		virtual void getNotificated(int boost);
};

#endif //NECROMANCER_H
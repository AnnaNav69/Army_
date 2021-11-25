#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "../Unit/Soldier.h"
#include <vector>

class Warlock : public SpellCaster {
	private:
		std::vector<Soldier*> demoList;
	public:
		Warlock(const std::string& name = "Warlock", int hp = 100, int dmg = 10, int mp = 160);
		virtual ~Warlock();

		virtual const int getDemonListSize()const;
		virtual Soldier* getDemon(int i);
		virtual void summonDemon();
		void showDemons();
};

#endif //WARLOCK_H

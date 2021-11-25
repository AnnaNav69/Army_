#ifndef FIFEBALL_H
#define FIFEBALL_H

#include "Spell.h"

class FireBall : public Spell {
	public:
		FireBall (const std::string& spellName = "FierBall", int nMP = 20, int sPow = 40);
		virtual ~FireBall ();

		virtual void castSpellUpon(Unit* wizard, Unit* unit);
};

#endif //FIFEBALL_H
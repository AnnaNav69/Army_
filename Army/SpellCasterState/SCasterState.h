#ifndef SCASTERSTATE_H
#define SCASTERSTATE_H

#include "../State/State.h"

class SCasterState : public State {
	public:
		int magicPowers;
		SCasterState(const std::string& name, int hp, int dmg, int mp);
		virtual ~SCasterState();

		virtual bool reduceMagicPower(int hp);

		virtual const int getMagicPowers() const;

		virtual bool isASpellCaster();

		virtual bool isAWizard();
		virtual bool isAHealer();
		virtual bool isAPriest();
		virtual bool isAWarlock();
		virtual bool isANecromancer();
};

std::ostream& operator<<(std::ostream& out, SCasterState& state);

#endif //SPELLCASTERSTATE_H



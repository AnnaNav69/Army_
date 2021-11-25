#ifndef WIZARDSTATE_H
#define WIZARDSTATE_H

#include "SCasterState.h"

class WizardState : public SCasterState {
	public:
		WizardState (const std::string& name = "Wizard", int hp = 90, int dmg = 10, int mp = 200);
		virtual ~WizardState();

		virtual bool isAWizard();
};

#endif //WIZARDSTATE_H
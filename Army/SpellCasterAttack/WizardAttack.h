#ifndef WIZARDATTACK_H
#define WIZARDATTACK_H

#include "SpellCasterAttack.h"


class WizardAttack : public SpellCasterAttack {
public:
	WizardAttack();
	virtual ~WizardAttack();

	// virtual void magicAttack(SpellCaster* wizard, SpellBook::attackSpells spell, Unit* enemy);
	// virtual void heal(SpellCaster* wizard, SpellBook::attackSpells spell, Unit* enemy);
};

#endif //WIZARDATTACK_H
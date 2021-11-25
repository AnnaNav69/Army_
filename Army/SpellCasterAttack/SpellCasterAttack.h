#ifndef SPELLCASTERATTACK_H
#define SPELLCASTERATTACK_H

#include "../Magic/SpellBook.h"
#include "../Attack/Attack.h"
#include "../SpellCaster/SpellCaster.h"

class SpellCaster;

class SpellCasterAttack : public Attack {
public:
	SpellCasterAttack();
	virtual ~SpellCasterAttack();

	virtual Spell* castASpell(SpellCaster* wizard, SpellBook::spells s);
	// virtual HealingSpell* castHealingSpell(SpellCaster* wizard, SpellBook::healSpells s);

	virtual void wiz(SpellCaster* wizard, SpellBook::spells spell, Unit* enemy);

	// virtual void heal(SpellCaster* wizard, SpellBook::healSpells spell, Unit* enemy);
};

#endif //SPELLCASTERATTACK_H
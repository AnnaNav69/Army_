#include "SpellCasterAttack.h"

SpellCasterAttack::SpellCasterAttack() {
	std::cout<<"SpellCasterAttack constructor"<<std::endl;
}
SpellCasterAttack::~SpellCasterAttack() {
	std::cout<<"SpellCasterAttack destructor"<<std::endl;
}

Spell* SpellCasterAttack::castASpell(SpellCaster* wizard, SpellBook::spells s) {
	wizard->magicPowerNotEmpty();
	Spell* spell = wizard->spellBook->readSpell(s);

	if ( wizard->getSCasterState()->reduceMagicPower(spell->getNecessaryMagicPower()) ) {
		return spell;
	}
	return NULL;
}

void SpellCasterAttack::wiz(SpellCaster* wizard, SpellBook::spells spell, Unit* enemy) { // добавить модификатор силы заклинания в зависимости от типа мага
	Spell* magic = this->castASpell(wizard, spell);

	if ( magic == NULL ) {
		wizard->attack(enemy);
	} else {
		magic->castSpellUpon(wizard, enemy);
	}
	enemy->getAttack()->counterAttack(wizard, enemy);
}


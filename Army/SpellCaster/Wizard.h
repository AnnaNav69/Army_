#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"

class Wizard : public SpellCaster {
	public:
		Wizard(const std::string& name = "Wizard", int hp = 100, int dmg = 10, int mp = 160);
		virtual~Wizard();
};

#endif //WIZARD_H
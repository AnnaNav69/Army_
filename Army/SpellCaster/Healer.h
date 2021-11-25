#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"

class Healer : public SpellCaster {
	public:
		Healer(const std::string& name = "Healer", int hp = 100, int dmg = 20, int mp = 100);
		virtual ~Healer();

};
#endif //HEALER_H

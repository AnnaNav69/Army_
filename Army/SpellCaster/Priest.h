#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"

class Priest : public SpellCaster {
	public:
		Priest(const std::string& name = "Priest", int hp = 100, int dmg = 20, int mp = 100);
		virtual ~Priest();

};
#endif //PRIEST_H
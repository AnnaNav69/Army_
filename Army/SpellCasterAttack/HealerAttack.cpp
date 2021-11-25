#include "HealerAttack.h"

HealerAttack::HealerAttack() : SpellCasterAttack() {
	std::cout<<"HealerAttack constructor"<<std::endl;
}
HealerAttack::~HealerAttack(){
	std::cout<<"HealerAttack destructor"<<std::endl;
}
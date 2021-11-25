#include "Warlock.h"
#include "../SpellCasterState/WarlockState.h"
#include "../SpellCasterAttack/WarlockAttack.h"

Warlock::Warlock(const std::string& name, int hp, int dmg, int mp) 
: SpellCaster(new WarlockState(name, hp, dmg, mp), new WarlockAttack()) {
	std::cout<<"Warlock constructor"<<std::endl;
}

Warlock::~Warlock() {
	int demonsNumber = this->demoList.size();

	delete(this->uState);
	delete(this->uAttack);
	for ( int i = 0; i < demonsNumber; i++ ) {
		delete(this->demoList[i]);
	}
	std::cout<<"Warlock destructor"<<std::endl;
}

const int Warlock::getDemonListSize() const{
	return this->demoList.size();
}

Soldier* Warlock::getDemon(int i) {
	return this->demoList[i];
}

void Warlock::summonDemon() {
	int summonCosts = 20;

	this->magicPowerNotEmpty();
	if ( static_cast<SCasterState*>(this->uState)->magicPowers >= summonCosts ) {
		this->demoList.push_back(new Soldier("Demon", 40, 10));
	}
}

void Warlock::showDemons() {
	int demonsNumber = this->demoList.size();

	for ( int i = 0; i < demonsNumber; i++ ) {
		std::cout<<*this->demoList[i]<<"\n"<<std::endl;
	}
}

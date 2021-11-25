#include "Unit/Soldier.h"
#include "Unit/Rogue.h"
#include "Unit/Berserker.h"
#include "Unit/Vampire.h"
#include "Unit/Werewolf.h"
#include "SpellCaster/Warlock.h"
#include "SpellCaster/Wizard.h"
#include "SpellCaster/Healer.h"
#include "SpellCaster/Priest.h"
#include "SpellCaster/Necromancer.h"
#include "Magic/SpellBook.h"


int main() {
	std::cout<<"***************************"<<std::endl;
	Warlock* warlock = new Warlock();
	std::cout<<"***************************"<<std::endl;
	Priest* priest = new Priest();
	std::cout<<"***************************"<<std::endl;
	Necromancer* necromancer = new Necromancer();
	std::cout<<"***************************"<<std::endl;
	Healer* healer = new Healer();
	std::cout<<"***************************"<<std::endl;
	Wizard* wizard = new Wizard();
	std::cout<<"***************************"<<std::endl;
	Soldier* s1 = new Soldier();
	std::cout<<"***************************"<<std::endl;
	Rogue* r1 = new Rogue();
	std::cout<<"***************************"<<std::endl;
	Berserker* b1 = new Berserker();
	std::cout<<"***************************"<<std::endl;
	Vampire* v1 = new Vampire();
	std::cout<<"***************************"<<std::endl;
	Werewolf* w1 = new Werewolf();
	std::cout<<"***************************"<<std::endl;
	std::cout<<"***************************"<<std::endl;

	std::cout<<*warlock<<std::endl;	
	std::cout<<*healer<<std::endl;
	std::cout<<*necromancer<<std::endl;
	std::cout<<*wizard<<std::endl;
	std::cout<<*priest<<std::endl;
	std::cout<<*s1<<std::endl;
	std::cout<<*r1<<std::endl;
	std::cout<<*w1<<std::endl;
	std::cout<<*b1<<std::endl;
	std::cout<<*v1<<std::endl;
	std::cout<<"###########################"<<std::endl;

	s1->attack(wizard);
	std::cout<<*s1<<std::endl;
	s1->attack(priest);
	std::cout<<*s1<<std::endl;
	s1->attack(healer);
	std::cout<<*s1<<std::endl;
	s1->attack(warlock);
	std::cout<<*s1<<std::endl;
	s1->attack(necromancer);

	std::cout<<*s1<<std::endl;	
	std::cout<<*wizard<<std::endl;
	std::cout<<*priest<<std::endl;
	std::cout<<*healer<<std::endl;
	std::cout<<*warlock<<std::endl;
	std::cout<<*necromancer<<std::endl;
	std::cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<std::endl;	wizard->wiz(SpellBook::FIREBALL, s1);
	std::cout<<*s1<<std::endl;	
	std::cout<<*wizard<<std::endl;

	// w1->bite(necromancer);

	// std::cout<<*w1<<std::endl;	
	// std::cout<<*necromancer<<std::endl;

	// std::cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<std::endl;

	// necromancer->bite(r1);

	// std::cout<<*necromancer<<std::endl;
	// std::cout<<*r1<<std::endl;	

	// std::cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<std::endl;

	// necromancer->attack(r1);

	// std::cout<<*necromancer<<std::endl;	
	// std::cout<<*r1<<std::endl;

	// std::cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<std::endl;
	// std::cout<<*r1<<std::endl;

	// 	try {
	// 	r1->attack(necromancer);
	// 	r1->attack(necromancer);
	
	// } catch (UnitIsDead e) {
	// 	std::cout<<"Unit is dead"<<std::endl;
	// }
	
	// std::cout<<*r1<<std::endl;
	// std::cout<<*necromancer<<std::endl;

	// std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;

	// try {
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// 	s1->attack(r1);
	// } catch (UnitIsDead e) {
	// 	std::cout<<"Unit is dead"<<std::endl;
	// }

	// std::cout<<*s1<<std::endl;	
	// std::cout<<*r1<<std::endl;
	// std::cout<<*necromancer<<std::endl;
	// std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
	// warlock->summonDemon();
	// warlock->summonDemon();
	// warlock->showDemons();


	// std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
	// warlock->wiz(SpellBook::FIREBALL, priest);

	// std::cout<<*warlock<<std::endl;
	// std::cout<<*priest<<std::endl;

	// std::cout<<"***************************"<<std::endl;
	// warlock->attack(s1);

	// std::cout<<*warlock<<std::endl;
	// std::cout<<*s1<<std::endl;
	// warlock->showDemons();

	// std::cout<<"***************************"<<std::endl;

	// v1->attack(priest);

	// std::cout<<*priest<<std::endl;
	// std::cout<<*v1<<std::endl;

	std::cout<<"***************************"<<std::endl;
	std::cout<<"***************************"<<std::endl;
	delete (warlock);
	std::cout<<"***************************"<<std::endl;	
	delete (necromancer);
	std::cout<<"***************************"<<std::endl;
	delete (priest);
	std::cout<<"***************************"<<std::endl;
	delete (s1);
	std::cout<<"***************************"<<std::endl;
	delete (r1);
	std::cout<<"***************************"<<std::endl;
	delete (b1);
	std::cout<<"***************************"<<std::endl;
	delete (v1);
	std::cout<<"***************************"<<std::endl;
	delete (w1);
	std::cout<<"***************************"<<std::endl;
	delete (wizard);
	std::cout<<"***************************"<<std::endl;
	delete (healer);
	std::cout<<"***************************"<<std::endl;
	return 0;
}

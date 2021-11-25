#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <set>

#include "Observable.h"
#include "Character.h"
#include "../State/State.h"
#include "../Attack/Attack.h"
#include "../Exceptions.h"

class Attack;

class Unit : public Character, public Observable {
	protected:
		State* uState;
		Attack* uAttack;
		std::set<Observer*> contactList;

	public:
		Unit(State* uState, Attack* uAttack);
		virtual ~Unit();

		virtual void ensureIsAlive();

		virtual State* getState();
		virtual Attack* getAttack();

		virtual void attack(Observable* enemy);

		virtual void changeState(State* state);
		virtual void changeAbility(Attack* attack);

		virtual void bite(Observable* enemy);
		virtual void transform();

		virtual void attach(Observer* observer);
		virtual void detach(Observer* observer);
		virtual void notify ();
};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif //UNIT_H

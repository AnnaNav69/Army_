#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
	protected:
		std::string name;
		int hitPoints;
		int hitPointsLimmit;
		int damage;
	public:
		State(const std::string& name, int hp, int dmg);
		virtual ~State();

		virtual const std::string getName() const;
		virtual const int getHitPoints() const;
		virtual const int getHitPointsLimit() const;
		virtual const int getDamage() const;

		virtual void setHitPoints(int hp);

		virtual bool isASpellCaster();
		virtual bool isASoldier();
		virtual bool isARogue();
		virtual bool isABerserker();
		virtual bool isAVampire();
		virtual bool isAWerewolf();
		virtual bool isAWolf();
};

std::ostream& operator<<(std::ostream& out, State& state);

#endif //STATE_H
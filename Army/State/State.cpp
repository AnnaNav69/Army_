#include "State.h"

State::State(const std::string& name, int hp, int dmg) {
	std::cout<<"State constructor"<<std::endl;
	this->name = name;
	this->hitPoints = hp;
	this->hitPointsLimmit = hp;
	this->damage = dmg;
}

State::~State() {
std::cout<<"State destructor"<<std::endl;
}

const std::string State::getName() const {
	return this->name;
}
const int State::getHitPoints() const {
	return this->hitPoints;
}
const int State::getHitPointsLimit() const {
	return this->hitPointsLimmit;
}
const int State::getDamage() const {
	return this->damage;
}

void State::setHitPoints(int hp) {
	this->hitPoints = hp;
}

// void State::setHitPointsLimit(int hp) {
// 	this->hitPointsLimmit = hp;
// }

// void State::setDamage(int dmg) {
// 	this->damage = dmg;
// }

bool State::isASpellCaster() {
	return false;
}
bool State::isASoldier() {
	return false;
}
bool State::isARogue() {
	return false;
}
bool State::isABerserker() {
	return false;
}
bool State::isAVampire() {
	return false;
}
bool State::isAWerewolf() {
	return false;
}
bool State::isAWolf() {
	return false;
}

std::ostream& operator<<(std::ostream& out, State& state) {
	out<<state.getName()<<" [ " <<state.getHitPoints()
	<<"/"<<state.getHitPointsLimit()
	<<"/"<<state.getDamage()<<" ]";
	return out;
}

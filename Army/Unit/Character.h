#ifndef CARACTER_H
#define CARACTER_H

class Character {
	public:
		virtual ~Character() {};
		virtual void attack(Observable* enemy) = 0;
		virtual void bite(Observable* enemy) = 0;
		virtual void transform() = 0;
};

#endif //CARACTER_H

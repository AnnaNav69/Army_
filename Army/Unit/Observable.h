#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "Observer.h"

class Observable {
	public:
		virtual ~Observable() {};
		virtual void attach(Observer* observer) = 0;
		virtual void detach(Observer* observer) = 0;
		virtual void notify () = 0;
};

#endif //OBSERVABLE_H
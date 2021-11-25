#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
	virtual ~Observer() {};
	virtual void getNotificated(int boost) = 0;
};

#endif //OBSERVER_H

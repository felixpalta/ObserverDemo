#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "observer.h"

class Observable
{
protected:
    Observable() {}
    virtual ~Observable() = 0;
public:
    virtual void register_observer(Observer *o) = 0;
    virtual void remove_observer(Observer *o) = 0;
    virtual void notify_observers() = 0;
};

#endif // OBSERVABLE_H

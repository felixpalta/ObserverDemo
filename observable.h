#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "observer.h"

class Observable
{
protected:
    Observable() = default;
    virtual ~Observable() = default;
public:
    virtual void register_observer(Observer *o) = 0;
    virtual void remove_observer(Observer *o) = 0;
private:
    virtual void notify_observers() const = 0;
};

#endif // OBSERVABLE_H

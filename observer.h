#ifndef OBSERVER_H
#define OBSERVER_H

class Observable;

class Observer
{
protected:
    Observer() = default;
    virtual ~Observer() = default;
public:
    virtual void update(const Observable*) = 0;
};

#endif // OBSERVER_H

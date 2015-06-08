#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
protected:
    Observer() {}
    virtual ~Observer() = 0;
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

#endif // OBSERVER_H

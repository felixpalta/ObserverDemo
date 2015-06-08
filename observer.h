#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
protected:
    Observer() = default;
    virtual ~Observer() = default;
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

#endif // OBSERVER_H

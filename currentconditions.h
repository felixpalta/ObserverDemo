#ifndef CURRENTCONDITIONS_H
#define CURRENTCONDITIONS_H

#include "observer.h"
#include "displayelement.h"
#include "observable.h"

class CurrentConditions : public Observer, DisplayElement
{
public:
    CurrentConditions(Observable& subj);
    ~CurrentConditions();
    CurrentConditions(const CurrentConditions&) = delete;
    CurrentConditions& operator=(const CurrentConditions&) = delete;

    void update(const Observable*);
    void display() const;

private:
    Observable *_subject;
    double _temperature;
    double _humidity;

};

#endif // CURRENTCONDITIONS_H

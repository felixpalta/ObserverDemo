#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "observable.h"

class ForecastDisplay : public Observer, DisplayElement
{
public:
    ForecastDisplay(Observable& subj);
    ~ForecastDisplay();
    ForecastDisplay(const ForecastDisplay&) = delete;
    ForecastDisplay& operator=(const ForecastDisplay&) = delete;

    void update(const Observable*);
    void display() const;

private:
    Observable *_subject;
    double _last_pressure;
    double _current_pressure;


};

#endif // FORECASTDISPLAY_H

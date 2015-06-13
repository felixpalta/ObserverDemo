#include "forecastdisplay.h"
#include <iostream>
using namespace std;

ForecastDisplay::ForecastDisplay(Observable &subj)
    : _subject(&subj), _last_pressure(0), _current_pressure(0)
{
    _subject->register_observer(this);
}

ForecastDisplay::~ForecastDisplay()
{
    _subject->remove_observer(this);
}

void ForecastDisplay::update(double, double,  double pressure)
{
    _last_pressure = _current_pressure;
    _current_pressure = pressure;

    display();
}

void ForecastDisplay::display() const
{
    cout << "Forecast: ";

    if (_current_pressure > _last_pressure)
    {
        cout << "Improving weather on the way!" << endl;
    }
    else if (_current_pressure == _last_pressure)
    {
        cout << "More of the same" << endl;
    }
    else if (_current_pressure < _last_pressure)
    {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}

#include "currentconditions.h"
#include "weatherdata.h"
#include <iostream>

CurrentConditions::CurrentConditions(Observable &subj)
    : _subject(&subj), _temperature(0), _humidity(0)
{
    _subject->register_observer(this);
}

CurrentConditions::~CurrentConditions()
{
    _subject->remove_observer(this);
}

void CurrentConditions::update(const Observable *subj)
{
    const WeatherData *w = dynamic_cast<const WeatherData*>(subj);
    if (w != nullptr)
    {
        this->_temperature = w->get_temperature();
        this->_humidity = w->get_humidity();
        display(); // For simplicity we call display right after receiveing new data.
    }
}

void CurrentConditions::display() const
{
    std::cout << "Current Conditions: " << _temperature << " deg. Celcius and " << _humidity << "% humidity." << std::endl;
}

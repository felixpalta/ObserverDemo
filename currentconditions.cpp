 #include "currentconditions.h"
#include <iostream>

CurrentConditions::CurrentConditions(Observable &subj)
    : _subject(&subj), _temperature(0), _humidity(0)
{
    _subject->register_observer(this);
}

void CurrentConditions::update(double temp, double humidity, double)
{
    this->_temperature = temp;
    this->_humidity = humidity;
    display(); // For simplicity we call display right after receiveing new data.
}

void CurrentConditions::display() const
{
    std::cout << "Current Conditions: " << _temperature << " deg. Celcius and " << _humidity << "% humidity." << std::endl;
}

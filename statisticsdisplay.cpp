#include "statisticsdisplay.h"
#include <iostream>
using namespace std;

StatisticsDisplay::StatisticsDisplay(Observable& subj)
    : _subject(&subj),
      _max_temp(0),
      _min_temp(0),
      _sum_temp(0),
      _num_readings(0)
{
    _subject->register_observer(this);
}

void StatisticsDisplay::update(double temp, double, double)
{
    _sum_temp += temp;
    ++_num_readings;

    if (temp > _max_temp)
        _max_temp = temp;

    if (temp < _min_temp)
        _min_temp = temp;

    display();
}

void StatisticsDisplay::display() const
{
    cout    << "Avg/Min/Max temperature: "
            << _sum_temp / _num_readings << '/'
            << _min_temp << '/'
            << _max_temp << endl;
}

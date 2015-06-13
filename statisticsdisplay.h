#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "observable.h"
#include "displayelement.h"
#include "observer.h"

class StatisticsDisplay : public Observer, DisplayElement
{
public:
    StatisticsDisplay(Observable& subj);
    ~StatisticsDisplay();
    StatisticsDisplay(const StatisticsDisplay&) = delete;
    StatisticsDisplay& operator=(const StatisticsDisplay&) = delete;

    void update(const Observable *);
    void display() const;

private:
    Observable *_subject;
    double _max_temp;
    double _min_temp;
    double _sum_temp;
    int _num_readings;
};

#endif // STATISTICSDISPLAY_H

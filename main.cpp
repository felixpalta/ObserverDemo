#include <iostream>
#include "weatherdata.h"
#include "currentconditions.h"
#include "statisticsdisplay.h"

using namespace std;

int main()
{
    WeatherData w; // The Observable Subject.
    CurrentConditions cond(w); // One of the Observers subscribed to the Subject.
    StatisticsDisplay stats(w);

    w.set_measurements(34, 50, 120); // Changes in the Subject are pushed as notifications to the Observers.
    w.set_measurements(12, 34, 126);
    w.set_measurements(-12, 60, 70);
    return 0;
}


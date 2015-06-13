#include <iostream>
#include "weatherdata.h"
#include "currentconditions.h"
#include "statisticsdisplay.h"
#include "forecastdisplay.h"

using namespace std;

int main()
{
    WeatherData w; // The Observable Subject.

    // Observer objects are created on heap in order to demonstrate
    // their ability to unsubscribe themselves from Subject
    // in their destructors.
    auto cond = new CurrentConditions(w);
    auto stats = new StatisticsDisplay(w);
    auto forecast = new ForecastDisplay(w);

    w.set_measurements(34, 50, 120); // Changes in the Subject are pushed as notifications to the Observers.
    w.set_measurements(12, 34, 126);
    w.set_measurements(-12, 60, 70);

    delete cond;
    delete stats;
    delete forecast;

    w.set_measurements(0,0,12);
    return 0;
}


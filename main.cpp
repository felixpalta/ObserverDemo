#include <iostream>
#include "weatherdata.h"
#include "currentconditions.h"

using namespace std;

int main()
{
    WeatherData w;
    CurrentConditions cond(w);

    w.set_measurements(34, 50, 120);
    w.set_measurements(12, 34, 126);
    return 0;
}


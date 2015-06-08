#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "observable.h"

class WeatherData : public Observable
{
public:
    WeatherData();
    ~WeatherData();

    virtual void register_observer(Observer *o);
    virtual void remove_observer(Observer *o);


    // This function is used to update measurements manually
    // because this demo cannot get new data anywhere else.
    void set_measurements(double temp, double hum, double press);

private:

    // This funcion is called every
    // time new measurements are available.
    void measurements_changed();

    virtual void notify_observers();

private:
    struct WeatherImpl;
    WeatherImpl *impl;

    WeatherData(const WeatherData&) = delete;
    WeatherData& operator=(const WeatherData&) = delete;
};

#endif // WEATHERDATA_H

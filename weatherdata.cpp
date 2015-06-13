#include "weatherdata.h"
#include <forward_list>
#include <algorithm>

struct WeatherData::WeatherImpl
{
    std::forward_list<Observer*> observers;
    double temperature;
    double pressure;
    double humidity;

    WeatherImpl() : observers(), temperature(), pressure(), humidity()
    {
    }

};

WeatherData::WeatherData()
    : impl(new WeatherImpl())
{
}

WeatherData::~WeatherData()
{
    delete impl;
}

void WeatherData::register_observer(Observer *o)
{
    impl->observers.push_front(o);
}

void WeatherData::remove_observer(Observer *o)
{
    impl->observers.remove(o);
}

void WeatherData::notify_observers() const
{
    for (auto &x : impl->observers)
        x->update(impl->temperature, impl->humidity, impl->pressure);
}

void WeatherData::measurements_changed() const
{
    notify_observers();
}

void WeatherData::set_measurements(double temp, double hum, double press)
{
    impl->temperature = temp;
    impl->humidity = hum;
    impl->pressure = press;
    measurements_changed();

}



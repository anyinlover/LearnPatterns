#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <memory>
#include <vector>
#include "Subject.h"
#include "Observer.h"


class WeatherData : public Subject {
public:
    void RegisterObserver(Observer* observer) override
    {
        observers.push_back(observer);
    }

    void RemoveObserver(Observer* observer) override
    {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end()) {
            observers.erase(it);
        }
    }

    void NotifyObservers() override
    {
        for (auto observer : observers) {
            observer->Update(temperature, humidity, pressure);
        }
    }

    void MeasurementsChanged()
    {
        NotifyObservers();
    }

    void SetMeasurements(float temp, float humi, float pres)
    {
        temperature = temp;
        humidity = humi;
        pressure = pres;
        MeasurementsChanged();
    }

private:
    std::vector<Observer*> observers;
    float temperature = 0;
    float humidity = 0;
    float pressure = 0;
};

#endif
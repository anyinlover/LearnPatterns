#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include <memory>
#include <iostream>
#include "WeatherData.h"
#include "DisplayElement.h"
#include "Observer.h"

class StatisticsDisplay : public DisplayElement, public Observer {
public:
    StatisticsDisplay(std::shared_ptr<WeatherData> wd): weatherData(wd)
    {
        weatherData->RegisterObserver(this);
    }

    ~StatisticsDisplay()
    {
        weatherData->RemoveObserver(this);
    }

    void Update(float temp, float humi, float pres) override
    {
        tempSum += temp;
        numReadings++;

        if (temp > maxTemp) {
            maxTemp = temp;
        }

        if (temp < minTemp) {
            minTemp = temp;
        }

        Display();
    }

    void Display() override
    {
        std::cout << "Avg temperature is " << tempSum / numReadings
            << " Max temperature is " << maxTemp << " Min temperature is " << minTemp << std::endl;
    }

    private:
        std::shared_ptr<WeatherData> weatherData;
        float tempSum = 0;
        int numReadings = 0;
        float maxTemp = 0;
        float minTemp = 0;
};

#endif
#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H
#include <memory>
#include <iostream>
#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class ForecastDisplay : public Observer, public DisplayElement {
public:
    ForecastDisplay(std::shared_ptr<WeatherData> wd) : weatherData(wd)
    {
        weatherData->RegisterObserver(this);
    }

    ~ForecastDisplay()
    {
        weatherData->RemoveObserver(this);
    }

    void Update(float temp, float humi, float pres) override
    {
        lastPressure = currentPressure;
        currentPressure = pres;
        Display();
    }

    void Display() override
    {
        std::cout << "Forecast: ";
        if (currentPressure > lastPressure) {
            std::cout << "Improving weather on the way" << std::endl;
        } else if (currentPressure == lastPressure) {
            std::cout << "More of the same" << std::endl;
        } else if (currentPressure < lastPressure) {
            std::cout << "Watch out for cooler, rainy wather" << std::endl;
        }
    }

private:
    std::shared_ptr<WeatherData> weatherData;
    float currentPressure;
    float lastPressure;
};

#endif
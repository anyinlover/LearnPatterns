#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H
#include <memory>
#include <iostream>
#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
    CurrentConditionsDisplay(std::shared_ptr<WeatherData> wd) : weatherData(wd)
    {
        weatherData->RegisterObserver(this);
    }

    ~CurrentConditionsDisplay()
    {
        weatherData->RemoveObserver(this);
    }

    void Update(float temp, float humi, float pres) override
    {
        temperature = temp;
        humidity = humi;
        Display();
    }

    void Display() override
    {
        std::cout << "Current conditions: " << temperature
            << " F degrees and " << humidity << "% humidity" << std::endl;
    }


private:
    std::shared_ptr<WeatherData> weatherData;
    float temperature;
    float humidity;
};

#endif
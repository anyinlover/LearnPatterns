#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"

int main()
{
    std::shared_ptr<WeatherData> weatherData = std::make_shared<WeatherData>();

    std::unique_ptr<CurrentConditionsDisplay> currentConditions = std::make_unique<CurrentConditionsDisplay>(weatherData);
    std::unique_ptr<StatisticsDisplay> staticstic = std::make_unique<StatisticsDisplay>(weatherData);
    std::unique_ptr<ForecastDisplay> forecast = std::make_unique<ForecastDisplay>(weatherData);

    weatherData->SetMeasurements(80, 65, 30.4f);
    weatherData->SetMeasurements(82, 70, 29.2f);
    weatherData->SetMeasurements(78, 90, 29.2f);
}
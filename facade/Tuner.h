#ifndef TUNER_H
#define TUNER_H
#include <iostream>

class Tuner {
public:
    void On()
    {
        std::cout << "The tuner is on." << std::endl;
    }

    void Off()
    {
        std::cout << "The tuner is off." << std::endl;
    }

    void SetFrequency(double f)
    {
        std::cout << "The tuner is set frequency to " << f << std::endl;
    }

    void SetAm()
    {
        std::cout << "The tuner is set AM mode." << std::endl;
    }

    void SetFm()
    {
        std::cout << "The tuner is set FM mode." << std::endl;
    }
};
#endif
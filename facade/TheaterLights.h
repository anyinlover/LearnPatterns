#ifndef THEATERLIGHTS_H
#define THEATERLIGHTS_H
#include <iostream>

class TheaterLights {
public:
    void On()
    {
        std::cout << "The lights is on" << std::endl;
    }

    void Off()
    {
        std::cout << "The lights is off" << std::endl;
    }

    void Dim(int level)
    {
        std::cout << "The lights is dimming to " << level << " level" << std::endl;
    }
};

#endif

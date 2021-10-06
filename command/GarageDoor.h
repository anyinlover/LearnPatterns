#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H
#include <iostream>

class GarageDoor {
public:
    GarageDoor() = default;
    ~GarageDoor() = default;
    void Up() {
        std::cout << "GarageDoor is up" << std::endl;
    }

    void Down() {
        std::cout << "GarageDoor is down" << std::endl;
    }

    void Stop() {
        std::cout << "GarageDoor is stop" << std::endl;
    }

    void LightOn() {
        std::cout << "GarageDoor is light on" << std::endl;
    }

    void LightOff() {
        std::cout << "GarageDoor is light off" << std::endl;
    }
};

#endif
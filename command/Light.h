#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>

class Light {
public:
    Light() = default;
    ~Light() = default;
    inline void on() const {
        std::cout << "light is on" << std::endl;
    }

    inline void off() const {
        std::cout << "light is off" << std::endl;
    } 
};

#endif
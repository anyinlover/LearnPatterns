#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>

class Screen {
public:
    void Up()
    {
        std::cout << "The screen is going up" << std::endl;
    }

    void Down()
    {
        std::cout << "The screen is going down" << std::endl;
    }
};

#endif
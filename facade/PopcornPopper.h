#ifndef POPCORNPOPPER_H
#define POPCORNPOPPER_H
#include <iostream>

class PopcornPopper {
public:
    void On()
    {
        std::cout << "The popper is on." << std::endl;
    }

    void Off()
    {
        std::cout << "The popper is off." << std::endl;
    }

    void Pop()
    {
        std::cout << "The popper is popping popcorn" << std::endl;
    }
};

#endif
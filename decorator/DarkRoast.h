#ifndef DARKROAST_H
#define DARKROAST_H
#include "Beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast()
    {
        description = "Dark Roast";
    }

    double Cost() override
    {
        return .99;
    }
};

#endif
#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Beverage.h"

class HouseBlend : public Beverage {
public:
    HouseBlend()
    {
        description = "House Blend Coffee";
    }
    double Cost() override
    {
        return .89;
    }
};

#endif
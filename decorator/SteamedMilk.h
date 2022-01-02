#ifndef STEAMEDMILK_H
#define STEAMEDMILK_H

#include "CondimentDecorator.h"

class SteamedMilk: public CondimentDecorator {
public:
    SteamedMilk(std::unique_ptr<Beverage> br): CondimentDecorator(std::move(br)) {};
    std::string GetDescription() const override
    {
        return beverage->GetDescription() + ", SteamedMilk";
    }

    double Cost() override {
        return beverage->Cost() + .10;
    }
};

#endif
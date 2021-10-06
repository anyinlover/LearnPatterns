#ifndef WHIP_H
#define WHIP_H

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
public:
    Whip(std::unique_ptr<Beverage> br): CondimentDecorator(std::move(br)) {};
    std::string GetDescription() const override
    {
        return beverage->GetDescription() + ", Whip";
    }

    double Cost() override {
        return beverage->Cost() + .10;
    }
};

#endif
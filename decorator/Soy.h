#ifndef SOY_H
#define SOY_H

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator {
public:
    Soy(std::unique_ptr<Beverage> br): CondimentDecorator(std::move(br)) {};
    std::string GetDescription() const override
    {
        return beverage->GetDescription() + ", Soy";
    }

    double Cost() override {
        return beverage->Cost() + .15;
    }
};

#endif
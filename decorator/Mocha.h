#ifndef MOCHA_H
#define MOCHA_H

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> br): CondimentDecorator(std::move(br)) {};
    std::string GetDescription() const override
    {
        return beverage->GetDescription() + ", Mocha";
    }

    double Cost() override {
        return beverage->Cost() + .20;
    }
};

#endif
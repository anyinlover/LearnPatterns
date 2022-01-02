#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include <memory>
#include "Beverage.h"

class CondimentDecorator : public Beverage {
public:
    CondimentDecorator(std::unique_ptr<Beverage> br): beverage(std::move(br)) {}
    virtual ~CondimentDecorator() = default;
    virtual std::string GetDescription() const = 0;
protected:
    std::unique_ptr<Beverage> beverage;
};

#endif
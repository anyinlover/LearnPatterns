#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "string"

class Beverage {
public:
    virtual ~Beverage() = default;
    virtual std::string GetDescription() const
    {
        return description;
    }
    virtual double Cost() = 0;

protected:
    std::string description = "Unknown Beverage";
};

#endif
#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage {
public:
    Tea() = default;
    ~Tea() = default;
private:
    void Brew() override
    {
        std::cout << "Steeping the tea" << std::endl;
    }

    void AddCondiments() override
    {
        std::cout << "Adding Lemon" << std::endl;
    }
};

#endif
#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H
#include <iostream>

class CaffeineBeverageWithHook {
public:
    virtual ~CaffeineBeverageWithHook() = default;
    virtual void PrepareRecipe() final {
        BoilWater();
        Brew();
        PourInCup();
        if (CustomerWantsCondiments()) {
            AddCondiments();
        }
    }
private:
    virtual void Brew() = 0;

    virtual void AddCondiments() = 0;

    void BoilWater()
    {
        std::cout << "Boiling water" << std::endl;
    }

    void PourInCup()
    {
        std::cout << "Pouring into cup" << std::endl;
    }

    virtual bool CustomerWantsCondiments() {
        return true;
    }
};

#endif
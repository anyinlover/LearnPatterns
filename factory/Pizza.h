#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <string>
#include <vector>

class Pizza {
public:
    virtual ~Pizza() = default;
    void Prepare()
    {
        std::cout << "Preparing " << name << std::endl;
        std::cout << "Tossing dough..." << std::endl;
        std::cout << "Adding sauce..." << std::endl;
        std::cout << "Adding toppings: " << std::endl;
        for (auto& topping : toppings) {
            std::cout << "  " << topping;
        }
        std::cout << std::endl;
    }

    virtual void Bake()
    {
        std::cout << "Bake for 25 minutes at 350" << std::endl;
    }

    virtual void Cut()
    {
        std::cout << "Cutting the pizza into diagonal alices" << std::endl;
    }

    virtual void Box()
    {
        std::cout << "Place pizza in official PizzaStore box" << std::endl;
    }

    std::string GetName()
    {
        return name;
    }

protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
};

#endif
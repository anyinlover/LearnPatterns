#ifndef NYSTYLECHEESEPIZZA_H
#define NYSTYLECHEESEPIZZA_H
#include "Pizza.h"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza()
    {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.emplace_back("Grated Reggiano Cheese");
    }
};

#endif
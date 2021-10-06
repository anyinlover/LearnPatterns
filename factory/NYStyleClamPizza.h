#ifndef NYSTYLECLAMPIZZA_H
#define NYSTYLECLAMPIZZA_H
#include "Pizza.h"

class NYStyleClamPizza : public Pizza {
public:
    NYStyleClamPizza()
    {
        name = "NY Style Clam Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.emplace_back("Grated Reggiano Cheese");
        toppings.emplace_back("Fresh from Long Island Sound");
    }
};

#endif
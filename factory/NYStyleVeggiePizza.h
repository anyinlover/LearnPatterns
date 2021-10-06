#ifndef NYSTYLEVEGGIEPIZZA_H
#define NYSTYLEVEGGIEPIZZA_H
#include "Pizza.h"

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza()
    {
        name = "NY Style Veggie Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.emplace_back("Grated Reggiano Cheese");
        toppings.emplace_back("Garlic");
        toppings.emplace_back("Onion");
        toppings.emplace_back("Mushrooms");
        toppings.emplace_back("Red Pepper");
    }
};

#endif
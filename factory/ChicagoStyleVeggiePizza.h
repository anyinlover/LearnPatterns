#ifndef CHICAGOSTYLEVEGGIEPIZZA_H
#define CHICAGOSTYLEVEGGIEPIZZA_H
#include "Pizza.h"

class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza()
    {
        name = "Chicago Style Veggie Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Black Olives");
        toppings.emplace_back("Spinach");
        toppings.emplace_back("Eggplant");
    }

    void Cut() override
    {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

#endif
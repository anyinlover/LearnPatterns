#ifndef CHICAGOSTYLEPEPPERONIPIZZA_H
#define CHICAGOSTYLEPEPPERONIPIZZA_H
#include "Pizza.h"

class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza()
    {
        name = "Chicago Style Pepperoni Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Black Olives");
        toppings.emplace_back("Spinach");
        toppings.emplace_back("Eggplant");
        toppings.emplace_back("Sliced Pepperoni");
    }

    void Cut() override
    {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

#endif
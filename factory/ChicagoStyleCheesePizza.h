#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H
#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza()
    {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.emplace_back("Shredded Mozzarella Cheese");
    }

    void Cut() override
    {
        std::cout << "Cutting the pizza into square slices" << std::endl; 
    }
};

#endif
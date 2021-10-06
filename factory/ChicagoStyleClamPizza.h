#ifndef CHICAGOSTYLECLAMPIZZA_H
#define CHICAGOSTYLECLAMPIZZA_H
#include "Pizza.h"

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza()
    {
        name = "Chicago Style Clam Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Frozen Clams from Chesapeake Bay");
    }

    void Cut() override
    {
        std::cout << "Cutting the pizza into square slices" << std::endl;
    }
};

#endif
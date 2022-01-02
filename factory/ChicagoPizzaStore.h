#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> CreatePizza(std::string type) override
    {
        if (type == "cheese") {
            return std::make_unique<ChicagoStyleCheesePizza>();
        } else if (type == "veggie") {
            return std::make_unique<ChicagoStyleVeggiePizza>();
        } else if (type == "clam") {
            return std::make_unique<ChicagoStyleClamPizza>();
        } else if (type == "pepperoni") {
            return std::make_unique<ChicagoStylePepperoniPizza>();
        }
        return nullptr;
    }
};

#endif
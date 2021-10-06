#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> CreatePizza(std::string type) override
    {
        if (type == "cheese") {
            return std::make_unique<NYStyleCheesePizza>();
        } else if (type == "veggie") {
            return std::make_unique<NYStyleVeggiePizza>();
        } else if (type == "clam") {
            return std::make_unique<NYStyleClamPizza>();
        } else if (type == "pepperoni") {
            return std::make_unique<NYStylePepperoniPizza>();
        }
        return nullptr;
    }
};

#endif
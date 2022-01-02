#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <memory>
#include "Pizza.h"

class PizzaStore {
public:
    virtual ~PizzaStore() = default;
    std::unique_ptr<Pizza> OrderPizza(std::string type)
    {
        std::unique_ptr<Pizza> pizza = CreatePizza(type);
        pizza->Prepare();
        pizza->Bake();
        pizza->Cut();
        pizza->Box();

        return std::move(pizza);
    }

    virtual std::unique_ptr<Pizza> CreatePizza(std::string type) = 0;
};

#endif
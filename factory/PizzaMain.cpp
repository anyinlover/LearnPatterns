#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main()
{
    auto nyStore = std::make_unique<NYPizzaStore>();
    auto chicagoStore = std::make_unique<ChicagoPizzaStore>();

    auto pizza = nyStore->OrderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->GetName() << std::endl;

    pizza = chicagoStore->OrderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->GetName() << std::endl;
}
#include "iostream"
#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"

int main()
{
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
    std::cout << beverage->GetDescription() << " $" << beverage->Cost() << std::endl;

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));
    std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
    beverage3 = std::make_unique<Soy>(std::move(beverage3));
    beverage3 = std::make_unique<Mocha>(std::move(beverage3));
    beverage3 = std::make_unique<Whip>(std::move(beverage3));
    std::cout << beverage3->GetDescription() << " $" << beverage3->Cost() << std::endl;
}
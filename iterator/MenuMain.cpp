#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Waitress.h"

int main()
{
    auto pancakeHouseMenu = std::make_shared<PancakeHouseMenu>();
    auto dinerMenu = std::make_shared<DinerMenu>();

    auto waitress = std::make_unique<Waitress>(pancakeHouseMenu, dinerMenu);
    waitress->PrintMenu();
}
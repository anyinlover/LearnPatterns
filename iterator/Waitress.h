#ifndef WAITRESS_H
#define WAITRESS_H
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"

class Waitress {
public:
    explicit Waitress(std::shared_ptr<PancakeHouseMenu> phm, std::shared_ptr<DinerMenu> dm):
        pancakeHouseMenu(phm), dinerMenu(dm) {}

    void PrintMenu() const
    {
        auto pancakeIterator = pancakeHouseMenu->CreateIterator();
        auto dinerIterator = dinerMenu->CreateIterator();

        std::cout << "MENU\n----\nBREAKFAST" << std::endl;
        PrintMenu(pancakeIterator);

        std::cout << "\nLUNCH" << std::endl;
        PrintMenu(dinerIterator);
    }

private:
    void PrintMenu(std::unique_ptr<Iterator>& iterator) const
    {
        while (iterator->HasNext()) {
            auto& menuItem = iterator->Next();
            std::cout << menuItem->GetName() << ", ";
            std::cout << menuItem->GetPrice() << " -- ";
            std::cout << menuItem->GetDescription() << "\n";
        }
    }

private:
    std::shared_ptr<PancakeHouseMenu> pancakeHouseMenu;
    std::shared_ptr<DinerMenu> dinerMenu;
};

#endif
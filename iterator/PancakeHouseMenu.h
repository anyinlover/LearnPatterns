#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H
#include <vector>
#include <memory>
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"

class PancakeHouseMenu {
public:
    PancakeHouseMenu()
    {
        AddItem("K&B's Pancake Breakfase", "Pancakes with scrambled eggs and toast", true, 2.99);
        AddItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
        AddItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
        AddItem("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59);
    }

    void AddItem(std::string name, std::string description, bool vegetarian, double price)
    {
        menuItems.emplace_back(std::make_unique<MenuItem>(name, description, vegetarian, price));
    }

    std::unique_ptr<Iterator> CreateIterator()
    {
        return std::make_unique<PancakeHouseMenuIterator>(menuItems);
    }


private:
    std::vector<std::unique_ptr<MenuItem>> menuItems;
};

#endif
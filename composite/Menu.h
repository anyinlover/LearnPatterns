#ifndef MENU_H
#define MENU_H

#include <vector>
#include <iostream>
#include "MenuComponent.h"

class Menu : public MenuComponent {
public:
    explicit Menu(std::string nm, std::string desc): name(nm), description(desc) {}

    void Add(std::shared_ptr<MenuComponent> menuComponent) override
    {
        menuComponents.push_back(menuComponent);
    }

    void Remove(std::shared_ptr<MenuComponent> menuComponent) override
    {
        auto it = std::find(menuComponents.begin(), menuComponents.end(), menuComponent);
        if (it !=menuComponents.end()) {
            menuComponents.erase(it);
        }
    }

    std::shared_ptr<MenuComponent> GetChild(int i) const override
    {
        return menuComponents[i];
    }

    std::string GetName() const override
    {
        return name;
    }

    std::string GetDescription() const override
    {
        return description;
    }

    void Print() const override
    {
        std::cout << "\n" << GetName() << ", " << GetDescription() << std::endl;
        std::cout << "-----------------" << std::endl;

        for (auto menuComponent : menuComponents) {
            menuComponent->Print();
        }
    }

private:
    std::string name;
    std::string description;
    std::vector<std::shared_ptr<MenuComponent>> menuComponents;
};

#endif
#ifndef WAITRESS_H
#define WAITRESS_H
#include "MenuComponent.h"

class Waitress {
public:
    explicit Waitress(std::shared_ptr<MenuComponent> ams): allMenus(ams) {}

    void PrintMenu()
    {
        allMenus->Print();
    }
private:
    std::shared_ptr<MenuComponent> allMenus;
};

#endif
#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H
#include <memory>
#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(std::shared_ptr<Turkey> tk): turkey(tk) {}

    void Quack() override
    {
        turkey->Gobble();
    }

    void Fly() override
    {
        for (int i=0; i < 5; i++) {
            turkey->Fly();
        }
    }
private:
    std::shared_ptr<Turkey> turkey;
};

#endif
#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H
#include <iostream>
#include "State.h"
#include "GumballMachine.h"

class SoldOutState: public State {
public:

    void InsertQuarter() override
    {
        std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
    }

    void EjectQuarter() override
    {
        std::cout << "You can't eject as no quarter is inserted" << std::endl;
    }

    void TurnCrank() override
    {
        std::cout << "You turned, no gumballs here" << std::endl;
    }

    void Dispense() override
    {
        std::cout << "No gumball dispensed" << std::endl;
    }

};

std::ostream& operator<<(std::ostream &os, const SoldOutState &s)
{
    os << "sold out state";
    return os;
}

#endif
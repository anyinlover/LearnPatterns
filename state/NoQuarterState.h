#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include <iostream>
#include "State.h"
#include "GumballMachine.h"

class NoQuarterState : public State {
public:

    void InsertQuarter() override
    {
        std::cout << "You inserted a quarter" << std::endl;
        gumballMachine->SetState(gumballMachine->GetHasQuarterState());
    }

    void EjectQuarter() override
    {
        std::cout << "You haven't inserted a quarter." << std::endl;
    }

    void TurnCrank() override
    {
        std::cout << "You turned, but there's no quarter" << std::endl;
    }

    void Dispense() override
    {
        std::cout << "You need to pay first" << std::endl;
    }

};

std::ostream& operator<<(std::ostream &os, const NoQuarterState &s)
{
    os << "no quarter state";
    return os;
}

#endif
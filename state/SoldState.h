#ifndef SOLDSTATE_H
#define SOLDSTATE_H
#include <iostream>
#include "State.h"
#include "GumballMachine.h"

class SoldState : public State {
public:

    void InsertQuarter() override
    {
        std::cout << "Please wait, we're already giving you a gumball" << std::endl;
    }

    void EjectQuarter() override
    {
        std::cout << "Sorry, you already turned the crank" << std::endl;
    }

    void TurnCrank() override
    {
        std::cout << "Turning twice doesn't get you another gumbail!" << std::endl;

    }

    void Dispense() override
    {
        gumballMachine->ReleaseBall();
        if (gumballMachine->GetCount() > 0) {
            gumballMachine->SetState(gumballMachine->GetNoQuarterState());
        } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            gumballMachine->SetState(gumballMachine->GetSoldOutState());
        }
    }


};

std::ostream& operator<<(std::ostream &os, const SoldState &s)
{
    os << "sold state";
    return os;
}

#endif
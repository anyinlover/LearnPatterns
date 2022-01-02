#ifndef WINNERSTATE_H
#define WINNERSTATE_H
#include <iostream>
#include "State.h"

class GumballMachine;
class WinnerState : public State {
public:
    WinnerState(GumballMachine* gm): gumballMachine(gm) {}
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

    void Dispense() override;
private:
    GumballMachine* gumballMachine;

};



std::ostream& operator<<(std::ostream &os, const WinnerState &s)
{
    os << "winner state";
    return os;
}

#endif
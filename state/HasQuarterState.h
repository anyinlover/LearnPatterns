#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H
#include <iostream>
#include <random>
#include "State.h"
#include "GumballMachine.h"

class HasQuarterState : public State {
public:

    void InsertQuarter() override
    {
        std::cout << "You can't insert another quarter" << std::endl;
    }

    void EjectQuarter() override
    {
        std::cout << "Quarter returned" << std::endl;
        gumballMachine->SetState(gumballMachine->GetNoQuarterState());
    }

    void TurnCrank() override
    {
        std::cout << "You turned..." << std::endl;
        int winner = u(generator);
        if (winner == 0 && gumballMachine->GetCount() > 1) {
            gumballMachine->SetState(gumballMachine->GetWinnerState());
        } else {
            gumballMachine->SetState(gumballMachine->GetSoldState());
        }
    }

    void Dispense() override
    {
        std::cout << "No gumball dispensed" << std::endl;
    }

private:
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> u;
};

std::uniform_int_distribution<int> HasQuarterState::u(0,9);

std::ostream& operator<<(std::ostream &os, const HasQuarterState &s)
{
    os << "has quarter state";
    return os;
}

#endif
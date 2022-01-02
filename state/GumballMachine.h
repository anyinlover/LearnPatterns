#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <memory>
#include <iostream>
// #include "HasQuarterState.h"
// #include "NoQuarterState.h"
// #include "SoldOutState.h"
// #include "SoldState.h"
// #include "WinnerState.h"

class State;
class HasQuarterState;
class NoQuarterState;
class SoldOutState;
class SoldState;
class WinnerState;

class GumballMachine {
public:
    GumballMachine(int numberGumballs);

    ~GumballMachine()
    {
        delete soldOutState;
        delete hasQuarterState;
        delete noQuarterState;
        delete soldState;
        delete winnerState;
    }

    void InsertQuarter()
    {
        state->InsertQuarter();
    }

    void EjectQuarter()
    {
        state->EjectQuarter();
    }

    void TurnCrank()
    {
        state->TurnCrank();
        state->Dispense();
    }

    int GetCount() const
    {
        return count;
    }

    State* GetNoQuarterState()
    {
        return noQuarterState;
    }

    State* GetHasQuarterState()
    {
        return hasQuarterState;
    }

    State* GetSoldOutState()
    {
        return soldOutState;
    }

    State* GetSoldState()
    {
        return soldState;
    }

    State* GetWinnerState()
    {
        return winnerState;
    }

    State* GetState()
    {
        return state;
    }
    
    void SetState(State* st)
    {
        state = st;
    }

    void ReleaseBall() {
        std::cout << "A gumball comes rolling out the slot..." << std::endl;
        if (count > 0) {
            count--;
        }
    }


private:
    State* soldOutState;
    State* noQuarterState;
    State* hasQuarterState;
    State* soldState;
    State* winnerState;
    State* state; 
    int count = 0;
};

/* std::ostream& operator<<(std::ostream &os, const GumballMachine &gbm)
{
    os << "Inventory: " << gbm.GetCount() << " gumball";
    if (gbm.GetCount() != 1) {
        os << "s";
    }
    os << "\n";
    os << "Machine is " << *gbm.GetState() << "\n";
    return os;
} */


#endif
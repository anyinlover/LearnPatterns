#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <memory>
#include <iostream>
#include "State.h"

class GumballMachine : public std::enable_shared_from_this<GumballMachine> {
public:
    GumballMachine(int numberGumballs) : count(numberGumballs) {

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
    
    void SetState(std::unique_ptr<State> st)
    {
        state.swap(st);
    }

    void ReleaseBall() {
        std::cout << "A gumball comes rolling out the slot..." << std::endl;
        if (count > 0) {
            count--;
        }
    }

    void GetNoQuarterState() const {
        
    }


private:
    std::unique_ptr<State> soldOutState;
    std::unique_ptr<State> noQuarterState;
    std::unique_ptr<State> hasQuarterState;
    std::unique_ptr<State> soldState;
    std::unique_ptr<State> state; 
    int count = 0;
};

#endif
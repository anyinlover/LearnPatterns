#include "GumballMachine.h"


GumballMachine::GumballMachine(int numberGumballs) : count(numberGumballs), 
    soldOutState(new SoldOutState()), 
    hasQuarterState(new HasQuarterState()),
    noQuarterState(new NoQuarterState()),
    soldState(new SoldState()),
    winnerState(new WinnerState()) 
{
    soldOutState->SetMachine(this);
    hasQuarterState->SetMachine(this);
    noQuarterState->SetMachine(this);
    soldOutState->SetMachine(this);
    winnerState->SetMachine(this);
    state = count > 0 ? noQuarterState : soldOutState;
}
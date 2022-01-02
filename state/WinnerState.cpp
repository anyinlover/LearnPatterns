#include "WinnerState.h"

void WinnerState::Dispense() override
{
    gumballMachine->ReleaseBall();
    if (gumballMachine->GetCount() == 0) {
        gumballMachine->SetState(gumballMachine->GetNoQuarterState());
    } else {
        gumballMachine->ReleaseBall();
        std::cout << "YOU'RE A WINNER! You got two gumbaills for your quarter" << std::endl;
        if (gumballMachine->GetCount() > 0) {
            gumballMachine->SetState(gumballMachine->GetNoQuarterState());
        } else {
            std::cout << "Oops, out of gumballs!" << std::endl;
            gumballMachine->SetState(gumballMachine->GetSoldOutState());
        }
    }
}
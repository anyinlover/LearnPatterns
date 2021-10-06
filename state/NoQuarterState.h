#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include <iostream>
#include "State.h"
#include "GumballMachine.h"

class NoQuarterState : public State {
public:
    NoQuarterState(std::shared_ptr<GumballMachine> gm) {
        gumballMachine = gm;
    }

    void InsertQuarter() {
        std::cout << "You inserted a quarter" << std::endl;
        gumballMachine->SetState(gumballMachine->GetHasQuarterState());
    }

    void EjectQuarter() {
        std::cout << "You haven't inserted a quarter." << std::endl;
    }

    void TurnCrank() {
        std::cout << "You turned, but there's no quarter" << std::endl;
    }

    void Dispense() {
        std::cout << "You need to pay first" << std::endl;
    }

private:
    std::shared_ptr<GumballMachine> gumballMachine;
};

#endif
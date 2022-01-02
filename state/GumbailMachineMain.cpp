#include "GumballMachine.h"

int main()
{
    auto gumballMachine = std::make_unique<GumballMachine>(5);

    // std::cout << gumballMachine << std::endl;

    gumballMachine->InsertQuarter();
    gumballMachine->TurnCrank();

    // std::cout << gumballMachine << std::endl;

    gumballMachine->InsertQuarter();
    gumballMachine->TurnCrank();
    gumballMachine->InsertQuarter();
    gumballMachine->TurnCrank();

    // std::cout << gumballMachine << std::endl;

}
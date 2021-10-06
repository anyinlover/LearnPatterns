#include <iostream>
#include "ChocolateBoiler.h"

int main()
{
    ChocolateBoiler& cbp = ChocolateBoiler::GetInstance();
    cbp.Fill();
    cbp.Boil();
    cbp.Drain();
    ChocolateBoiler& cbp2 = ChocolateBoiler::GetInstance();
    cbp.Fill();
}
#include "SimpleRemoteControl.h"
#include "LightOnCommand.h"
#include "GarageDoorOpenCommand.h"

int main()
{
    auto remote = std::make_shared<SimpleRemoteControl>();
    auto light = std::make_shared<Light>();
    auto lightOn = std::make_shared<LightOnCommand>(light);
    auto garageDoor = std::make_shared<GarageDoor>();
    auto garageOpen = std::make_shared<GarageDoorOpenCommand>(garageDoor);


    remote->SetCommand(lightOn);
    remote->ButtonWasPressed();
    remote->SetCommand(garageOpen);
    remote->ButtonWasPressed();

}
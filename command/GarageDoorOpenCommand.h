#ifndef GARAGEDOOROPENCOMMAND_H
#define GARAGEDOOROPENCOMMAND_H
#include <memory>
#include "Command.h"
#include "GarageDoor.h"

class GarageDoorOpenCommand : public Command {
public:
    GarageDoorOpenCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoorPtr(garageDoor) {}
    ~GarageDoorOpenCommand() = default;
    void execute() {
        garageDoorPtr->Up();
    }
private:
    std::shared_ptr<GarageDoor> garageDoorPtr;

};

#endif
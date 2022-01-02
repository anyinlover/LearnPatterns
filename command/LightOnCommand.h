#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include <memory>
#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command {
public:
    LightOnCommand(std::shared_ptr<Light> light) : lightPtr(light) {}
    ~LightOnCommand() = default;
    void execute() {
        lightPtr->on();
    }
private:
    std::shared_ptr<Light> lightPtr;
};

#endif
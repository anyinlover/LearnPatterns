#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H
#include <memory>
#include "Command.h"

class SimpleRemoteControl {
public:
    SimpleRemoteControl() = default;
    ~SimpleRemoteControl() = default;

    void SetCommand(std::shared_ptr<Command> command) {
        slot = command;
    }

    void ButtonWasPressed() {
        slot->execute();
    }
private:
    std::shared_ptr<Command> slot;
};

#endif
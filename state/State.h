#ifndef STATE_H
#define STATE_H

class State {
public:
    virtual ~State() = default;
    virtual void InsertQuarter() = 0;
    virtual void EjectQuarter() = 0;
    virtual void TurnCrank() = 0;
    virtual void Dispense() = 0;
};

#endif
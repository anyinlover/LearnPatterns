#ifndef STATE_H
#define STATE_H

#include <ostream>
class State {

public:
    State() = default;
    virtual ~State() = default;
    virtual void InsertQuarter() = 0;
    virtual void EjectQuarter() = 0;
    virtual void TurnCrank() = 0;
    virtual void Dispense() = 0;
    friend std::ostream& operator<<(std::ostream& os, const State& state)
    {
        state.ToString(os);
        return os;
    }

protected:
    virtual void ToString(std::ostream&) const = 0;
};

#endif
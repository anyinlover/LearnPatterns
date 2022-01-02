#ifndef PROJECTOR_H
#define PROJECTOR_H

class Projector {
public:
    void On()
    {
        std::cout << "The projector is on." << std::endl;
    }

    void Off()
    {
        std::cout << "The projector is off." << std::endl;
    }

    void WideScreenMode()
    {
        std::cout << "The projector is in wide scrren mode." << std::endl;
    }

    void TVMode()
    {
        std::cout << "The projector is in tv mode." << std::endl;
    }
};

#endif
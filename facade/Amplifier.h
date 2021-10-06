#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <iostream>
#include <memory>
#include "StreamingPlayer.h"
#include "Tuner.h"

class Amplifier {
public:
    void On()
    {
        std::cout << "The amplifier is on." << std::endl;
    }

    void Off()
    {
        std::cout << "The amplifier is off." << std::endl;
    }

    void SetStereoSound()
    {
        std::cout << "The amplifier is set stereo mode." << std::endl;
    }

    void SetSurroundSound()
    {
        std::cout << "The amplifier is set surround sound on." << std::endl;
    }

    void SetVolume(int level)
    {
        std::cout << "The amplifier is set volume to " << level << std::endl;
    }

    void SetStreamingPlayer(std::shared_ptr<StreamingPlayer> ply)
    {
        player = ply;
    }

    void SetTuner(std::shared_ptr<Tuner> tnr)
    {
        tuner = tnr;
    }
private:
    std::shared_ptr<StreamingPlayer> player;
    std::shared_ptr<Tuner> tuner;
};

#endif
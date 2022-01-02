#ifndef STREAMINGPLAYER_H
#define STREAMINGPLAYER_H
#include <iostream>
#include <string>

class StreamingPlayer {
public:
    void On()
    {
        std::cout << "The player is on." << std::endl;
    }

    void Off()
    {
        std::cout << "The player is off." << std::endl;
    }

    void Play(const std::string& movie)
    {
        std::cout << "The player begin playing " << movie << std::endl;
    }

    void Stop()
    {
        std::cout << "The player is stop." << std::endl;
    }

    void Pause()
    {
        std::cout << "The player is paused" << std::endl;
    }

    void SetTwoChannelAudio()
    {
        std::cout << "The player is set two channel audio." << std::endl;
    }

    void SetSurroundAudio()
    {
        std::cout << "The player is set surrond audio." << std::endl;
    }
};

#endif
#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H
#include <memory>

#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "Projector.h"
#include "Screen.h"
#include "TheaterLights.h"
#include "PopcornPopper.h"

class HomeTheaterFacade {
public:
    explicit HomeTheaterFacade(std::shared_ptr<Amplifier> amp,
        std::shared_ptr<Tuner> tnr,
        std::shared_ptr<StreamingPlayer> pyr,
        std::shared_ptr<Projector> pjt,
        std::shared_ptr<Screen> scn,
        std::shared_ptr<TheaterLights> lgs,
        std::shared_ptr<PopcornPopper> ppr):
        amplifier(amp), tuner(tnr), player(pyr),
        projector(pjt), screen(scn), lights(lgs), popper(ppr) {}

    void WatchMovie(std::string movie)
    {
        std::cout << "Get ready to watch a movie..." << std::endl;
        popper->On();
        popper->Pop();
        lights->Dim(10);
        screen->Down();
        projector->On();
        projector->WideScreenMode();
        amplifier->On();
        amplifier->SetStreamingPlayer(player);
        amplifier->SetSurroundSound();
        amplifier->SetVolume(5);
        player->On();
        player->Play(movie);
    }

    void EndMovie()
    {
        std::cout << "Shutting movie theater down..." << std::endl;
        popper->Off();
        lights->On();
        screen->Up();
        projector->Off();
        amplifier->Off();
        player->Stop();
        player->Off();
    }

private:
    std::shared_ptr<Amplifier> amplifier;
    std::shared_ptr<Tuner> tuner;
    std::shared_ptr<StreamingPlayer> player;
    std::shared_ptr<Projector> projector;
    std::shared_ptr<Screen> screen;
    std::shared_ptr<TheaterLights> lights;
    std::shared_ptr<PopcornPopper> popper;
};
#endif
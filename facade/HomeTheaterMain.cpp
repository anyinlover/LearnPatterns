#include "HomeTheaterFacade.h"

int main()
{
    auto amp = std::make_shared<Amplifier>();
    auto tuner = std::make_shared<Tuner>();
    auto player = std::make_shared<StreamingPlayer>();
    auto projector = std::make_shared<Projector>();
    auto screen = std::make_shared<Screen>();
    auto lights = std::make_shared<TheaterLights>();
    auto popper = std::make_shared<PopcornPopper>();
    auto homeTheater = std::make_unique<HomeTheaterFacade>(amp, tuner, player, projector, screen, lights, popper);

    homeTheater->WatchMovie("Raiders of the Lost Ark");
    homeTheater->EndMovie();
}
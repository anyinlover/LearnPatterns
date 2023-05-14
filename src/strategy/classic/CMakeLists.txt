add_library(classic_fly
    FlyBehavior.h
    FlyNoWay.h FlyNoWay.cpp
    FlyRocketPowered.h FlyRocketPowered.cpp
    FlyWithWings.h FlyWithWings.cpp
)

add_library(classic_quack
    QuackBehavior.h
    Squeak.h Squeak.cpp
    NormalQuack.h NormalQuack.cpp
    MuteQuack.h MuteQuack.cpp
)

add_library(classic_duck
    Duck.h
    MallardDuck.h MallardDuck.cpp
    ModelDuck.h ModelDuck.cpp
)

add_executable(classic_strategy_main
    Main.cpp
)

target_link_libraries(classic_strategy_main
    classic_fly
    classic_quack
    classic_duck
)
add_library(function_fly
    FlyNoWay.h FlyNoWay.cpp
    FlyRocketPowered.h FlyRocketPowered.cpp
    FlyWithWings.h FlyWithWings.cpp
)

add_library(function_quack
    Squeak.h Squeak.cpp
    NormalQuack.h NormalQuack.cpp
    MuteQuack.h MuteQuack.cpp
)

add_library(function_duck
    Duck.h
    MallardDuck.h MallardDuck.cpp
    ModelDuck.h ModelDuck.cpp
)

add_executable(function_strategy_main
    Main.cpp
)

target_link_libraries(function_strategy_main
    function_fly
    function_quack
    function_duck
)
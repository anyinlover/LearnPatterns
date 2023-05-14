
add_library(classic_calculator
    Calculator.h Calculator.cpp
    CalculatorCommand.h
    Add.h
    Subtract.h
)

add_executable(classic_command_main
    Main.cpp
)

target_link_libraries(classic_command_main
    classic_calculator
)
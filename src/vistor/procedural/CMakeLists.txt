add_library(procedural_shapes
    Shape.h
    Point.h
    Circle.h
    Square.h
    DrawCircle.h DrawCircle.cpp
    DrawSquare.h DrawSquare.cpp
    DrawAllShapes.h DrawAllShapes.cpp
)

add_executable(procedural_main
    Main.cpp
)

target_link_libraries(procedural_main
    procedural_shapes
)
add_library(oop_shapes
    Shape.h
    Point.h
    Circle.h Circle.cpp
    Square.h Square.cpp
    DrawAllShapes.h DrawAllShapes.cpp
)

add_executable(oop_main
    Main.cpp
)

target_link_libraries(oop_main
    oop_shapes
)
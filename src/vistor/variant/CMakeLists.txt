add_library(variant_shapes
    Shape.h
    Shapes.h
    Point.h
    Circle.h
    Square.h
    DrawAllShapes.h DrawAllShapes.cpp
)

add_executable(variant_main
    Main.cpp
)

target_link_libraries(variant_main
    variant_shapes
)
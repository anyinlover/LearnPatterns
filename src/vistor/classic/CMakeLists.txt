add_library(classic_shapes
    Shape.h
    Point.h
    Circle.h
    Square.h
    ShapeVisitor.h
    Draw.h Draw.cpp
    DrawAllShapes.h DrawAllShapes.cpp
)

add_executable(classic_vistor_main
    Main.cpp
)

target_link_libraries(classic_vistor_main
    classic_shapes
)

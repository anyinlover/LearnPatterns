add_library(AcyclicShapes
    Shape.h
    Circle.h
    Square.h
    AbstractVisitor.h
    Visitor.h
    Draw.h
    DrawAllShapes.h DrawAllShapes.cpp
)

add_executable(AcyclicMain
    Main.cpp
)

target_link_libraries(AcyclicMain
    AcyclicShapes
)

cmake_minimum_required(VERSION 3.5)

project(05.homework)

add_executable(statistics
        main.cpp
        src/statistic.h
        src/min.h
        src/min.cpp
        src/max.h
        src/max.cpp
        src/mean.h
        src/mean.cpp
        src/std.h
        src/std.cpp
        src/percentile.h
        src/percentile.cpp
)
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)


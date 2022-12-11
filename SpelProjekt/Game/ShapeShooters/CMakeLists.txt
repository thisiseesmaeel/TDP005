cmake_minimum_required(VERSION 3.23)
project(ShapeShooters)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)

add_executable(ShapeShooters main.cpp Game.cpp Game.h Player.cpp Player.h Bullet.cpp Bullet.h Enemy.cpp Enemy.h)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

include_directories(${SFML_INCLUDE_DIRS})

target_link_libraries(ShapeShooters sfml-system sfml-window sfml-graphics sfml-audio sfml-network)


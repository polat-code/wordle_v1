cmake_minimum_required(VERSION 3.29)
project(wordle_V1)

set(CMAKE_CXX_STANDARD 20)

add_executable(wordle_V1 src/main.cpp
        include/user/User.h
        include/user/UserService.h
        include/word/Word.h
        include/word/WordService.h
        include/game/Game.h
        include/game/GameService.h
        src/game/Game.cpp
        src/game/GameService.cpp
        src/user/User.cpp
        src/user/UserService.cpp
        src/word/Word.cpp
        src/word/WordService.cpp)

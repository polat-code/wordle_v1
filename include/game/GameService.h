//
// Created by Özgürhan Polat on 19.09.2024.
//

#ifndef GAMESERVICE_H
#define GAMESERVICE_H
#include "Game.h"

using namespace std;
using namespace game;

namespace gameService {

    class GameService {
        public:
            GameService();
            Game &startAGame();
            void playTheGame(Game &game);
            void showResults(Game &game);

    };
}
#endif //GAMESERVICE_H

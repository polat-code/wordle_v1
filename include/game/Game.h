//
// Created by Özgürhan Polat on 19.09.2024.
//

#ifndef GAME_H
#define GAME_H
#include <vector>

#include "../word/Word.h"
using namespace std;
using namespace word;

namespace game {

    class Game {
        vector<Word> words;
        int numberOfWords;
        //auto createdAt = std::chrono::system_clock::now();
        auto createdAt;
        int remainingWords;


        public:
            Game(vector<Word> &words);

        // Words Getter
        vector<Word> &getWords();

        // Number of Words Getter
        int getNumberOfWords();

        // Number of Remaining Words
        int getRemainingWords();


    };
}
#endif //GAME_H

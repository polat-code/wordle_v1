//
// Created by Özgürhan Polat on 19.09.2024.
//

#ifndef WORDSERVICE_H
#define WORDSERVICE_H
#include "Word.h"
using namespace word;
namespace wordService {

    class WordService {

        public:
            WordService();
            Word getRandomWord();
            bool checkValidWordFromWordList(string inputWord);
            void checkLettersSimilarities(Word &hiddenWord,string inputWord);

    };
}


#endif //WORDSERVICE_H

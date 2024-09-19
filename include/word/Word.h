//
// Created by Özgürhan Polat on 19.09.2024.
//

#ifndef WORD_H
#define WORD_H
#include <vector>
using namespace std;

namespace word {
    enum SimilarityColor {
        GRAY,
        YELLOW,
        GREEN
    };

    class Letter {
        char letter_;
        SimilarityColor similarity_color;
        public:
            Letter(char letter, SimilarityColor similarity_color);

        // Letter Getter
        char getLetter() const;

        // SimilarityColor Getter and Setter
        SimilarityColor setSimilarityColor(SimilarityColor similarity_color);
        SimilarityColor getSimilarityColor();
    };

    class Word {
        vector<Letter> letters;
        public:
            Word();

        // List of Letters Setter and Getter
        void setLetters(vector<Letter> &letters);
        vector<Letter>& getLetters();
    };
}


#endif //WORD_H

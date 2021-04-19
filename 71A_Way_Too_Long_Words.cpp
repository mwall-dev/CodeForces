#include <string>
#include <vector>
#include <iostream>

/*
    Approach:
        Read in number of words.
        while(num_words) 
        If size is greater than 10 than its just simple math.

*/


int main() {
    int num_words;
    std::cin >> num_words;

    while(num_words) {
        std::string word;
        std::cin >> word;

        if(word.size() > 10) {
            word = word[0] + std::to_string(word.size() - 2) + word[word.size() - 1];
        }

        std::cout << word << std::endl;
        --num_words;
    }

    return 0;

}

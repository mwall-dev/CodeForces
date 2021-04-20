#include <string>
#include <vector>
#include <iostream>

/*

    Notes:  


    Approach:
        Read in number of contestants
        Read in kth place
        Read in contestant scores.
        Count how many until you get to kth place. Then keep counting those whose scores are equal to the
        kth places.




*/

int main() {
    int n, k;
    std::cin >> n >> k;

    int count = 0;
    int current_place = 1;
    int score;

    // Count scores before kth place (if > 0).
    while(current_place < k) {
        std::cin >> score;
        if(score <= 0) {
            std::cout << count << std::endl;
            return 0;
        }
        ++count;
        ++current_place;
    }

    // Now at kth score, record it and add it as they passed.
    int kscore;
    std::cin >> kscore;
    if(kscore == 0) {
        std::cout << count;
        return 0;
    }
    
    ++count;
    // Count scores that are equal to Kscore.
    while(std::cin >> score && score == kscore) {
        ++count;
    }

    std::cout << count;

    return 0;
}
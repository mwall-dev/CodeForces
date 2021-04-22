#include <string>
#include <vector>
#include <iostream>

/*

    Notes:
        Can we use indicies and distance for this?
        Distance from 3,3.


    Approach:
    Find the location of the 1. (1-indexed). Can use a count to work out row and col as we know its 5x5.
    Then just abs(3-x) + abs(3-y).


    Debug:


 1 - 5   = 1
 6 - 10 = 2
 11 - 15 = 3
 16 - 20 = 4

 row = (count - 1 / 5) + 1

 col = (count - 1 % 5)  + 1 


*/

int main() {
    int num;
    int count = 0;


    while(std::cin >> num) {
        ++count;
        if(num == 1) {
            int x = ((count - 1) / 5) + 1;
            int y = ((count - 1) % 5) + 1;
            std::cout << std::abs(3 - x) + std::abs(3 - y) << std::endl;
            return 0;
        }
    }


    return 0;
}
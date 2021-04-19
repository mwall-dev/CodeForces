#include <string>
#include <vector>
#include <iostream>

/*

    Notes:


    Approach:
        Cin initial number and use while loop.
        Cin the 3 0/1's. If >= 2 then ++count.





*/

int main() {
    int num_problems;
    std::cin >> num_problems;

    int num_solved = 0;
    for(int i = 0; i < num_problems; ++i) {
        int p1, p2, p3;
        std::cin >> p1 >> p2 >> p3;

        if(p1 + p2 + p3 >= 2) ++num_solved;
    }

    std::cout << num_solved << std::endl;


    return 0;
}
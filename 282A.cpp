#include <string>
#include <vector>
#include <iostream>

/*

    Notes:
    



    Approach:
        Read in number of lines.
        Read in each line into a string.
        Look at str[0]. If it is X then need to look at str[1] for a + or -.
        Add if + and subtract if -.


    Debug:





*/


int main() {
    int n;
    std::cin >> n;

    int x = 0;
    std::string str;

    for(int i = 0; i < n; ++i) {
        std::cin >> str;

        switch(str[0]) {
            case '+':
                ++x;
                break;
            case '-':
                --x;
                break;

            case 'X':
                x += str[1] == '+' ? 1 : -1;
                break;

        }
    }

    std::cout << x << std::endl;


    return 0;
}
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>


/*

    Notes:


    Approach : Optimsed
        Use ASCII.
        Use a while loop and compare strings by each char.
        If either is uppercase, change to lower and redo loop.
        Exit loop early if found a result.
        


    Debug:




*/
int main() {
    std::string s1, s2;

    std::cin >> s1 >> s2;

    int index = 0;

    while(index < s1.length()) {
        if(std::isupper(s1[index])) s1[index] = std::tolower(s1[index]);
    
        if(std::isupper(s2[index])) s2[index] = std::tolower(s2[index]);

        if(s1[index] < s2[index]) {
            std::cout << -1 << std::endl;
            return 0;
        }

    
        else if(s2[index] < s1[index]) {
            std::cout << 1 << std::endl;
            return 0;
        }

        ++index;

    }

    std::cout << 0 << std::endl;
    return 0;
}


/* Slow Solution
int main() {
    std::string s1, s2;

    std::cin >> s1 >> s2;

    
    std::transform(s1.begin(), s1.end(), s1.begin(),
        [](unsigned char c){ return std::tolower(c); });
    std::transform(s2.begin(), s2.end(), s2.begin(),
        [](unsigned char c){ return std::tolower(c); });
    
    if(s1 < s2) std::cout << -1 << std::endl;

    else if(s2 < s1) std::cout << 1 << std::endl;

    else std::cout << 0 << std::endl;


    return 0;
}


*/
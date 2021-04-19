#include <iostream>


int main() {
    int watermelon_kgs;
    std::cin >> watermelon_kgs;
    if(watermelon_kgs == 2) {
        std::cout << "No\n";
        return 0;
    }
    if(watermelon_kgs % 2) std::cout << "No\n";
    else std::cout << "Yes\n";

    return 0;

}

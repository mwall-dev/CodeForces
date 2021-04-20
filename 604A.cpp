#include <string>
#include <vector>
#include <iostream>

/*

    Notes:
    +100 sucessful hacks
    -50 unsucessful hacks
    x = 500, 1000, 1500, 2000, 2500
    Says int result but watch for rounding in formula.

    Approach:
        Read in times.
        Read in wrong subs
        Read in hacks.

        Iterate 5 times (one for each problem):
            score += forumla in doc.

        Add/subtract hacks.


    Debug:
        Stupidly used an incorrect vector constructor naively thinking it was just resizing but it was actually sizing 
        and default initialising the first 5 elements so are push backs meant nothing.

*/

int main() {

    int max_point_values[5] = {500, 1000, 1500, 2000, 2500};
    std::vector<int> times;

    for(int i = 0; i < 5; ++i) {
        int time;
        std::cin >> time;
        times.push_back(time);
    }


    std::vector<int> wrong_subs;
    for(int i = 0; i < 5; ++i) {
        int wrong_sub;
        std::cin >> wrong_sub;
        wrong_subs.push_back(wrong_sub);
    }

    int hack_success;
    int hack_fail;

    std::cin >> hack_success >> hack_fail;

    int score = 0;

    for(int i = 0; i < 5; ++i) {
        int x = max_point_values[i];
        int m = times[i];
        int w = wrong_subs[i];
        //std::cout << x << " " << m << " " << w << std::endl;
        int left = (x/10 * 3);
        double right_L = 1 - (m / 250.0);
        double right_R = x - (50.0* w);

        std::cout << left << " " << right_L << " " << right_R << std::endl;
        score += std::max(left, (int)(right_L * right_R));
        std::cout << score << "\n\n";
    }
    

    score += (hack_success * 100);
    score -= (hack_fail * 50);

    std::cout << score << std::endl;
    return 0;
}
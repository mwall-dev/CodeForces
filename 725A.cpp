#include <string>
#include <vector>
#include <iostream>

/*

    Notes:
        We don't always start at the leftmost position. 
        The idea here is to run the sequence at all starting positions 1 to n (starting at edges or middle or blah) and 
        seeing if we get a fall.
        You plop the ball into a position and its sweeped by the bumpers.
        Example:
        Idea is that something like this ><< will have 0 positons to fall, If you drop in on first bumper it just keeps
        bumping left and right until infinity. if you drop middle, same idea. If you drop rightmost, its sweeped to left and
        stuck in the cycle again.

    


    Approach: 
        Idea here is that there are 3 sections:
            Section 1 is a left part of the bumper sequence that if dropped in will result in a fall to the left
            Section 2 is a middle part of the bumper sequence whereby a ball dropped in will stay in middle.
            Section 3 is a right part of the bumper sequence that if dropped in will result in a fall to the right.

            There is a possibility for some sections to be empty.

            Basically the answer will be the length of the left and right sections.





*/

int main() {
    int field_len;
    std::cin >> field_len;

    std::string bumpers;
    std::cin >> bumpers;

    int falls = 0;

    int i = 0;
    while(bumpers[i++] == '<') ++falls;
    
    i = field_len - 1;
    while(bumpers[i--] == '>') ++falls;

    std::cout << falls << std::endl;

    return 0;
}
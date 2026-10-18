#include <iostream>
#include <vector>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main()
{
    std::vector<int> elements =
    {
        1, 3, 5, 7, 9,
        11, 13, 15, 17, 19
    };

    int target = 13;

    LinearSearch linearSearch;
    JumpSearch jumpSearch;
    BinarySearch binarySearch;

    std::cout << "===== LINEAR SEARCH =====" << std::endl;

    int resultLinear =
        linearSearch.search(elements, target);

    linearSearch.displaySearchResults(
        std::cout,
        resultLinear,
        target
    );


    std::cout << std::endl;
    std::cout << "===== JUMP SEARCH =====" << std::endl;

    int resultJump =
        jumpSearch.search(elements, target);

    jumpSearch.displaySearchResults(
        std::cout,
        resultJump,
        target
    );


    std::cout << std::endl;
    std::cout << "===== BINARY SEARCH =====" << std::endl;

    int resultBinary =
        binarySearch.search(elements, target);

    binarySearch.displaySearchResults(
        std::cout,
        resultBinary,
        target
    );

    return 0;
}
#include "LinearSearch.h"

int LinearSearch::search(
    const std::vector<int>& elements,
    int target
)
{
    numberComparisons = 0;

    for (size_t i = 0; i < elements.size(); i++)
    {
        numberComparisons++;

        if (elements[i] == target)
        {
            return static_cast<int>(i);
        }
    }

    return -1;
}

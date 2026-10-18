#include "JumpSearch.h"
#include <cmath>
#include <algorithm>

int JumpSearch::search(
    const std::vector<int>& elements,
    int target
)
{
    numberComparisons = 0;

    int n = static_cast<int>(elements.size());

    if (n == 0)
    {
        return -1;
    }

    int jump = static_cast<int>(std::sqrt(n));
    int previous = 0;
    int current = jump;

    while (previous < n)
    {
        int index = std::min(current, n) - 1;

        numberComparisons++;

        if (elements[index] >= target)
        {
            break;
        }

        previous = current;
        current += jump;

        if (previous >= n)
        {
            return -1;
        }
    }

    for (int i = previous; i < std::min(current, n); i++)
    {
        numberComparisons++;

        if (elements[i] == target)
        {
            return i;
        }
    }

    return -1;
}
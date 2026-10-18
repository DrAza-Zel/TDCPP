#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm
{
public:
    LinearSearch() = default;

    int search(
        const std::vector<int>& elements,
        int target
    ) override;
};

#endif  
#ifndef SEARCHING_ALGORITHM_H
#define SEARCHING_ALGORITHM_H

#include <iostream>
#include <vector>

class SearchingAlgorithm
{
protected:
    int numberComparisons;

    static int totalComparisons;
    static int totalSearch;
    static double averageComparisons;

public:
    SearchingAlgorithm();
    virtual ~SearchingAlgorithm() = default;

    virtual int search(const std::vector<int>& elements, int target) = 0;

    void displaySearchResults(
        std::ostream& os,
        int result,
        int target
    );

    int getNumberComparisons() const;

    static int getTotalComparisons();
    static int getTotalSearch();
    static double getAverageComparisons();
};

#endif
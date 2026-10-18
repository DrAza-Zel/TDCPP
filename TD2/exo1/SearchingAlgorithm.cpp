#include "SearchingAlgorithm.h"

int SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

SearchingAlgorithm::SearchingAlgorithm()
    : numberComparisons(0)
{
}

void SearchingAlgorithm::displaySearchResults(
    std::ostream& os,
    int result,
    int target
)
{
    totalComparisons += numberComparisons;
    totalSearch++;

    averageComparisons =
        static_cast<double>(totalComparisons) / totalSearch;

    os << "Target : " << target << std::endl;

    if (result == -1)
    {
        os << "Result : element not found" << std::endl;
    }
    else
    {
        os << "Result : index " << result << std::endl;
    }

    os << "Comparisons : "
       << numberComparisons
       << std::endl;

    os << "Total comparisons : "
       << totalComparisons
       << std::endl;

    os << "Total searches : "
       << totalSearch
       << std::endl;

    os << "Average comparisons : "
       << averageComparisons
       << std::endl;
}

int SearchingAlgorithm::getNumberComparisons() const
{
    return numberComparisons;
}

int SearchingAlgorithm::getTotalComparisons()
{
    return totalComparisons;
}

int SearchingAlgorithm::getTotalSearch()
{
    return totalSearch;
}

double SearchingAlgorithm::getAverageComparisons()
{
    return averageComparisons;
}
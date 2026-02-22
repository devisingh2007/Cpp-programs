#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 3, 8, 1, 9, 2, 7};

    // std::min_element
    auto minIt = min_element(v.begin(), v.end());
    cout << "Minimum element: " << *minIt
         << " at index " << distance(v.begin(), minIt) << endl;

    // std::max_element
    auto maxIt = max_element(v.begin(), v.end());
    cout << "Maximum element: " << *maxIt
         << " at index " << distance(v.begin(), maxIt) << endl;

    // std::minmax_element
    auto [lo, hi] = minmax_element(v.begin(), v.end());
    cout << "Min: " << *lo << ", Max: " << *hi << endl;

    return 0;
}

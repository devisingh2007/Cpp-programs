#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 9, 3, 7, 4, 6};

    // 1. std::sort (ascending by default)
    sort(v.begin(), v.end());
    cout << "Ascending sort: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2. std::sort (descending with comparator)
    sort(v.begin(), v.end(), greater<int>());
    cout << "Descending sort: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 3. std::sort with custom comparator (sort by absolute value)
    vector<int> v2 = {-5, 3, -1, 8, -4};
    sort(v2.begin(), v2.end(), [](int a, int b) {
        return abs(a) < abs(b);
    });
    cout << "Sort by absolute value: ";
    for (int x : v2) cout << x << " ";
    cout << endl;

    return 0;
}

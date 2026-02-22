#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // stable_sort preserves relative order of equal elements
    vector<pair<int, string>> employees = {
        {3, "Alice"}, {1, "Bob"}, {2, "Charlie"},
        {1, "Dave"}, {2, "Eve"}
    };

    // Sort by rank (first element)
    stable_sort(employees.begin(), employees.end(),
                [](const auto& a, const auto& b) {
                    return a.first < b.first;
                });

    cout << "Stable sorted employees (by rank):" << endl;
    for (const auto& e : employees)
        cout << "Rank " << e.first << ": " << e.second << endl;

    // Note: Bob and Dave both have rank 1 - Bob (original first) stays before Dave
    // Charlie and Eve both have rank 2 - Charlie stays before Eve

    return 0;
}

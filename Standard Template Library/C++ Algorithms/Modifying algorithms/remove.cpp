#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 4, 2, 5};

    // 1. std::remove (moves "removed" elements to end, doesn't resize)
    auto newEnd = remove(v.begin(), v.end(), 2);

    cout << "After remove(2) - raw vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Erase the leftover elements
    v.erase(newEnd, v.end());
    cout << "After erase: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2. std::remove_if
    auto it2 = remove_if(v.begin(), v.end(), [](int x) { return x > 3; });
    v.erase(it2, v.end());
    cout << "After remove_if(x > 3): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8, 10};

    // 1. std::all_of - true if ALL match predicate
    bool allEven = all_of(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    cout << "All elements even? " << (allEven ? "Yes" : "No") << endl;

    // 2. std::any_of - true if ANY matches predicate
    bool anyGreater5 = any_of(v.begin(), v.end(), [](int x) { return x > 5; });
    cout << "Any element > 5? " << (anyGreater5 ? "Yes" : "No") << endl;

    // 3. std::none_of - true if NONE matches predicate
    bool noneNegative = none_of(v.begin(), v.end(), [](int x) { return x < 0; });
    cout << "No negative elements? " << (noneNegative ? "Yes" : "No") << endl;

    return 0;
}

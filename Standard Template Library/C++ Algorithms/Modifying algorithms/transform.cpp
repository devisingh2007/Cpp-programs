#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());

    // 1. std::transform (unary) - square each element
    transform(v.begin(), v.end(), result.begin(), [](int x) {
        return x * x;
    });
    cout << "Squares: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    // 2. std::transform (binary) - add two vectors element-wise
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> result2(v.size());
    transform(v.begin(), v.end(), v2.begin(), result2.begin(),
              [](int a, int b) { return a + b; });

    cout << "v + v2: ";
    for (int x : result2) cout << x << " ";
    cout << endl;

    return 0;
}

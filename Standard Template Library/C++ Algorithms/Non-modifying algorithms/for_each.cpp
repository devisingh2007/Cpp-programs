#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // std::for_each
    cout << "Elements (doubled via for_each): ";
    for_each(v.begin(), v.end(), [](int& x) {
        x *= 2;
        cout << x << " ";
    });
    cout << endl;

    // for_each with a named function object (lambda)
    int sum = 0;
    for_each(v.begin(), v.end(), [&sum](int x) {
        sum += x;
    });
    cout << "Sum of elements: " << sum << endl;

    return 0;
}

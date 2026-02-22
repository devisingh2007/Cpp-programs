#include <iostream>
#include <algorithm>
#include <numeric>
// test in
#include <list>
using namespace std;

int main()
{
    list<int> num = {1, 2, 3, 6, 5, 87, 26, 8, 2, 399, 75, 3, 8, 2, 5, 87, 42, 6, 99, 7, 1};

num.sort();

    bool result = binary_search(num.begin(), num.end(), 399);

    if (result)
    {
        cout << "399 Element is present";
    }
    else
    {
        cout << "399 Element is present";
    }

    return 0;
}
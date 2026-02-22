#include <iostream>
#include <algorithm>
// test in
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 6, 5, 87, 26, 8, 2, 399, 75, 3, 8, 2, 5, 87, 42, 6, 99, 7, 1};

    auto itr = find(num.begin(), num.end(), 8);
    if (itr != num.end())
    {
        cout << "Found: " << *itr << endl;
        cout << "Index: " << distance(num.begin(), itr) << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}
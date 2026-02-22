#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v;

    int a = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter value : ";
        cin >> a;

        v.push_back(a);
    }
    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    for (int value : v)
    {
        cout << value << " ";
    }

    return 0;
}
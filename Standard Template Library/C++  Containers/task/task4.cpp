#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v;

    int a = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "enter value : ";
        cin >> a;

        v.push_back(a);
    }

    for (int value : v)
    {
        cout << value << " ";
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            v.erase(v.begin() + i);
        }
    }
    cout << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << v.size();
    return 0;
}
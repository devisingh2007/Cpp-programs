#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int m, n;
    int x;
    list<int> l1;
    list<int> l2;
    list<int> l3;

    cout << "enter the value if m :";
    cin >> m;

    cout << "enter the value if n :";
    cin >> n;
    for(int i=0; i<m; i++)
    {
        cout << "enter the value :";
        cin >> x;
        l1.push_back(x);
    }
     for(int i=0; i<n; i++)
    {
        cout << "enter the value :";
        cin >> x;
        l2.push_back(x);
    }
    for(int value : l1) l3.push_back(value);
    for(int value : l2) l3.push_back(value);
l3.sort();
    for(int value : l3) // range based for loop (C++11)
    {
        cout << value << " ";
    }
}
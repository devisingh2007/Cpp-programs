#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> l1 = {1, 2, 3, 4, 5};

    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.push_back(12); // push back element at the end of list
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.pop_back(); // remove last element
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.push_front(0); // push front element at the beginning of list
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.pop_front(); // remove first element
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.insert(l1.begin(), 10); // insert element at the beginning of list
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;

    l1.erase(l1.begin()); // remove first element
    for (int value : l1)
    {
        cout << value << " ";
    }
    cout << endl;



    return 0;
}
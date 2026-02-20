#include <iostream>
#include <deque>
using namespace std;

int main()
{   deque<int> d = {10, 20, 30};

    for (int value : d)
    {
        cout << value << " ";
    }
    cout << endl;


    d.push_front(5); // Add at front
    for (int value : d)
    {
        cout << value << " ";
    }
    cout << endl;
    
    d.push_back(40); // Add at end
    for (int value : d)
    {
        cout << value << " ";
    }
    cout << endl;

    d.pop_front();   // Remove first element


    return 0;
}
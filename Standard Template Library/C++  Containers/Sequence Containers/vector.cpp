#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    for(int value : v) // range based for loop (C++11)
    {
        cout << value << " ";
    }

    cout << endl;

    v.push_back(12);// push back element at the end of vector
    

    for(int value : v) // range based for loop (C++11)
    {
        cout << value << " ";
    }
    cout << endl;

    v.pop_back();//remove last element    
    for(int value : v) 
    {
        cout << value << " ";
    }
    cout << endl;

    v.insert(v.begin()+2, 2020); // insert element at the beginning of vector
 for(int value : v) 
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector<int> num;
    int size;
    cout << "Enter the size of vector : ";
    cin >> size;

    
    int a;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter some number : ";
        cin >> a;
        num.push_back(a);
    }

    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());

    ofstream enjoy;
    enjoy.open("Output.txt", ios::app);
    if (enjoy.is_open())
    {
        for (auto &i : num)
        {
            enjoy << i << endl;
        }
        enjoy.close();
    }

    for (auto &i : num)
    {
        cout << i << " ";
    }

    return 0;
}
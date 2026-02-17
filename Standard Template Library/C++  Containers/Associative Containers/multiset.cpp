#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s1 = {45, 36, 89, 1, 8,8,8,8,8,8,8,8,8,8, 398, 15};

    s1.insert(7777);
    s1.insert(-852);

    for (int val : s1)
    {
        cout << val << endl;
    }
    cout << "-----------------------------------------" << endl;

    s1.erase(15);

    for (int val : s1)
    {
        cout << val << endl;
    }
    cout << "-----------------------------------------" << endl;

    auto m1=s1.find(15);
    (m1!=s1.end()?cout<<"found"<<*m1<<endl:cout<<"not found"<<*m1<<endl);

    
    cout<<s1.count(8);
}
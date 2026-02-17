#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<int, string> s1;

    s1.insert({1,"devisingh"}) ;
    s1.insert({2,"nitis"}) ;
    s1.insert({1,"jilan"}) ;
    
    for (auto &[key, value] : s1)
    {
        cout << "key is :" << key << "  and value is  :" << value << endl;
    }
    cout << "-----------------------------------------" << endl;

  s1.erase(1);
    for (auto &[key, value] : s1)
    {
        cout << "key is :" << key << "  and value is  :" << value << endl;
    }
    cout << "-----------------------------------------" << endl;
    // (m1!=s1.end()?cout<<"found"<<*m1<<endl:cout<<"not found"<<*m1<<endl);

    
}
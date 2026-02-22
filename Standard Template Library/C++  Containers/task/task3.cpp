#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    deque<string> d;
    string m;

    
    for (int i = 0; i < 3; i++)
    {
        cout << "enter  string :";
        cin >> m;
        d.push_front(m);
    }
    // for (int i =0; i < 3; i++)
    // {
    //     cout << d.at(i) << " ";
    // }

    int val;
    cout<<"enter index which one you need :";
    cin>>val;

    if(val<4 && val>0)
    {
         cout << d.at(val) << " ";
    }
    else cout<<"enter number between 0 to 2";
}
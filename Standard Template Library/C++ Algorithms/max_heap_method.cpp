#include<iostream>
#include<vector>    
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50,60};

    
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }    
    cout<<"before heap"<<endl<<endl;
    
    make_heap(v.begin(),v.end());
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }  
    cout<<"After heap"<<endl;
    pop_heap(v.begin(),v.end());
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }  
    cout<<"After pop"<<endl;

    v.push_back(80);
     make_heap(v.begin(),v.end());
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }  

}
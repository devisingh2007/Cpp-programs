#include <iostream>
#include <map>
#include<string>

using namespace std;

int main()
{
    map<int,string> s1 ;


    s1[3]="aevisingh";
   s1[1]="devisingh";
   s1[2]="jilan";


    for (auto & [key,value] : s1)
    {
        cout << "key is :" <<key<<"  and value is  :"<<value<< endl;
    }
    cout << "-----------------------------------------" << endl;


    map<string,int> m2;
    m2["hello"]=555;
    m2["hellooo"]=555;
    m2["aelo"]=555;
      for (auto & [key,value] : m2)
    {
        cout << "key is :" <<key<<"  and value is  :"<<value<< endl;
    }
    cout << "-----------------------------------------" << endl;
    // (m1!=s1.end()?cout<<"found"<<*m1<<endl:cout<<"not found"<<*m1<<endl);

    cout<<m2.at("hello");
    // cout<<s1.count(8);
}
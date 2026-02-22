#include <iostream>
#include <algorithm>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    int listsize;
    int n;
    list<int> v(listsize);
    ofstream task2;


    cout << "enter the size of array";
    cin >> listsize;

 for(int i=0;i<listsize; i++)
 {
     cout << "enter some number";
    cin >> n;

     v.push_back(n);
 }
 

    task2.open("result.txt",ios::app);
    if(task2.is_open())
    {

    }
    task2.close();

}
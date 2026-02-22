#include <iostream>
#include <algorithm>
#include <numeric>
// test in
#include <list>
using namespace std;

int main()
{
    list<int> num = {1, 2, 3, 6, 5, 87, 26, 8, 2, 399, 75, 3, 8, 2, 5, 87, 42, 6, 99, 7, 1};
    list<int> copynum(20);

    copy(num.begin(), num.end(),copynum.begin());

   for (auto &i : copynum)
   {
    cout<<i;
   }
   

    return 0;
}
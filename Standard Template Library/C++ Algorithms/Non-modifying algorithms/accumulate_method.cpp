#include <iostream>
#include <numeric>
// test in
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 6, 5, 7, 1};

    auto tatal= accumulate(num.begin(), num.end(),0);
    
    cout<<"total element is: "<<tatal;


    return 0;
}
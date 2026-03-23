#include<iostream>
#include<vector>    
#include<algorithm>

using namespace std;

int main()
{
   vector<int> n = {1, 2, 3};
   int x = 0;
   
   // Combine digits from vector into a single number
   for (auto i : n)
   {
       x = i + x * 10;
   }
   
   cout << "Combined number: " << x << endl;
   
   n.clear();
   
   // Separate digits of the number back into vector
   while (x != 0)
   {
       n.push_back(x % 10);
       x = x / 10;
   }
   
   cout << "Digits (reversed order): ";
   for (int digit : n)
   {
       cout << digit << " ";
   }
   cout << endl;
   
   return 0;
}
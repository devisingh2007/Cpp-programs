#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {7, 2, 9, 1, 5, 3, 8, 4, 6};

    // nth_element: Rearranges so that the element at nth position is
    // what it would be if the range was sorted.
    // Elements before nth are <= v[nth], elements after are >= v[nth]
    int n = 4; // 5th position (0-indexed)
    nth_element(v.begin(), v.begin() + n, v.end());

    cout << "After nth_element(4):" << endl;
    cout << "Element at position 4: " << v[n] << " (this is the 5th smallest)" << endl;
    
    cout << "Full vector state: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Use case: Find median efficiently in O(N)
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int mid = nums.size() / 2;
    nth_element(nums.begin(), nums.begin() + mid, nums.end());
    cout << "Median: " << nums[mid] << endl;

    return 0;
}

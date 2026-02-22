#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    // 1. Max-heap (default)
    priority_queue<int> maxPQ;
    maxPQ.push(30);
    maxPQ.push(10);
    maxPQ.push(50);
    maxPQ.push(20);

    cout << "Max Priority Queue (highest priority first): ";
    while (!maxPQ.empty())
    {
        cout << maxPQ.top() << " ";
        maxPQ.pop();
    }
    cout << endl;

    // 2. Min-heap (using greater<int>)
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(30);
    minPQ.push(10);
    minPQ.push(50);
    minPQ.push(20);

    cout << "Min Priority Queue (lowest priority first): ";
    while (!minPQ.empty())
    {
        cout << minPQ.top() << " ";
        minPQ.pop();
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // 1. Enqueue (push)
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Queue size: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // 2. Dequeue (pop) - FIFO order
    cout << "Dequeuing all elements (FIFO order): ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "Queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}

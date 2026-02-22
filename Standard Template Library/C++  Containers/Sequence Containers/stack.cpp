#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // 1. Push elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Stack size: " << st.size() << endl;
    cout << "Top element: " << st.top() << endl;

    // 2. Pop elements
    cout << "Popping all elements (LIFO order): ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    cout << "Stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}

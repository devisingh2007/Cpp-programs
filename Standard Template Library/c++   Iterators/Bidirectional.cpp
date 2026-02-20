#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    cout << "Vector elements (reverse traversal): " << endl;
    vector<int> v1 = {12, 36, 5, 5899, 445, 336, 69696};
    auto itr = v1.end();
    while (itr != v1.begin()) {
        --itr;
        cout << *itr << endl;
    }

    cout << "\nList elements (reverse traversal): " << endl;
    list<int> l1 = {12, 36, 5, 5899};
    auto itr1 = l1.end();
    while (itr1 != l1.begin()) {
        --itr1;
        cout << *itr1 << endl;
    }

    cout << "\nMap elements (reverse traversal by key): " << endl;
    map<int, string> m1;
    m1[0] = "Devisingh";
    m1[1] = "Jaydeep";
    m1[2] = "Nitis";
    m1[3] = "Rahul";

    auto itr2 = m1.end();
    while (itr2 != m1.begin()) {
        --itr2;
        cout << itr2->first << " => " << itr2->second << endl;
    }

    
    return 0;
}
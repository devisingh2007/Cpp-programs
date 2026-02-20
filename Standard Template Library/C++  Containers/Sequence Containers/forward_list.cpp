#include <iostream>
#include <forward_list>

int main() {
    // 1. Initialization
    std::forward_list<int> flist = {10, 20, 30, 40};

    // 2. Adding elements
    flist.push_front(5);
    flist.emplace_front(1);

    std::cout << "Forward List elements: ";
    for (int x : flist) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // 3. Removing elements
    flist.pop_front();
    std::cout << "After pop_front: ";
    for (int x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 4. Splice and insert after
    auto it = flist.begin();
    flist.insert_after(it, 15);
    std::cout << "After insert_after(begin, 15): ";
    for (int x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 5. Sort and Unique
    flist.push_front(20);
    flist.sort();
    std::cout << "Sorted list: ";
    for (int x : flist) std::cout << x << " ";
    std::cout << std::endl;

    flist.unique();
    std::cout << "Unique elements list: ";
    for (int x : flist) std::cout << x << " ";
    std::cout << std::endl;

    // 6. Clearing
    flist.clear();
    std::cout << "List empty? " << (flist.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

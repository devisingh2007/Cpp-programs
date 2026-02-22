#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4, 2, 5};

    // 1. std::replace
    std::replace(v.begin(), v.end(), 2, 99);
    std::cout << "After replace(2, 99): ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    // 2. std::replace_if
    std::replace_if(v.begin(), v.end(), [](int n) {
        return n > 50;
    }, 0);
    std::cout << "After replace_if(n > 50, 0): ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

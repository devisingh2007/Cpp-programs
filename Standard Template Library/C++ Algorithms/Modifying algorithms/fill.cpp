#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v(8);

    // 1. std::fill
    std::fill(v.begin(), v.end(), 10);
    std::cout << "Vector after fill(10): ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    // 2. std::fill_n
    std::fill_n(v.begin(), 4, 5);
    std::cout << "Vector after fill_n(begin, 4, 5): ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50, 60};

    // Random Access Iterator (vector iterators satisfy this)
    auto it = v.begin();

    // 1. Element access with []
    std::cout << "Element at index 3: " << it[3] << std::endl;

    // 2. Arithmetic (+ and -)
    it = it + 4;
    std::cout << "Element after it + 4: " << *it << std::endl;

    it = it - 2;
    std::cout << "Element after it - 2: " << *it << std::endl;

    // 3. Comparison
    auto it2 = v.end();
    if (it < it2) {
        std::cout << "it is before it2" << std::endl;
    }

    // 4. Distance
    std::cout << "Distance between it and begin: " << std::distance(v.begin(), it) << std::endl;

    return 0;
}

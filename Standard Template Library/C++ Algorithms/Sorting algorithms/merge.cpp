#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 3, 5, 7};
    std::vector<int> v2 = {2, 4, 6, 8};
    std::vector<int> destination(8);

    // std::merge
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), destination.begin());

    std::cout << "Merged vector: ";
    for (int x : destination) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

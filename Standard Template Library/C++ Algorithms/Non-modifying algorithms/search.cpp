#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v2 = {4, 5, 6};

    // std::search
    auto it = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

    if (it != v1.end()) {
        std::cout << "Sub-sequence {4, 5, 6} found at index: " 
                  << std::distance(v1.begin(), it) << std::endl;
    } else {
        std::cout << "Sub-sequence not found." << std::endl;
    }

    // std::find_end (finds the last occurrence)
    std::vector<int> v3 = {1, 2, 1, 2};
    std::vector<int> sub = {1, 2};
    auto it_end = std::find_end(v3.begin(), v3.end(), sub.begin(), sub.end());
    std::cout << "Last occurrence of {1, 2} at index: " 
              << std::distance(v3.begin(), it_end) << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 2, 2, 5, 2, 6};

    // 1. std::count
    int target = 2;
    int c = std::count(v.begin(), v.end(), target);
    std::cout << "Number " << target << " appears " << c << " times." << std::endl;

    // 2. std::count_if
    int threshold = 3;
    int c_if = std::count_if(v.begin(), v.end(), [threshold](int n) {
        return n > threshold;
    });
    std::cout << "Elements greater than " << threshold << ": " << c_if << std::endl;

    return 0;
}

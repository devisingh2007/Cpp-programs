#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    // Output Iterator example (using ostream_iterator)
    std::vector<int> v = {10, 20, 30, 40};

    std::cout << "Output Iterator (writing to console): ";
    std::ostream_iterator<int> out_it(std::cout, " | ");
    
    // std::copy uses an Output Iterator as the third argument
    std::copy(v.begin(), v.end(), out_it);
    std::cout << std::endl;

    // Another example: back_inserter is an Output Iterator
    std::vector<int> v2;
    auto back_it = std::back_inserter(v2);
    *back_it = 100;
    back_it++;
    *back_it = 200;

    std::cout << "Constructed v2 using back_inserter: ";
    for (int x : v2) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

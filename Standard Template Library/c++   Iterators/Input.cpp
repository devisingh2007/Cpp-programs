#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Input Iterator example (using istream_iterator)
    // For this example, we'll simulate input iterator behavior with a vector iterator
    // which satisfies InputIterator requirements.
    
    std::cout << "Input Iterator (reading vector): ";
    std::vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        std::cout << *it << " "; // Read access
        ++it;                   // Increment
    }
    std::cout << std::endl;

    // Advanced: istream_iterator is a pure Input Iterator
    // std::istream_iterator<int> input(std::cin); // Requires manual input

    return 0;
}

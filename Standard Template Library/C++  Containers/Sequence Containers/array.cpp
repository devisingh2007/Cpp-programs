#include <iostream>
#include <array>
#include <algorithm>

int main() {
    // 1. Initialization
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    std::cout << "Array elements: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // 2. Accessing elements
    std::cout << "Element at index 2: " << arr.at(2) << std::endl;
    std::cout << "First element (front): " << arr.front() << std::endl;
    std::cout << "Last element (back): " << arr.back() << std::endl;

    // 3. Size and capacity
    std::cout << "Size of array: " << arr.size() << std::endl;
    std::cout << "Max size: " << arr.max_size() << std::endl;

    // 4. Checking if empty
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    // 5. Fill and swap
    std::array<int, 5> arr2;
    arr2.fill(100);
    std::cout << "Array 2 after fill(100): ";
    for (int i : arr2) std::cout << i << " ";
    std::cout << std::endl;

    arr.swap(arr2);
    std::cout << "Array 1 after swap: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}

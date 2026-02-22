#include <iostream>
#include <unordered_set>

int main() {
    // 1. Initialization
    std::unordered_set<std::string> uset = {"Apple", "Banana", "Cherry"};

    // 2. Inserting elements
    uset.insert("Date");
    uset.insert("Apple"); // Duplicate, won't be added

    std::cout << "Unordered Set elements: ";
    for (const auto& item : uset) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    // 3. Searching elements
    std::string key = "Banana";
    if (uset.find(key) != uset.end()) {
        std::cout << key << " found in set." << std::endl;
    } else {
        std::cout << key << " not found." << std::endl;
    }

    // 4. Removing elements
    uset.erase("Cherry");
    std::cout << "After erase('Cherry'): ";
    for (const auto& item : uset) std::cout << item << " ";
    std::cout << std::endl;

    // 5. Bucket information
    std::cout << "Bucket count: " << uset.bucket_count() << std::endl;
    std::cout << "Load factor: " << uset.load_factor() << std::endl;

    return 0;
}

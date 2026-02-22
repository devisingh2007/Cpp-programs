#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // 1. Initialization
    std::unordered_multimap<std::string, int> ummap;
    ummap.insert({"Alice", 101});
    ummap.insert({"Bob", 102});
    ummap.insert({"Alice", 103}); // Duplicate key

    std::cout << "Unordered Multimap elements (Name: ID):" << std::endl;
    for (const auto& pair : ummap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 2. Finding all elements with a specific key
    std::string name = "Alice";
    auto range = ummap.equal_range(name);
    std::cout << "\nIDs for Alice:" << std::endl;
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << std::endl;
    }

    // 3. Size and Empty
    std::cout << "\nTotal size: " << ummap.size() << std::endl;

    // 4. Erasing all instances of a key
    ummap.erase("Alice");
    std::cout << "After erasing Alice, size: " << ummap.size() << std::endl;

    return 0;
}

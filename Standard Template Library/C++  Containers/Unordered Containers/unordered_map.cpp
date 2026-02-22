#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // 1. Initialization
    std::unordered_map<int, std::string> umap;
    umap[1] = "One";
    umap[2] = "Two";
    umap.insert({3, "Three"});

    std::cout << "Unordered Map elements (ID: Value):" << std::endl;
    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 2. Accessing elements
    std::cout << "Value for key 2: " << umap.at(2) << std::endl;

    // 3. Searching for a key
    int key = 4;
    if (umap.count(key)) {
        std::cout << "Key " << key << " exists." << std::endl;
    } else {
        std::cout << "Key " << key << " does not exist." << std::endl;
    }

    // 4. Removing an element
    umap.erase(1);
    std::cout << "After erasing key 1, size: " << umap.size() << std::endl;

    // 5. Iterating and modifying
    for (auto& pair : umap) {
        pair.second += " Modified";
    }

    std::cout << "Modified Map:" << std::endl;
    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

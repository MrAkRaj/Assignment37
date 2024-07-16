#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 3, 1, 3};
    std::unordered_map<int, int> freq;
    
    // Count the frequency of each element
    for (const auto& elem : arr) {
        ++freq[elem];
    }
    
    std::cout << "Elements occurring odd number of times: ";
    for (const auto& [key, value] : freq) {
        if (value % 2 != 0) {
            std::cout << key << " ";
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}

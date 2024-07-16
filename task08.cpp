#include <iostream>
#include <algorithm>
#include <array>

int main() {
    std::array<int, 5> arr = {5, 3, 2, 4, 1};
    
    // Sort the array in descending order
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    
    std::cout << "Array sorted in descending order: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}

#include <iostream>
#include <algorithm>
#include <array>

int main() {
    std::array<int, 5> arr = {5, 3, 2, 4, 1};
    
    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());
    
    std::cout << "Array sorted in ascending order: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}

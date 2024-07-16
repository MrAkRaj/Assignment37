#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Get reference to element at index 2
    int& ref = arr.at(2);
    
    // Print the reference
    std::cout << "Element at index 2: " << ref << std::endl;
    
    // Set a new value to the element at index 2
    ref = 10;
    
    // Print the modified array
    std::cout << "Modified array: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    
    return 0;
}

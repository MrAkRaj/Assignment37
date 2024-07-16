#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Get the element at a given index
    int index = 3; // Example index
    int element = arr.at(index);
    
    std::cout << "Element at index " << index << ": " << element << std::endl;
    
    return 0;
}

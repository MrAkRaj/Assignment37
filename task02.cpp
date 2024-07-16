#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Get the total number of elements
    std::size_t size = arr.size();
    
    std::cout << "Total number of elements: " << size << std::endl;
    
    return 0;
}

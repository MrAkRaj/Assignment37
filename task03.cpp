#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Get the first and last elements
    int first = arr.front();
    int last = arr.back();
    
    std::cout << "First element: " << first << std::endl;
    std::cout << "Last element: " << last << std::endl;
    
    return 0;
}

#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Check if the array is empty
    bool isEmpty = arr.empty();
    
    std::cout << "Is the array empty? " << (isEmpty ? "Yes" : "No") << std::endl;
    
    return 0;
}

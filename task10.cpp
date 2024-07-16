#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> left(n, 1), right(n, 1), answer(n);
    
    // Calculate left products
    for (int i = 1; i < n; ++i) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    
    // Calculate right products
    for (int i = n - 2; i >= 0; --i) {
        right[i] = right[i + 1] * nums[i + 1];
    }
    
    // Calculate the answer
    for (int i = 0; i < n; ++i) {
        answer[i] = left[i] * right[i];
    }
    
    return answer;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> answer = productExceptSelf(nums);
    
    std::cout << "Product of all elements except self: ";
    for (const auto& elem : answer) {
        std::cout << elem << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}

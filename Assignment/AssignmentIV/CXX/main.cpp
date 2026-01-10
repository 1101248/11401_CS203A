#include <iostream>
#include <vector>
#include <string>
#include "hash_fn.hpp"

int main() {
    std::cout << "=== C++ Version Hash Test ===" << std::endl;
    
    std::vector<int> m_values = {10, 11, 37};
    std::vector<int> test_ints = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    std::vector<std::string> test_strs = {"cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"};
    
    for (int m : m_values) {
        std::cout << "\n[Table Size m = " << m << "]" << std::endl;
        
        std::cout << "Division:   ";
        for (int val : test_ints) {
            std::cout << hash_division(val, m) << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Mid-Square: ";
        for (int val : test_ints) {
            std::cout << hash_mid_square(val, m) << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "\n--- String Hash (ASCII Sum) ---" << std::endl;
    for (int m : m_values) {
        std::cout << "m=" << m << ": ";
        for (const auto& s : test_strs) {
            std::cout << hash_string_sum(s, m) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

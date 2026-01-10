#include "hash_fn.hpp"
#include <string>
#include <iostream>

int hash_division(int key, int table_size) {
    return key % table_size;
}

int hash_mid_square(int key, int table_size) {
    long long square = (long long)key * key;
    

    std::string s = std::to_string(square);
    

    if (s.length() <= 2) {
        return (int)(square % table_size);
    }

    std::string mid_str = s.substr(1, s.length() - 2);
    

    try {
        long long mid_val = std::stoll(mid_str);
        return (int)(mid_val % table_size);
    } catch (...) {

        return 0;
    }
}

int hash_string_sum(std::string str, int table_size) {
    int sum = 0;

    for (char c : str) {
        sum += (int)c;
    }
    return sum % table_size;
}

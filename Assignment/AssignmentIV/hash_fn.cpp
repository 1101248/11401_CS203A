#include "hash_fn.h"
#include <string>
#include <cmath>


int hash_division(int key, int m) {
    return key % m;
}


int hash_mid_square(int key, int m) {
    long long square = (long long)key * key;
    std::string s = std::to_string(square);
    

    if (s.length() <= 2) {
        return (int)(square % m);
    }
    
    // 抓中間：去掉第一個和最後一個字元
    std::string mid_str = s.substr(1, s.length() - 2);
    int mid_val = std::stoi(mid_str);
    
    return mid_val % m;
}

int hash_string_ascii(std::string key, int m) {
    int sum = 0;
    for (char c : key) {
        sum += (int)c;
    }
    return sum % m;
}

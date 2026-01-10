#include "hash_fn.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 1. Division Method
int hash_division(int key, int table_size) {
    return key % table_size;
}

// 2. Mid-Square Method 
int hash_mid_square(int key, int table_size) {
    long long square = (long long)key * key; // 用 long long 怕溢位
    char str[32];
    

    snprintf(str, sizeof(str), "%lld", square);
    int len = strlen(str);
    

    if (len <= 2) {
        return (int)(square % table_size);
    }
    

    char mid_str[32] = {0};
    

    strncpy(mid_str, str + 1, len - 2);
    mid_str[len - 2] = '\0'; // 確保結尾
    

    long long mid_val = atoll(mid_str);
    
    return (int)(mid_val % table_size);
}


int hash_string_sum(const char* str, int table_size) {
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i];
    }
    return sum % table_size;
}

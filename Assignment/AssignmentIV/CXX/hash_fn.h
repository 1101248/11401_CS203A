#ifndef HASH_FN_HPP
#define HASH_FN_HPP

#include <string>

int hash_division(int key, int table_size);
int hash_mid_square(int key, int table_size);
int hash_string_sum(std::string str, int table_size);

#endif

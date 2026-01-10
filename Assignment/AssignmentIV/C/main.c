#include <stdio.h>
#include "hash_fn.h"

int main() {
    printf("=== C Version Hash Test ===\n");
    
    int m_values[] = {10, 11, 37};
    int test_ints[] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    const char* test_strs[] = {"cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"};
    

    for (int i = 0; i < 3; i++) {
        int m = m_values[i];
        printf("\n[Table Size m = %d]\n", m);
        
        printf("Division:   ");
        for (int j = 0; j < 20; j++) {
            printf("%d ", hash_division(test_ints[j], m));
        }
        printf("\n");
        
        printf("Mid-Square: ");
        for (int j = 0; j < 20; j++) {
            printf("%d ", hash_mid_square(test_ints[j], m));
        }
        printf("\n");
    }


    printf("\n--- String Hash (ASCII Sum) ---\n");
    for (int i = 0; i < 3; i++) {
        int m = m_values[i];
        printf("m=%d: ", m);
        for (int j = 0; j < 10; j++) {
            printf("%d ", hash_string_sum(test_strs[j], m));
        }
        printf("\n");
    }

    return 0;
}

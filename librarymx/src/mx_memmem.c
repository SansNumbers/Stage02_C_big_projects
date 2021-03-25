#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char* big_ptr = big;
    const char* little_ptr = little;
    if (big_len == 0 || little_len == 0 || little_len > big_len) 
        return 0;
    while(*big_ptr) {
        if (mx_memcmp(big_ptr, little_ptr, little_len) == 0) {
            return (void*)big_ptr;
        }
        big_ptr++;
    }
    return 0;
}

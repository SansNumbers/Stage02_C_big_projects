#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned const char *arr1 = s1;
    unsigned const char *arr2 = s2;
    for (size_t i = 0; i < n; i++) {
        if(arr1[i] != arr2[i])
            return arr1[i] - arr2[i];
    }
    return 0;
}

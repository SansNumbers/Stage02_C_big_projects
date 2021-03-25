#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *restrict dst_ptr = dst;
    const char *restrict src_ptr = src;
    for (size_t i = 0; i < n; i++) {
        dst_ptr[i] = src_ptr[i];
        if(src_ptr[i] == c)
            return &dst_ptr[i + 1];
    }
    return 0;
}

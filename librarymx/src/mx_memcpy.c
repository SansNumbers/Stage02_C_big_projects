#include "../inc/libmx.h"

void *mx_memcpy (void *restrict dst, const void *restrict src, size_t n) {
    char *restrict dst_ptr = dst;
    const char *restrict src_ptr = src;
    for (size_t i = 0; i < n; i++) {
        dst_ptr[i] = src_ptr[i];
    }
    return dst;
}

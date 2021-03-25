#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned const char *s_ptr = s;
    for (size_t i = 0; i < n; i++) {
        if(s_ptr[i] == c)
            return (void*)&s_ptr[i];
    }
    return 0;
}

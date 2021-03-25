#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned const char *s_ptr = s;
    for (size_t i = n; i > 0; i--) {
         if(s_ptr[i] == c)
            return (void*)&s_ptr[i];
    }
    return 0;
}

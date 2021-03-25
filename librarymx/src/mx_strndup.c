#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int size = mx_strlen(s1);
    if (size > n) 
        size = n;
    char *result = mx_strnew(size);
    return (mx_strncpy(result, s1, size));
}

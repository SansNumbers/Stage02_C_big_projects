#include "../inc/libmx.h"

int mx_static_abs(int num) { 
    return num < 0 ? -num : num;
}

char *mx_itoa(int number) {
    if (number == 0) 
        return mx_strdup("0"); 
    int len = 0; 
    bool isNegative = number < 0; 
    for (int i = number; i > 0 || i < 0; i /= 10) 
        len++; 
    char *n = mx_strnew(len); 
    int counter = 0; 
    for (; counter < len; counter++) { 
        n[len - counter - 1] = mx_static_abs(number % 10) + '0'; number /= 10; 
    } 
    return isNegative ? mx_strjoin("-", n) : n;
}

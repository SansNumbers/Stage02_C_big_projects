#include <stdbool.h>

bool mx_isdigit(char c) {
    if ((c >= 48) && (c <= 57))
        return true;
    return false;
}

unsigned long mx_hex_to_nbr(const char *hex){
        if(hex == 0){
                return 0;
        }
        unsigned long d = 0;
        unsigned long l = 0;
        unsigned long v = 1;
        unsigned long pow = 1;
        for(unsigned long i = 0; hex[i] != '\0'; i++){
                l++;
        }
        l--;
        for(unsigned long i = 0; hex[i] != '\0'; i++){
                if ((hex[i] >= 48) && (hex[i] <= 57)){
                        v = hex[i] - 48;
                }
                else if(hex[i] >= 'a' && hex[i] <= 'f'){
                        v = hex[i] - 97 + 10;
                }
                else if(hex[i] >= 'A' && hex[i] <= 'F'){
                        v = hex[i] - 65 + 10;
                }
                for(unsigned long i = 0; i < l; i++){
                        pow *= 16;
                }
                d += v * pow;
                l--;
                pow = 1;
        }
        return d;
}


#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen(sub) == 0)
        return 0;
    int counter = 0;
    const char *tempStr = str;

    while (mx_strstr(tempStr,sub)) {
        tempStr = mx_strstr(tempStr,sub);
        for (int i = 0; i < mx_strlen(sub); i++) {
            tempStr++;
        }
        counter++;
    }
    return counter;

}

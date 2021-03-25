#include <unistd.h>

int mx_strlen(const char *s) {
 int n = 0;
 while (s[n]) ++n;
 return n;
}

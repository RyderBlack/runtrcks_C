#include "my_strdup.h"
#include <stdlib.h>


char *my_strdup(char *src) {

    int len = 0;
    while (src[len] != '\0') {
        len++;
    }

    char* dest = malloc((len + 1) * sizeof(char));
    if (dest == NULL) {
        return NULL;
    }

    for (int i = 0; i <= len; i++) {
        dest[i] = src[i];
    }

    return dest;
}

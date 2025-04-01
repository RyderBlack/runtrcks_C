#include <stdlib.h>
#include "trim.h"

static int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

char *trim(char *src) {
    char *start = src;
    while (*start != '\0' && is_space(*start)) {
        start++;
    }


    if (*start == '\0' ) {
        char *result = malloc(1);
        if (result == NULL) {
            return NULL;
        }
        result[0] = '\0';
        return result;
    }

    char *end = start;
    char *last_non_space = start;
    while (*end != '\0') {
        if (!is_space(*end)) {
            last_non_space = end;
        }
        end++;
    }

    int length = last_non_space - start + 1;

    char *result = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        result[i] = start[i];
    }
    result[length] = '\0';

    return result;
}
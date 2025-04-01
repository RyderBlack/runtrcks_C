#include "array_clone.h"
#include "../Day01/my_strlen.h"

#include <stdlib.h>
#include "array_clone.h"


char **array_clone(char **array, int n) {
    if (array == NULL || n <= 0) {
        return NULL;
    }

    int count = 0;
    while (count < n && array[count] != NULL) {
        count++;
    }

    char **clone = malloc((count + 1) * sizeof(char *));
    if (clone == NULL) {
        return NULL;
    }

    for (int i = 0; i < count; i++) {
        int len = my_strlen(array[i]);
        clone[i] = malloc((len + 1) * sizeof(char));  // +1 pour '\0'
        if (clone[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(clone[j]);
            }
            free(clone);
            return NULL;
        }
        for (int j = 0; j < len; j++) {
            clone[i][j] = array[i][j];
        }
        clone[i][len] = '\0';
    }

    clone[count] = NULL;
    return clone;
}

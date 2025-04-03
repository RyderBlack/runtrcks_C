#include "sort.h"
#include "../Day01/my_strcmp.h"
#include <stddef.h>

void my_sort(char **array) {
    if (!array) return;

    int sorted = 0;

    while (!sorted) {
        sorted = 1;
        for (int i = 0; array[i] != NULL && array[i + 1] != NULL; i++) {
            if (my_strcmp(array[i], array[i + 1]) > 0) {
                char *temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                sorted = 0;
            }
        }
    }
}
#include "my_swap.h"
#include <stddef.h>

void swap(int *a, int *b) {
    if (a != NULL && b != NULL) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
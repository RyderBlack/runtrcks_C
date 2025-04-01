#include "divide.h"

#include <stdio.h>

void my_divide(int *val) {
    if (val != NULL) {
        *val = *val / 2;
        printf("%d\n", *val);
    }

}

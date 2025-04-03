#include "func_to_array.h"
#include <stddef.h>

void func_to_array(char **strs, void (*fun)(char*)) {
    if (strs == NULL || fun == NULL) {
        return;
    }
    for (int i = 0; strs[i] != NULL; i++) {
        fun(strs[i]);
    }
}
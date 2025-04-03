//
// Created by ryrym_i6sf5hg on 4/3/2025.
//

#include "delete_str_array.h"
#include <stddef.h>
#include <stdlib.h>

void delete_str_array(char ***strs)
{
    int i;

    i = 0;
    while ((*strs)[i] != NULL)
    {
        free((*strs)[i]);
        i++;
    }
    free(*strs);
    *strs = NULL;
}

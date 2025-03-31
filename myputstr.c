#include "myputstr.h"
#include <stdio.h>
#include "unistd.h"
#include <string.h>


void my_putchar(char c) {
    write(1, &c, 1);
}

void my_putstr(char *str) {
    write(1, str, strlen(str));
}





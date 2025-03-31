#include <stdio.h>
#include "unistd.h"
#include <string.h>

void my_putchar(char c);
void my_putstr(char *str);

int main(void) {

    my_putchar('T');
    my_putchar('\n');
    my_putstr("Hello world\n");
    return 0;
}


void my_putchar(char c) {
    write(1, &c, 1);
}

void my_putstr(char *str) {
    write(1, str, strlen(str));
}
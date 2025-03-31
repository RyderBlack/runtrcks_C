#include <stdio.h>
#include "unistd.h"
#include <string.h>
#include "myputstr.h"
#include "my_strlen.h"


int main(void) {
    my_putchar('T');
    my_putchar('\n');
    my_putstr("Hello world\n");

    my_strlen("Mobius");
    return 0;
}


#include <stdio.h>

// Copy input to output
int main (int argc, char *argv[])
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("EOF character is:\n");
    putchar(c);

    return 0;
}

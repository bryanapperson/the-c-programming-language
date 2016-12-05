//
// Created by Bryan Apperson on 12/4/16.
//
#include <stdio.h>

// Copy input to output
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("EOF character is:\n");
    putchar(c);

    return 0;
}

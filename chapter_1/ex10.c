//
// Created by Bryan Apperson on 12/4/16.
//
#include <stdio.h>


int main() {
    /* Print input to output replacing each tab by \t each backspace by
     * \b and each backslash by \\.
     *
     * Note, terminals will eat a backspace. Run like this for a workaround:
     * stty -icanon -echo; ./ex1-10; stty icanon echo */
    // declare counter variables
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
    // Tell the user that they exited
    printf("You signaled exit with EOF or CTRL+D\n");
    return 0;
}


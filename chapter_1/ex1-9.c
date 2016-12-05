#include <stdio.h>

#define IN 1

#define OUT 0

int main(int argc, char *argv)
{
    /* Print input to output replacing more then one space with only 1 space */
    // declare counter variables
    int c, state;
    char blank;
    blank = ' ';
    state = IN;

    while ((c = getchar()) != EOF) {
        if (c != blank) {
            if (state == OUT) {
                putchar(blank);
            }
            state = IN;
            putchar(c);
        }
        else {
            state = OUT;
        }
    }
    // Tell the user that they exited
    printf("You signaled exit with EOF or CTRL+D\n");
    return 0;
}
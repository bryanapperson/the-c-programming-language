#include <stdio.h>

int main(int argc, char *argv)
{
    // declare counter variables
    int newline, tab, blank, c;

    // set values to 0
    newline = tab = blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank;
        }
        if (c == '\t') {
            ++tab;
        }
        if (c == '\n') {
            ++newline;
        }

        putchar(c);
    }
    printf("You entered %d newlines %d tabs %d blanks/spaces.\n", newline,
           tab, blank);
    // Tell the user that they exited
    printf("You signaled exit with EOF or CTRL+D\n");
    return 0;
}

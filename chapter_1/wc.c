/*
 * Created by Bryan Apperson on 12/4/16.
 *
 * Word count program form section 1.5.4 of K&R C for testing modified to
 * return a value to the OS.
 * */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main() {
    /* count lines, words, and characters in input */
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (c == '\n') {
                ++nl;
            }
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("Lines: %d, Words: %d, Characters %d.\n", nl, nw, nc);
    // All done.
    return 0;
}


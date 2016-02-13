/*
 * Colapse two or more blanks with a single blank
 */

#include <stdio.h>
#include <stdlib.h>

#define IN  1 /* inside a set of blanks */
#define OUT 0 /* outside a set of blanks */

int main () {

    int c;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != (int)' ')
            state = OUT;
        else if (state != IN)
            state = IN;
        else
            continue;
        (void)putchar(c);
    }

    exit(EXIT_SUCCESS);
}

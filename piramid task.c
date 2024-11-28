#include <stdio.h>

void main() {
    int a, b, c = 3;
    for(a = 0; a < c; a++) {
        for(b = 0; b < a; b++) {
            printf("  ");
        }
        for(b = 0; b < c - a; b++) {
            printf("* ");
        }
        printf("\n");
    }

}


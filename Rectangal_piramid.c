#include <stdio.h>

int main() {
    int a,b;
    for (int a =1; a<=5; a++) {
        for (int b=1; b<=6; b++) {
            if (a == 1 || a == 5 || b == 1 || b ==5) {
                printf("*  ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
    return 0;
}

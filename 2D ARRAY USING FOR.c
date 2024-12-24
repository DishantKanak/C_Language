#include<stdio.h>

void main() {
    int d,k, arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

        {
            for(int d=0; d<3; d++){
                for(int k=0; k<3; k++){
                    printf("%d\t",arr[d][k]);
                }
                 printf("\n");
            }

        }

}


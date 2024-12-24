#include<stdio.h>
void main()
{
    int arr[5]={10,20,30,40,50};
    int sum=0;

    for(int i=0; i<=4; i++){
        sum += arr[i];
    }
    printf("%d",sum);
}

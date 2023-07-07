#include<stdio.h>

int main() {
    int i=1,factorial=1;

    int n=7;

    while(i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("factorial of n is=%d \n",factorial);
    return 0;
}
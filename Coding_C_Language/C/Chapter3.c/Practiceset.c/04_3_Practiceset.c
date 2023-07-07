#include<stdio.h>

int main() {
    int sum=0;
    int i;
    for(i=1;i<=10;i++)
    {
        sum+=i;
    }
    printf("sum of natural numbers(1-10)=%d",sum);

    return 0;
}
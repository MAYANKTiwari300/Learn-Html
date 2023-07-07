#include<stdio.h>

int main() {
    
    int i,sum=0;

    for(i=1;i<=10;i++)
    {
        sum+=2*i;
    }
    printf("sum of multiplication table of 2 is=%d\n",sum);

    return 0;
}
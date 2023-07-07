#include<stdio.h>
int main() {
    int i,n;
    printf("Enter the number \n");
    scanf("%d",& n);
    for(i=n;i>=0;i--)
    {
        printf("Naturals number in reverse order is=%d \n",i);
    }
    return 0;
}
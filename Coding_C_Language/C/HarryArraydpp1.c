#include<stdio.h>
int main() {
    int arr[10];
    //input
    int *ptr=&arr[0];
    for (int i = 0; i <10; i++)
    {
        printf(" %d index is:",i);
        scanf("%d",(ptr+i));
    }

     printf(" the value of ptr+2 is %d",*(ptr+2));
    return 0;
}
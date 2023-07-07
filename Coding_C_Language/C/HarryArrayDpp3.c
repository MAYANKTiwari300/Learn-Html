#include<stdio.h>
int main() {
    int mul[10];
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for (int i = 0; i<10; i++)
    {
       mul[i]=n*(i+1);
    }
    
    //output
    
     for (int i = 0; i<10; i++)
    {
       printf("%d*%d=%d \n",n,i+1,mul[i]);
    }

    return 0;
}
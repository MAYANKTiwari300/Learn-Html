#include<stdio.h>
// void wrong_swap(int a,int b);
void swap(int *a,int *b);

int main() {
    int x=3,y=30;
    printf("The value of x and y before swap is %d and %d \n",x,y);
    swap(&x,&y);
    printf("The value of a and b after swap is %d and %d \n",x,y); 
    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
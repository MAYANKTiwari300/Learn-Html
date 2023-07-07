#include<stdio.h>
int main() {
    int i=9;
    *(&i)=10*i;
    printf("%d \n",i);
    return 0;
}
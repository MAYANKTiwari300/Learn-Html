#include<stdio.h>
int main() {
int mul[10];
//input
for(int i=0;i<10;i++){
    mul[i]=5*(i+1);
}
//output
for(int i=0;i<10;i++){
    printf("5*%d=%d \n",i+1,mul[i]);
}
    return 0;
}
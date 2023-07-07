#include <stdio.h>
int main() {

    //Using ternary operator
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);

    (a<b)? printf("a is less /n"):printf("b is less /n");
    return 0;
}
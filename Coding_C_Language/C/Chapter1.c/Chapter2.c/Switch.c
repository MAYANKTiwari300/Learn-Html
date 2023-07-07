#include <stdio.h>
int main() {
    int age;
    printf(" enter age(1-7):");
    scanf("%d", &age);
    switch(age){
        case 1:printf("age is 1");
        break;
        case 2:printf("age is 2");
        break;
        case 3:printf("age is 3");
        break;
        case 4:printf("age is 4 bche ko school bhejo");
        break;
         case 5:printf("age is 5");
        break;
         case 6:printf("age is 6");
        break;
         case 7:printf("age is 7");
        break;
        default: printf("bhar mai jao");
    }
}
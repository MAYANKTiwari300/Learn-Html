#include<stdio.h>

void namaste();

void bonjour();

int main() {
  namaste();
    return 0;
}

void namaste()
{
    printf("namaste\n");
    bonjour();
}

void bonjour()
{
    printf("bonjour\n");
}
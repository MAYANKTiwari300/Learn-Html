#include<stdio.h>

int Factorial(int n);

int main() {
    printf("Factorial of n:%d",Factorial(6));
}
int Factorial(int n) {
    if(n==0) {
        return 1;
    }
    int FactorialNm1=Factorial(n-1);
    int Factorialn=FactorialNm1*n;
    return Factorialn;
}
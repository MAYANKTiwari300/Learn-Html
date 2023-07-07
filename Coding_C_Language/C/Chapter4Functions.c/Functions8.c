#include<stdio.h>
float convertTemp(float celsius);

int main() {
    printf("Temp in farenheit=%f\n",convertTemp(0));
    return 0;
}

float convertTemp(float celsius) {

    float far=celsius*9.0/5.0+32;

    return far;
}
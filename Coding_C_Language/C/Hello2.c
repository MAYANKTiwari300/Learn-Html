#include<stdio.h>
int checkPrime(int N){
    if(N<2){
        return 0;
    }
    else{
    for(int i=2;i<N/2;i++){
        if(N%i==0){
            return 0;
        }
    }
}
return 1;
}
int main() {
for( int i=0;i<=100;i++){
    if(checkPrime(i)){
        printf("%d",i);
    }
}
return 0;
}
#include<stdio.h>
//Function definition and declaration

int reverse(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
    }
}

//function calling
int main() {

int arr[]={1,2,3,4,5,6,7,8,9};

for (int i =0; i<9; i++)
{
    printf("The value of %d element is:%d\n ",i+1,arr[i]);
}

    
      
reverse(arr,9);

for (int i = 0; i<9; i++)
{
    printf("the value of %d element:%d \n",i+1,arr[i]);
}
return 0;
}
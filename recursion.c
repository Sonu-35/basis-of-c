//program to print sum of n natural numbers
#include<stdio.h>

int sum(int n);

int main(){
    // printf("Enter the number:");
    // scanf("%d\n", &n);
    printf("sum is: %d", sum(20));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum till n-1
    int sumN = sumNm1 + n;
    return sumN;
}
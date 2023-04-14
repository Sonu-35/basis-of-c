//pointer to pointer: a variable that stores the memory address of another pointer
#include<stdio.h>

int main(){
    float price = 1100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f \n", price);
    printf("%f \n", *ptr);
    printf("%f \n", **pptr);
}
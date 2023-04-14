//code to identify the inputted number is odd/even, postive/neagtive, sq & sqrt using swtich cases
#include<stdio.h>
int main(){
    
    int num;
    printf("Enter a number to identify wheter a number is odd or even \n");
    scanf("%d", &num);

    switch(num % 2){
        case 1:
        printf("The number is even \n");
        break;

        case 2:
        printf("The number is odd \n");
        break;
    }
    return 0;


   
}
//program to sum the digit of enitre digtis
#include<stdio.h>
int main(){
    int num, sum =0;

    num=45561;
    printf("The number is = %d\n ", num);
    
    while(num!=0){
        sum += num % 10;
        num = num /10;
    
    }

    printf("Sum: %d\n", sum);

    return 0;

}
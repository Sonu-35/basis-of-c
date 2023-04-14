//print the numbers from 100-200 which is divisible by 5
#include<stdio.h>
int main()
{
    int i;
    printf("the numbers which are divisible by 5 in btw 100-200 are: ");
    for(i=100; i<=200; i++)
    {
        if(i%5 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}

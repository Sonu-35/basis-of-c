//program to print the first digit of the number
#include<stdio.h>

int main(){
    int i, first;
    printf("Enter Number: ");
    scanf("%d", &i);

   first = i;
   while(first>=10);
   {
    first = first % 10;

   }
   printf("first digit= %d", first);
   return 0;
}
//take two 1-D array from user and as a rslt return addition of these two array
#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    int a[10],b[10], sum[10];
    printf("Enter first array: ");
    
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    
   
   printf("Enter the second array:");

   for(i=0; i<10; i++)
      scanf("%d", &b[i]);

  for(i=0; i<10; i++)
  scanf("%d", &sum[i]);

  printf("Sum of the array:");

  for(i=0; i<10; i++)
   printf("%d", sum[i]);

  getch();
}
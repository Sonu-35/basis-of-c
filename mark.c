//code to find the grade of a student on the basis of marks inputted
#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks \n");
    scanf("%d", &marks);

    if(marks > 90 && marks <= 100){
        printf("A+ grade \n");
        }
        else if(marks > 80 && marks <= 90){
            printf("A grade \n");
            }
            else if(marks > 70 && marks <= 80){
                printf("B grade \n");
                }
                else if(marks > 60 && marks <= 50){
                    printf("C grade \n");
                }
                else{
                    printf("D grade \n");
                }
                return 0;
                
}
    
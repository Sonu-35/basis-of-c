 //a year is a leap year or not??
 #include<stdio.h> 
  int main()
  {
        int year;
        printf("Enter a year: \n");
        scanf("%d", &year);

        if(year%100==0){
            printf("This year is century year \n");
             if(year%400==0){
                printf("This century year is a leap year \n");
            }
            else{
                printf("This century is not a leap year \n");
            }
        }
        else{
            printf("This is a nrml year \n");
        }
        

        return 0;
  }





  

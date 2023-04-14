//code to find the roots of Quadratic Equations

#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, r1, r2, d;
    printf("Enter the values of a, b, c");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;

    if(d>0){
        r1 = -b + sqrt (d) / (2*a);
        r2 = -b - sqrt (d) / (2*b);
        printf("REAL ROOTS = %f %f %f, r1, r2"); 
    }
    else if(d == 0){// = assign,== equality
        r1 = -b + sqrt (d) / (2*a);
        r2 = -b - sqrt (d) / (2*b);
        printf("EQUAL ROOTS = %f %f %f, r1, r2");
    }
    else{
        printf("IMAGINARY ROOTS \n");
    }
    return 0;
}

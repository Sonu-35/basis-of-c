//program to cal area of square, rectangle and circle 
#include <stdio.h>

float AreaSquare(float side);
float AreaRectangle(float length, float breath);
float AreaCircle(float radius);

int main(){
    float side;
    printf("Enter the side of Square: ");
    scanf("%f", &side);

    float length;
    printf("enter the lenght of the rectangle: ");
    scanf("%f", &length);

    float breath;
    printf("enter the breath of Rectangle: ");
    scanf("%f", &breath);

    float radius;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);

    float a1 = AreaSquare(side);
    printf("area of the square is: %f\n", a1);

    float a2 = AreaRectangle(length, breath);
    printf("area of the rectangle is: %f\n", a2);

    float a3 = AreaCircle(radius);
    printf("area of the circle is: %f\n", a3);

    return 0;

}

float AreaSquare(float side){
    return side * side;
}

float AreaRectangle(float length, float breath){
    return length * breath;
}

float AreaCircle(float radius){
    return 3.14 * radius * radius;
}
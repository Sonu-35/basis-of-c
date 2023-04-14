//about printing the address in pointer: a varible that stores the memory addrress of another variable
#include<stdio.h>

// int main(){
//     int age = 22;
//     int *ptr = &age;
    
//     //printing the address
//     // printf("%p \n", &age);

//     //for unsingned int address
//     printf("%u \n", &age);

//     //for pointer address
//     // printf("%p \n", ptr);
//     printf("%u \n", ptr);

//     // printf("%p \n", &ptr);
//     printf("%u \n", &ptr);

//     return 0;
// }

int main(){
    // int age = 22;
    // int *ptr = &age;

    // printf("%d \n", age);
    // printf("%d \n", *ptr);
    // printf("%d \n", *(&age));

    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; //*ptr is add of x i.e. x = 0

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5; // x = 5
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;// x = 6
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
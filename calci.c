#include<stdio.h>

/*
 Add 
 Sub
 Mul 
 Div

 Operations

 Functions

 Macros

 call

 menu driven program

    Input First Number:

    Select Operation:
    1. Add
    2. Sub
    3. Mul
    4. Div

    ...

 loops

*/


int main()
{
    int sum, num1, num2;

    printf("Input First Number: \n");
    scanf("%d", &num1);
    printf("Input Second Number: \n");
    scanf("%d", &num2);


    printf("First Num = %d, Second Num = %d \n",num1, num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);
    return 0;
}
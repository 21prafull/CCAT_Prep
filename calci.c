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
//{
   // int one, two, sub;

   // printf("enter First Number: \n");
   // scanf("%d", &one);
    //printf("enter Second Number: \n");
    //scanf("%d", &two);


   // printf("First Num = %d, Second Num = %d \n",one, two);

   // sub = one - two;

   // printf("sub = %d", sub);
   // return 0;
//}
{
    int mul, num1, num2;
    printf("enter first number: \n");
    scanf("%d",&num1);
    printf("enter second number:\n");
    scanf("%d",&num2);
    printf("first num = %d, Second num =  %d \n",num1,num2);
    mul = num1 * num2;
    printf("mul=%d",mul);
    return 0;
}


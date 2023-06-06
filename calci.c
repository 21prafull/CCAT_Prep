#include<stdio.h>
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
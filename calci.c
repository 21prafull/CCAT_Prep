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


#define add(a, b) (a + b) 
#define sub(a, b) (a - b) 
#define mul(a, b) (a * b) 
#define div(a, b) (a / b) 

#define PI 3.1415

// float add(float a, float b){
//     return a+b;
// }

// float sub(float a, float b){
//     return a-b;
// }

// float mul(float a, float b){
//     return a*b;
// }

// float div(float a, float b){
//     return a/b;
// }

float areaOfCircle(float r){
    return PI*r*r;
}

int main(){

    float pi = 3.1415;

    float a = 2 * pi;

    float ans, num1, num2;
    int choice = 0;
    
    printf("enter first number: \n");
    scanf("%f",&num1);
    
    printf("enter second number:\n");
    scanf("%f",&num2);
    
    printf("first num = %.2f, Second num =  %.2f \n",num1,num2);

    printf("Select Operation: \n");
    printf(" 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n");

    scanf("%d",&choice);

    switch (choice){
        case 1:
            ans = add(num1, num2);
            break;
        
        case 2:
            ans = sub(num1, num2);
            break;
        
        case 3:
            ans = mul(num1, num2);
            break;

        case 4:
            ans = div(num1, num2);
            break;
        
        default:
            printf("Select Correct Option.");
            break;
        }

    printf("answer = %.2f \n",ans);


    while(1){

        printf("Add next operation?:");

        printf("Select Operation: \n");
        printf(" 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n 5. Exit \n");

        scanf("%d",&choice);

        if(choice == 5){
            break;
        }

        float num3 = 0;

        printf("enter next number:\n");
        scanf("%f",&num3);
        
        switch (choice){
        case 1:
            ans = add(ans, num3);
            break;
        
        case 2:
            ans = sub(ans, num3);
            break;
        
        case 3:
            ans = mul(ans, num3);
            break;

        case 4:
            ans = div(ans, num3);
            break;
        
        default:
            printf("Select Correct Option.\n");
            break;
        }

        printf("answer = %.2f \n ",ans);
        
    }
    
    return 0;
}


// Area of shapes:
// Select Shape:
//      1. Circle
//      2. Square
//      3. Rectangle
//      4. Triangle
//              Input values
//                  1. -> radius
//                  2. -> side
//                  3. -> length, breadth
//                  4. -> base, height
//                      Output Area is ____


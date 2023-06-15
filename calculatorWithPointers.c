#include<stdio.h>

void printLine(){
    printf("-------------------------------------");
}

void add(float* a, float* b, float* ans){ // Three Inputs
    *ans = *a + *b;  // Change Values at the memory address
    // No Return;
}

void sub(float* a, float* b, float* ans){
    *ans = *a - *b;
}

float mul(float a, float b){
    return a*b;
}

float div(float a, float b){
    return a/b;
}


int main(){

    float ans, num1, num2;
    int choice = 0;
    
    printf("enter first number: \n");
    scanf("%f",&num1);
    
    printf("enter second number:\n");
    scanf("%f",&num2);
    
    printf("first num = %.2f, Second num =  %.2f \n",num1,num2);

    printLine();

    printf("Select Operation: \n");
    printf(" 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n");

    scanf("%d",&choice);

    switch (choice){
        case 1:
            add(&num1, &num2, &ans);
            break;
        
        case 2:
            sub(&num1, &num2, &ans);
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
    
    return 0;
}


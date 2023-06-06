#include <stdio.h>

float floatSum (float a, float b){ 
    return a+b;
}


int main(){

    
    float f;

    printf("Input a float: \n");
    scanf("%f", &f);

    float f2 = 5.5; 

    float sum = floatSum(f, f2);

    printf("Input: %f", sum);
    
    //printf("Hello World!");
    return 0;
}





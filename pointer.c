#include <stdio.h>


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// float f;
// float* fptr = &f;

// int i;
// int* iptr = &i;

void addWithPointer(int* a, int* b, int* ans){
    // value at address of ans = value at address of a + value at address of b
}

int main(){

    int a = 10;
    int b = 20;

    printf("a = %d, b = %d \n", a,b);

    //swap a and b
    swap(&a, &b);
    printf("Swapping \n");

    printf("a = %d, b = %d \n", a,b);

    //printf("Hello World!");

    return 0;
}





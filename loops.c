#include <stdio.h>


int main(){

    int num;

    printf("Input a number: \n");
    scanf("%d", &num);
    int j = 0;

    for(int i = 1; j++; i++){
        printf("%d * %d = %d \n", num, i, num*i);
        if(j>10){
            j = 0;
        }
    }
    

    return 0;
}





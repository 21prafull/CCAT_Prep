#include<stdio.h>


float areaofcircle(float radius){
    return 3.14*radius*radius;
}

float areaofsquare(float side){
    return side*side;
}
float areaofrectangle(float length, float breadth){
    return length*breadth;
}
float areaoftraingle(float base, float height){
    return 0.5*base*height;
}



int main(){

float ans,num1,num2;

int choice=0;

printf("Select shape:\n");
printf("1.Circle\n 2.Square\n 3.Rectangle\n 4.Triangle\n ");

scanf("%d",&choice);
    switch(choice){
        case 1: 
            printf("enter radius:\n");
            scanf("%f", &num1);
            ans = areaofcircle(num1);
            break;
        
        case 2:
            printf("enter side:\n");
            scanf("%f", &num1);
            ans = areaofsquare(num1);
            break;

        case 3:
            printf("enter length:\n");
            scanf("%f", &num1);

            printf("enter breadth:\n");
            scanf("%f",&num2);
            ans = areaofrectangle(num1,num2);
            break;
        case 4:
            printf("enter base:\n");
            scanf("%f", &num1);

            printf("enter height:\n");
            scanf("%f",&num2);
            ans = areaoftraingle(num1,num2);
            break;
        default:
            printf("select correct option.");
            break; 
    }
        printf("Area of selected shape = %.2f\n",ans);

return 0;
}

#include<stdio.h>

float areaofcircle(float r){
    return 3.14*radius*radius;
}

float areaofsquare(float s){
    return side*side;
}
float areaofrectangle(float lb){
    return length*breadth;
}
float areaoftraingle(float bh){
    return base*height;
}
int main()
{

float pi=3.1415

float ans,num1,num2;

int choice=0;

printf("enter first number:\n");
scanf("%f,&num1");

 printf("enter second number:\n");
 scanf("%f",&num2);
  
  printf("first num = %.2f,second num = %.2f",num1,num2);
   
   printf("select shapes:\n");
   printf("1.Circle\n 2.Square\n 3.Rectangle\n 4.Triangle\n ");
   scanf("%d",&choice);

   switch(choice){
    case 1: 
           ans = circle(num1,num2);
           break;
    case 2:
           ans = square(num1,num2);
           break;

    case 3:
            ans = rectangle(num1,num2);
            break;
    case 4:
            ans = triangle(num1,num2);
            break;
    default:
            printf("select correct option.");
            break;
         
     }
      printf("answer = %.2f\n",ans);
       
       while(1){
        printf("add next operation/:");
        printf("1.Circle\n 2.Square\n 3.Rectangle\n 4.Triangle\n 5.Exit\n");
        scanf("%d",&choice);
        if(choice==5){
            break;

        }
        float num3 = 0;
        printf("enter next number:\n");
        scanf("%f", &num3);
        switch(choice){
            case 1:
             ans = Circle(ans,num3);
             break;
            case 2:
             ans = square(ans,num3);
             break;
            case 3:
             ans = Rectangle(ans,num3);
             break;
             case 4:
             ans = Triangle(ans,num3);
             break;
             default;
             printf("select correct option.\n");
             break;
        
        }
        printf("answer = %.2f\n", ans);
       }
       return 0;
       }

#include<stdio.h>
void main()
{
 int a,b;
 int op,x;
 printf("1-Add,2-Substract,3-Multiplication,4-Division");
 printf("Enter values");
 scanf("%d%d",&a,&b);
 printf("Enter choice");
 scanf("%d",&op);
 switch(op)
 {
     case 1:
     x=a+b;
     printf("Sum is %d",x);
     break;
     case 2:
     x=a-b;

     printf("Difference is %d",x);
     break;
     case 3:
     x=a*b;
     printf("Product is %d",x);
     break;
     case 4:
     x=a/b;
     printf("Division is %d",x);
     break;
     default:
     printf("Enter correct choice");
     break;
 }


 }

 
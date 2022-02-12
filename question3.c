#include<stdio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int b=a%2;
    switch(b)
    {
        case 0:
        printf("number is even");
        break;
        case 1:
        printf("number is odd");
        default:
        printf("invalid number");
    }

}
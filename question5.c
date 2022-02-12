#include<stdio.h>
void main()
{
    float r;
    printf("Enter radius");
    scanf("%f",&r);
    float d,c,a;
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("%f is Diameter",d);
    printf("%f is circumference",c);
    printf("%f is area",a);
}
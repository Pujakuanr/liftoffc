#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
    int num1,num2;
    printf("enter two positive integer: ");
    scanf("%d %d",&num1,&num2);
    printf("G.C.D of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}
int gcd(int num1,int num2)
{
    if(num2!=0)
    return gcd(num2,num1%num2);
    else
    return num1;
}
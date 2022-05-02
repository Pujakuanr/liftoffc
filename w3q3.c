#include<stdio.h>
int eveodd(int num)
{
    return !(num&1);
}
int main()
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);
    if(eveodd(num))
    {
        printf("It is an even number");
    }
    else{
        printf("It  is an odd number");
    }
    return 0;
}
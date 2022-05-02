#include<stdio.h>
int main()
{
    int num,check;
    printf("enter a number: ");
    scanf("%d",&num);
    check=pn(num,num/2);
    if(check==1)
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
    return 0;
}
int pn(int num,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(num%i==0)
        {
            return 0;
        }
        else
        {
            return pn(num,i-1);
        }
    }
}
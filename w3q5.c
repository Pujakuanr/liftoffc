#include<stdio.h>
int main()
{
    int arr[]={67,98,22,84,36,18};
    int length=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<length;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
printf("largest element:%d\n",max);
return 0;
}
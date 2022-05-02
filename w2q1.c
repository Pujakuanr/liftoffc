#include<stdio.h>
int main()
{
    

char a[200],b[100],c[200],d[400];
int i,j=0,k;

printf("Enter the first string:\n");
scanf("%s", a);


printf("enter the second string:\n");
scanf("%s", b);


printf("The name is:\n");

printf("%s\n", strcat(a ,b));

k=strlen(strcat(a,c));


for(i=k-1; i>= 0; i--)
{
d[j++] = strcat(a,c)[i];

}


printf("The reversed number is=%s\n",d);
return 0;

}

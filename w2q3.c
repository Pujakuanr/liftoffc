#include <stdio.h>
#include <math.h>
int main()
{
    int n,firstDigit, lastDigit,digits, swappedNum;
    printf("Enter number = ");
    scanf("%d", &n);
    lastDigit = n % 10;
    digits    = (int)log10(n);
    firstDigit = (int) (n / pow(10, digits));
    swappedNum  = lastDigit;
    swappedNum =swappedNum * (int) round(pow(10, digits));
    swappedNum = swappedNum + n % ((int)round(pow(10, digits)));
    swappedNum =swappedNum - lastDigit;
    swappedNum = swappedNum + firstDigit;
    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}
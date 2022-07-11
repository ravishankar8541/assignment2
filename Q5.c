//Write a program to input a three-digit number and display the sum of the digits.
#include"stdio.h"
int main()
{
    int number,n1,n2,n3,sum;
    printf("Enter three digit of number :");
    scanf("%d",&number);
    n1=number%10;
    number=number/10;
    n2=number%10;
    number=number/10;
    n3=number%10;
    number=number%10;
    sum=n1+n2+n3;
    printf("%d",sum);
    return 0;
}
//Write a program to swap values of two int variables
#include"stdio.h"
int main()
{
    int a=5,b=7;
    printf("Before swap value of a is %d",a);
    printf("\nBefore swap value of b is %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap value of a is %d",a);
    printf("\nAfter swap value of b is %d",b);
    return 0;
}
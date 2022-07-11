//Write a program to check whether the given number is even or odd using a bitwise
//operator.
#include"stdio.h"
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num & 1 ==1)
        printf("Odd");
    else
    printf("Even");
    
    return 0;
}
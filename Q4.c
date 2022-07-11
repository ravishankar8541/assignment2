
#include"stdio.h"
int main()
{
    
    int a=8,b=7,temp=0;
    printf("Before swap value of a is %d",a);
    printf("\nBefore swap value of b is %d",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap value of a is %d",a);
    printf("\nAfter swap value of b is %d",b);
    return 0;
}
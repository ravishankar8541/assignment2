//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include"stdio.h"
int main()
{
    int n,temp,r;
    printf("Enter three-digit number :");
    scanf("%d",&n);
    temp=n/10;
    r=n%10;
    n=r*100+temp;
    printf("%d",n);
    return 0;
}

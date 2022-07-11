//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include"stdio.h"
int main()
{int d1,d2,d3,n;
int r1,r2,r3,sum;
printf("Enter a number :");
scanf("%d",&n);
d1=((n/1)%10);
r1=d1*100;
d2=((n/10)%10);
r2=d2*10;
d3=((n/100)%10);
r3=d3*1;
sum=r1+r2+r3;
printf("%d",sum);
    return 0;
}
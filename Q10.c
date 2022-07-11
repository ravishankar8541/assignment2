//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include"stdio.h"
int main()
{
    int num=2345;
    int n1,n2,n3,n4,n0=0;
    long int sum;
    n1=((num/1)%10*1);
    n2=((num/10)%10*10);
    n3=((num/100)%10*100);
    n4=((num/1000)%10*1000);
sum=(n0+n2+n3+n4);
printf("%d",sum);
    return 0;
}
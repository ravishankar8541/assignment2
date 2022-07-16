/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/
#include"stdio.h"
int main()
{
    int num,d;
    int d1,d2,d3;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Input a digit :");
    scanf("%d",&d);
    d1=(num/1)%10*10;
    d2=(num/10)%10*100;
    d3=(num/100)%10*1000;
    printf("%d",d+d1+d2+d3);

    return 0;
}
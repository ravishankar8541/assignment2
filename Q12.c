//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
#include"stdio.h"
int main()
{
    int amount;
    float convert;
    printf("\nEnter amount in INR: ");
    scanf("%d",&amount);
convert=amount/76.23;
printf("%d INR = %f USD ",amount,convert);
return 0;
}
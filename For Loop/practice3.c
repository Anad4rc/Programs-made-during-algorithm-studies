#include<stdio.h>

//Number of numbers between 0 and 10//
// sum of the odd numbers between 0 and 10 entered by the user //

int main(void)
{

int i,value,tot010=0,sumOdd=0;

for(i = 1;i <= 6;i++)
{
    printf("Enter a value: ");
    scanf("%d",&value);

if (value >= 0 && value <= 10)
{
    tot010 = tot010 + 1; //totaling values
if (value % 2 == 1)
{
    sumOdd = sumOdd + sumOdd; //adding values
}

}
}

printf("In total there were %d numbers between 0 and 10.",tot010);
printf("------------------------------------------------------\n");
printf("In this range, the sum of the odd numbers is: %d",sumOdd);
    return 0;
}
#include<stdio.h>
#include<math.h>
/*

The Body Mass Index (BMI) is a calculated value based on height and
a person's weight. According to the BMI value, we can classify the
individual within certain ranges.
 - below 18.5: Underweight
 - between 18.5 and 25: Ideal weight
 - between 25 and 30: Overweight
 - between 30 and 40: Obesity
 - over 40: morbid obesity
Note: BMI is calculated by the expression weight/height² (weight divided by the square
height)

*/

int main(void)
{

float height,weight,imc;

printf("Enter your height in meters: ");
scanf("%f",&height);
printf("Enter your weight in Kg: ");
scanf("%f",&weight);

imc = weight / pow(height,2);

printf("Your IMC is: %.2f\n", imc);

if (imc < 18.5)
printf("Under weight!!");

else if (imc >= 18.5 && imc < 25)
printf("Ideal weight! Congrats"); 

else if (imc >= 25 && imc < 30)
printf("Overweight!!");

else if (imc >= 30 && imc < 40)
printf("Obesity");

else 
printf("Morbid obesity");

    return 0;
}

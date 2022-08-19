#include<stdio.h>
#include<math.h>
/*

34) The Body Mass Index is a calculated value based on height and
a person's weight. According to the BMI value, we can classify the
individual within certain ranges.
 - below 18.5: Underweight
 - between 18.5 and 25: Ideal weight
 - between 25 and 30: Overweight
 - between 30 and 40: Obesity
 - over 40: morbid obesity

Note: BMI is calculated by the expressionBMI = current weight (kg)/height² (m) (weight divided by the square
height)

*/

int main(void)
{

float height,weight,bmi;

printf("Enter your height in meters: ");
scanf("%f",&height);
printf("Enter your weight in Kg: ");
scanf("%f",&weight);

bmi = weight / pow(height,2);

printf("Your BMI is: %.2f\n", bmi);

if (bmi < 18.5)
printf("Under weight!!");

else if (bmi >= 18.5 && bmi < 25)
printf("Ideal weight! Congrats"); 

else if (bmi >= 25 && bmi < 30)
printf("Overweight!!");

else if (bmi >= 30 && bmi < 40)
printf("Obesity");

else 
printf("Morbid obesity");

    return 0;
}
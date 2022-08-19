#include<stdio.h>
#include<math.h>
/*

34) O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no 
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o 
indivíduo dentro de certas faixas.
 - abaixo de 18.5: Abaixo do peso
 - entre 18.5 e 25: Peso ideal
 - entre 25 e 30: Sobrepeso
 - entre 30 e 40: Obesidade
 - acima de 40: Obseidade mórbida
Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado 
da altura)

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
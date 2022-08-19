/*

63) Crie um programa usando a estrutura “faça enquanto” que leia vários números. 
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na 
tela:
a) O somatório entre todos os valores
b) Qual foi o menor valor digitado
c) A média entre todos os valores
d) Quantos valores são pares

*/

#include <stdio.h>

int main ()
{

int num,par,menor,sum,totNum;
char opc;
float media;

do {
printf("Digite um numero: ");
scanf("%d",&num);

printf("continuar? [S/N] ");
scanf(" %c",&opc);

sum = sum + num; //somatorio


if (num < menor)//descobre qual o menor numero
menor = num;

totNum = totNum + 1; //descobre o total de numero digitados
media = sum / totNum;

if(num%2 == 0)
par = par + 1;


} while(opc == 'S' || opc == 's');

printf("a) O somatorio entre todos os valores: %d\n",sum);
printf("b) Qual foi o menor valor digitado %d\n ",menor);
printf("c) A media entre todos os valores: %.2f\n",media);
printf("d) Quantos valores sao pares: %d\n", par);

    return 0;
}
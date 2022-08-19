/*

62) Faça um programa usando a estrutura “faça enquanto” que leia a idade de 
várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou 
não continuar a digitar dados. No final, quando o usuário decidir parar, mostre 
na tela:
a) Quantas idades foram digitadas
b) Qual é a média entre as idades digitadas
c) Quantas pessoas tem 21 anos ou mais.

*/

#include <stdio.h>

int main()
{

int edge,totEdge=0,edge21=0,sum=0;
char answer;
float medEdge;
  
do {
   printf("Idade: ");
   scanf("%d",&edge);

   printf("Continuar? [S/N] ");
   scanf(" %c", &answer);

  totEdge = totEdge + 1;

  sum = sum + edge;
  medEdge = sum / totEdge;

  if (edge >= 21)
    edge21 = edge21 + 1;
  
  
} while (answer == 'S' || answer == 's');

  printf("a) Quantas idades foram digitadas? %d\n",totEdge);
  printf("b) Qual eh a media entre as idades digitadas? %.2f\n",medEdge);
  printf("c) Quantas pessoas tem 21 anos ou mais? %d\n ",edge21);
  

  return 0;
  }
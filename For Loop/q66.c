#include <stdio.h>
/*

Write a program that reads any number
and show the times table of that number, using the “for” structure.
// ex:
the user types 5
5 x 0 = 0
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15

*/

int main(void) {

  int i,num;

  printf("Enter a number from 1 to 10: ");
  scanf("%d",&num);

  for(i = 0;i<= 10;i++)
    {
      printf("%d x %d = %d\n",num,i,(num * i));
    }

  return 0;
}
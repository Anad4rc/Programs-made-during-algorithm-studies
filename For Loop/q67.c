#include <stdio.h>
/*

Write a program using the “for” structure that reads an integer
positive and display a count from 0 to the entered value on the screen:
Ex: Enter a value: 9
Count: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, END!

*/

int main(void) {

int value,i;

  printf("Enter a value: ");
  scanf("%d",&value);

  for(i = 0;i<= value;i++)
    {
      printf("%d, ",i);
    }

  return 0;
}
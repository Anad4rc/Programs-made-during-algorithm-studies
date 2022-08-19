#include<stdio.h>

/*

[CHALLENGE] Make a program that displays the first 10 elements of the 
Fibonacci sequence:
1 1 2 3 5 8 13 21...

*/

int main()
{

int i, a1, a2, a3;

a1 = 0;
a2 = 1;

   printf("%d..",a1);
   printf("%d..",a2);

  for (i = 3; i <= 10;i++)
  {
        a3 = a1 + a2;
        printf("%d..",a3);
        a1 = a2;
        a2 = a3;
  }

    return 0;
}



   
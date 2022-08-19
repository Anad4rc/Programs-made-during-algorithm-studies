#include <stdio.h>
/*

Develop a program using the “for” structure that displays the
following count:
0 5 10 15 20 25 30 35 40 It's over!

*/

int main(void) {

int i;

  for(i = 0;i <= 40;i += 5)
    {
      printf("%d..",i);
    }
  
  printf("It's over!!\n");
  return 0;
}
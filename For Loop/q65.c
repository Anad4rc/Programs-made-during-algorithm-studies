#include <stdio.h>

/*

Develop a program using the “for” structure that displays the
following count:
100 90 80 70 60 50 40 30 20 10 0 It's over

*/

int main(void) {

int i;

for(i = 100;i >= 0;i -= 10)
  {
    printf("%d..",i);
  }


  printf("It's over!!\n");
  
  return 0;
}
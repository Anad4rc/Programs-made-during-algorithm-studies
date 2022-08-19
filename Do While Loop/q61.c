/*

Create a program that displays the following count on the screen,
using the “do while” structure
0 3 6 9 12 15 18 21 24 27 30 It's over!

*/

#include <stdio.h>

int main(void){

int count = 0;

do {

  printf("%d ..",count);
  count = count + 3;
  
} while(count <= 30);

printf("It's over!!");

    return 0;
}
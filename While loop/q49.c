#include <stdio.h>
/*


Create a program that reads 6 integers and
at the end show how many of them are even and how many are odd.

*/

int main(void) {

  int count = 1;
  int value;
  int even = 0,odd = 0;
  

  
  while (count <= 6)
    {
      printf("Enter the %d value:  ",count);
      scanf("%d",&value);
      count++;
      
if (value % 2 == 0)
 even = even + 1;

      else
  odd = odd + 1;
    }

  printf("\n");
  printf("Odd: %d\n",even);
  printf("Even: %d\n",odd);

  return 0;
}
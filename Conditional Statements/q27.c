#include <stdio.h>

/*
27) Create a program that reads two student grades and calculates their
average, showing a message at the end, according to the average reached:
 Average up to 4.9: FAIL
Average between 5.0 and 6.9: RECOVERY
 Average 7.0 or higher: PASSED
*/

int main(void) {
float n1,n2,average;
  printf("Enter the first grade: ");
  scanf("%f",&n1);
  printf("Enter the second grade: ");
  scanf("%f",&n2);

    average = (n1 + n2) / 2;

  printf("Average: %.1f\n",average);

  if (average >= 7)
    printf("APPROVED!!");
  else
    if (average <= 5)
      printf("FAILED");
        else
      printf("RECOVERY");

  
  
  return 0;
}
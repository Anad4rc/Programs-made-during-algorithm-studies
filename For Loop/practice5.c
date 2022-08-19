#include <stdio.h>
/*
// Analyzing Values ​​//

Display:
- sum of values
- average between values
- how many are divisible by 5
- how many are null
- sum of even
  */

int main(void) {

int i,num,sumValue=0,div5=0, n=0,sumEven=0;
  float average;

  for(i = 1;i <= 5;i++)
    {
      printf("Enter the %dº number: ",i);
      scanf("%d",&num);

 sumValue = sumValue + num; // sum of entered values
   
   average = sumValue/5;

  if (num%5 == 0 && num!=0) 
     div5 = div5 + 1;
  

  if (num == 0) 
    n = n + 1; 
  
   
  if (num % 2 == 0) 
    sumEven = sumEven + num;
  
      
    }

  printf("sum of values: %d\n",sumValue);
  printf("average between values: %.2f\n",average);
  printf("how many are divisible by 5: %d\n",div5);
  printf("how many are null: %d\n",n);
  printf("sum of Even: %d\n",sumEven);
  
  return 0;
}
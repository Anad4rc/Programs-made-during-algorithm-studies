#include <stdio.h>
/*
Make a program that reads the age and sex of 5 people, showing at the end:
a) How many men were registered 
b) How many women were registered 
c) The average age of the group 
d) The average age of men 
e) How many women are over 20 years old?
*/

/*
- make a condition for age
- make a condition for typing other letters or numbers in the hr of selecting F or M
*/

int main(void) {

int count = 1;
int age;
char op;
int totM = 0,totH = 0;
float average = 0, sum = 0, sumH = 0,averageH = 0,sumM=0,averageM = 0;
int woman20=0;

          
  
  while (count <= 5 )
    {

      
      printf("age of %d person: ",count);
      scanf("%d",&age);
  
      
      printf("sex: [F/M] ");
      scanf("%c", &op);
      
      printf("\n");
      
      count++; //counter

      if (op == 'M' || op == 'm')
      {
          totH = totH + 1;
      
      // average men
      sumH = sumH + age;
      averageH = sumH / totH; //
      }
      
      if (op == 'F' || op == 'f')
      {
         totM = totM + 1;
      //average of women
      sumM = sumM + age;
      averageM = sumM / totM; //
      }
      
      //average of ages
      sum = sum + age;
      average = sum / 5;

      //Women over 20 years old
      if(age > 20)

        woman20 = woman20 + 1;
      
    }

  printf("Total number of registered men: %d\n", totH);
  printf("Total women registered: %d\n",totM);
  printf("The average age of the group: %.1f\n", average);
  printf("Average age of men: %.1f\n",averageH);
  printf("Average age of women: %.1f\n",averageM);
  printf("Women over 20 years old: %d", woman20);


  
  return 0;
}


#include <stdio.h>
/*

Create an algorithm that reads the age of 10 people, showing at the end:
a) What is the youngest age of the group?
b) How many people are over 18 years old //
c) How many people are under 5 years old //
d) What was the oldest age read

*/
int main(void) {

  int count = 1,age,over18 = 0,under5 = 0, majorAge = 0;
  float sum = 0, m;
  

  
  while (count <= 10)
    {
      printf("Age of the %d  person: ", count);
      scanf("%d",&age);
      count++;

      sum = sum + age; // calculate the average

      m = sum/10; //average
      
      if (age > 18) // how many people are of age
       over18 = over18 + 1;
      
      if (age < 5) // how many people are under 5 years old
       under5 = under5 + 1;

      //Which age typed was the greatest
      if (age > majorAge)
       majorAge = age;
    }
  
printf("average: %.2f\n", m);
printf("People over 18 years old: %d\n",over18);
printf("People under 5 years old: %d\n",under5);
printf("Major age: %d years",majorAge);


  return 0;
}
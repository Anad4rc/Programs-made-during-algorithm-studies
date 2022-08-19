#include <stdio.h>

/*
Develop an application that reads the weight and height of 7 people, showing
at the end:
a) What was the average height of the group
b) How many people weigh more than 90 kg
c) How many people weighing less than 50 kg are less than 1.60 m tall?
d) How many people who measure more than 1.90m weigh more than 100Kg.
*/

int main(void) {

  int count = 1,num;
  float weight,height,sum=0,average=0;
  int over90 = 0, under50=0, major190=0;

  printf("How many people are?  ");
  scanf("%d",&num);
  
  
  while (count <= num)
  {
 
    printf("Weight of %d person[in kg]: ",count);
    scanf("%f",&weight);
    printf("Height[m]: ");
    scanf("%f",&height);
    count++;
    printf("\n");
    
    // calculate the average
    sum = sum + height;
    average = sum/num;
    //

    //people over 90 kg
   if(weight > 90)
      over90 = over90 + 1;
//people who weigh less than 50 kg and are short (less than 1.6m)
    if(weight < 50 && height < 1.6)
      
      under50 = under50 + 1;
// people who measure more than 1.90m weigh more than 100Kg
    if(weight > 100 && height > 1.9)
      
      major190 = major190 + 1;
    
   
  }
  
   printf("a) What was the average height of the group: %.3f\n",average);
   printf("b) How many people weigh more than 90kg: %d\n",over90);
   printf("c) How many people weighing less than 50kg are less than 1.60m: %d\n",under50);
   printf("d) How many people who measure more than 1.90m weigh more than 100Kg: %d\n",major190);
  

  return 0;
}
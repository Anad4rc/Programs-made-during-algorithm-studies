#include<stdio.h>

int main(void)
{


//count to the number entered
int i,num;

printf("Enter a number: ");
scanf("%d",&num);


for(i = 0; i <= num;i++)
{
    printf("%d..",i);
}


    return 0;
}
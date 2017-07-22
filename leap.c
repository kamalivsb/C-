# C-
#include<stdio.h>
int main()
{
int year;
printf("enter the year is leap year or not \n");
scanf("%d",&year);
if(year%4==0)
{
printf("%d is the leap year \n",year);
}
else 
{
printf("%d is notb a leap year \n",year);
}
return 0;
}

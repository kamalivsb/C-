# C-
#include<stdio.h>
void main()
{
int i,num,sum=0;
printf("enter an integer number \n");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
sum=sum+1;
}
printf("sum of first %d naturals numbers=%d \n",num,sum);
getch();
}

# C-
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter a posiive integer");
scanf("%d",&n);
for(i=1;i<=n;++1)
{
sum+=i;
}
printf("sum=%d",sum);
return 0;
}

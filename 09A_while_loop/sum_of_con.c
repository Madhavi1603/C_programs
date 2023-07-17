// Find the sum of first n consecutive numbers starting from 1. n will be given as input.

#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter the n values");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
sum=sum+i;
i++;
}
printf("%d result",sum);
}

#include<stdio.h>
int main()
{
int n,sum=0,rem;
printf("enter n numbers:");
scanf("%d",&n);
for(sum=0;n>0;n=n/10)
{
rem=n%10;
sum=sum+rem;
}
printf("sum of digits:%d\n",sum);
}

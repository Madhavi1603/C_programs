#include<stdio.h>
int main()
{
int i=1,a,n,sum1=0;
printf("enter number");
scanf("%d",&n);
while(i<=n)
{
printf("enter value of a");
scanf("%d",&a);
if(a>0)
{
sum1=sum1+a;
}
else
{
if(a<0)
i=n+1;
}
i++;
}
printf("sum of numbers %d",sum1);
}

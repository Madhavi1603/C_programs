#include<stdio.h>
int main()
{
int i=1,n;
float sum=0.0;
printf("enter the n value");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{
sum=sum-(float)1/i;
}
else
{
sum=sum+(float)1/i;
}
i++;
}
printf("sum:%f",sum);
}

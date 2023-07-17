#include<stdio.h>
int main()
{
int n,i=1;
float fact=1,sum=0;
printf("enter the n value");
scanf("%d",&n);
while(n>i)
{
if(i%2==0)
{
fact=fact*i;
sum=sum-(float)1/(fact);
}
else
{
fact=fact*i;
sum=sum+(float)1/(fact);
}
i++;
}
printf("sum:%f",sum);
}

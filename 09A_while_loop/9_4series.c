#include<stdio.h>
int main()
{
int n,x=1,i=1,a=10,b,c=0;
printf("enter the n value");
scanf("%d",&n);
while(i<=n)
{
x=x*a;
b=x-1;
c=c+b;
i++;
}
printf("sum:%d",c);
}

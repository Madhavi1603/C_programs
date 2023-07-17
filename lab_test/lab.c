//write a program to fid the power of given number without using *operator and without using any library function
#include<stdio.h>
int main()
{
int i,a,b,power;
float power1;
printf("enter base and exp values");
scanf("%d%d",&a,&b);
if(a>0&&b>0&&a<b)
{
for(i=1;i<=b;i++)
{
for(power=0;a<=power;power=a+a)
{
power=power+a;
a=power;
}
printf("%d",power);
}
}
return 0;
}

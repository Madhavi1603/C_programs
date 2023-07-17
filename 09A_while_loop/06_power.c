//Write a program to find the power of a given number raised to the given exponent.

#include<stdio.h>
int main()
{
int i=0,base,expo,power;
printf("enter the value of base and expo");
scanf("%d%d",&base,&expo);
while(i<=expo)
{
if(i==0)
power=1;
else
power=power*base;
i++;
}
printf("power of given number :%d",power);
return 0;
}

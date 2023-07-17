//Write a program to read two numbers, and print all prime numbers between the given numbers.
//print how many prime numbers are there at the end.

#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter the 2 values");
scanf("%d%d",&i,&n);
for(;i<=n;i++)
{
int j,a=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
a++;
}
if(a==2)
{
c++;
printf("prime :%d\n",i);
}
}
printf("count:%d\n",c);
}

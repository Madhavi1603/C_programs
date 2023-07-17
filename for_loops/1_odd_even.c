// Write a program to print all odd numbers and even numbers between two given numbers. print odd numbers in one loop and even in another loop after that.

#include<stdio.h>
int main()
{
int i=1,n,s=1;
printf("enter n numbers");
scanf("%d",&n);
printf("list of even numbers");
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d\n",i);
}
printf("list of odd numbers");
for(s=1;s<=n;s++)
{
if(s%2!=0)
printf("%d\n",s);
}
return 0;
}

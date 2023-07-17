//Write a program to read n numbers, and print if each number is divisible with 10 or not.

#include<stdio.h>
int main()
{
int  i=0,n;
scanf("%d",&n);
while(i<n)
{
if(i%10==0)
printf("%d is divisible with 10\n",i);
else
printf("%d is not divisible with 10\n",i);
i++;
}
return 0;
}

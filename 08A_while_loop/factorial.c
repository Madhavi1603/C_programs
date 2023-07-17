#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter value of n :");
scanf("%d",&n);
while(n>1)
{
fact=fact*n;
n--;
}
printf("factorial :%d",fact);
}

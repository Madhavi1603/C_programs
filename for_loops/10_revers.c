#include<stdio.h>
int main()
{
int n,rem;
printf("enter n numbers");
scanf("%d",&n);
do
{
rem=n%10;
printf("%d",rem);
n=n/10;
}
while(n>0);
}

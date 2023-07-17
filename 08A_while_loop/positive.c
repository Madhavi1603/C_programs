#include<stdio.h>
int main()
{
int n,s=-1,sum=0,num;
printf("enter the n value:");
scanf("%d",&n);
while(n>0)
{
sum=sum+n;
n++;
}
printf("sum of positive numbers:%d",sum);
}


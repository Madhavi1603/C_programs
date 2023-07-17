#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter the n values");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
sum=sum+i;
i++;
}
printf("%d result",sum);
}

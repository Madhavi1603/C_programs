#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter the 2 values");
scanf("%d%d",&i,&n);
while(i<=n)
{
int j=1,a=0;
while(j<=i)
{
if(i%j==0)
a++;
j++;
}
if(a==2)
{
c++;
printf("prime :%d\n",i);
}
i++;
}
printf("count:%d\n",c);
}

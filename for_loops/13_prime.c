#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter the 2 values");
scanf("%d%d",&i,&n);
for(i=1;i<=n;i++)
{
int j=1,a=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
a++;
}
if(a==2)
{
if(i==7)
break;
c++;
printf("prime :%d\n",i);
}
}
printf("count:%d\n",c);
}

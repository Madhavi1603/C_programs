#include<stdio.h>
int main()
{
int i=1,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
if(count>=2)
break;
}
if(count==2)
{
printf("%d it is a prime\n",n);
}
else
{
printf("%d not a prime\n",n);
}
printf("count :%d",count);
}


#include<stdio.h>
int main()
{
int a,b,i,lcm,max;
printf("enter two numbers");
scanf("%d%d",&a,&b);
max=a<b?a:b;
for(i=1;i<=max;i++)
{
if(max%a==0&&max%b==0)
{
lcm=max;
break;
}
max++;
}
printf("%d",lcm);
}

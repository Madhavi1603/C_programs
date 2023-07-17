#include<stdio.h>
int main()
{
int a,b,rem,c;
printf("enter 2 values ");
scanf("%d%d",&a,&b);
for(c=0;a>=b;a=rem)
{
rem=a-b;
c++;
}
printf("quotient :%d",c);
printf("remainder:%d",a);
}

#include<stdio.h>
int main()
{
int a,b,rem,c=0;//a=8 b=3
printf("enter the 2 values");
scanf("%d%d",&a,&b);
while(a>=b)
{
rem=a-b;//5 2
c++;
a=rem;	
}
printf("quotient:%d",c);
printf("reminder:%d",a);
}


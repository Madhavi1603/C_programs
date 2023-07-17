//take an integer as input and prints its magnitude(remove sign and print only number)

#include<stdio.h>
int main()
{
int a;
printf("enter a number ");
scanf("%d",&a);
if(a<=0)
{
a=a*(-1);
printf("%d",a);
}
else if(a>=0)
printf("%d",a);
return 0;
}

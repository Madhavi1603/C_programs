//C program to find biggest of two numbers using switch statement

#include<stdio.h>
int main()
{
int a,b,x;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
x=a>b;
switch(x)
{
case 1:printf("%d is biggest of the given numbers\n",a);
       break;
case 0:printf("%d is biggest of the given numbers\n",b);
       break;
}
return 0;
}

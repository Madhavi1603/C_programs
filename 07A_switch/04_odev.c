//C program to check whether a number is odd or even using switch statement

#include<stdio.h>
int main()
{
int a,x;
printf("enter the number");
scanf("%d",&a);
x=a%2==0;
switch(x)
{
case 1:printf("%d is even number\n",a);
       break;
case 0:printf("%d is odd number\n",a);
       break;
}
return 0;
}

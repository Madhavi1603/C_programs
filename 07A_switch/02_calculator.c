// Write the calculator program using switch case statement.

#include<stdio.h>
int main()
{
int x,y,z;
char c;
printf("enter the values and operator");
scanf("%d%c%d",&x,&c,&y);
switch(c)
{
case '+':z=x+y;
         printf("the result :%d",z);
         break;
case '-':z=x-y;
         printf("the result :%d",z);
         break;
case '*':z=x*y;
         printf("the result :%d",z);
         break;
case '/':z=x/y;
         printf("the result :%d",z);
         break;
case '%':z=x%y;
         printf("the result :%d",z);
         break;
default :printf("enter the invalid operator");
}
return 0;
} 

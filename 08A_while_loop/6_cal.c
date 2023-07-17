#include<stdio.h>
int main()
{
int x,y,z,n=1;
char ch;
while(n)
{
printf("enter the values and operator\n");
scanf("%d%c%d",&x,&ch,&y);

switch(ch)
{
case '+':z=x+y;
         printf("the result : %d\n",z);
         break;
case '-':z=x-y;
         printf("the result : %d\n",z);
         break;
case '*':z=x*y;
         printf("the result : %d\n",z);
         break;
case '/':z=x/y;
         printf("the result : %d\n",z);
         break;
case '%':z=x%y;
         printf("the result : %d\n",z);
         break;
default:n=0;
}
}  
return 0;
}

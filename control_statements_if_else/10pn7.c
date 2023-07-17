#include<stdio.h>
int main()
{
int x,y,z;
char ch;
printf("enter the operator");
scanf("%c",&ch);
printf("enter the values");
scanf("%d%d",&x,&y);
if(ch=='+')
{
z=x+y;
printf("%d",z);
}
else if(ch=='-')
{
z=x-y;
printf("%d",z);
}
else if(ch=='*')
{
z=x*y;
printf("%d",z);
}
else if(ch=='/')
{
z=x/y;
printf("%d",z);
}
return 0;
}

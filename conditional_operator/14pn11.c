#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter 4  numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>=b && a>=c)
{
printf("%d is biggest of the given number",a);
}
else if(a>=d && b>=c)
{
printf("%d is biggest of the given number",b);
}
else if(b>=d && c>=d) 
{
printf("%d is biggest of the given number",c);
}
else 
printf("%d is the biggest of the given number",d);
return 0;
}


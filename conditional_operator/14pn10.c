#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
{
printf("%d is biggest of the given number",a);
}
else if(b>=a && b>=c)
{
printf("%d is biggest of the given number",b);
}
else
printf("%d is biggest of the given number",c);
return 0;
}


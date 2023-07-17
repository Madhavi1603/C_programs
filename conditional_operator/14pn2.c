#include<stdio.h>
int main()
{
int a,b;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
a>b?printf("%d is the biggest of two numbers",a):printf("%d is the biggest of two numbers",b);
return 0;
}

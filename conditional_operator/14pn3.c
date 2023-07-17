#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
a>b?(a>c?printf("%d is the biggest of two numbers\n",a):printf("%d is the biggest of two numbers\n",c)):(b>c?printf("%d is the biggest of two numbers\n",b):printf("%d is the biggest of two numbers\n",c));
return 0;
}

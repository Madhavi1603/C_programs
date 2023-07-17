#include<stdio.h>
int main()
{
int a;
printf("enter a value");
scanf("%d",&a);
a%2==0?printf("%d is an even number",a):printf("%d is an odd number",a);
return 0;
}

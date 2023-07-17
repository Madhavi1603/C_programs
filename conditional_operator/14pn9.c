#include<stdio.h>
int main()
{
int a;
printf("enter a value");
scanf("%d",&a);
a%400==0?printf("%d is a leap year",a):a%100==0?printf("%d is a not leap year",a):a%4==0?printf("%d is aleap year",a):printf("%d is a not leap year",a);
return 0;
}


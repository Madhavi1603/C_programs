#include<stdio.h>
#define MACRO 
int main()
{
int a;
#ifdef MACRO
a=10;
printf("%d",a);
#else
printf("enter a value");
scanf("%d",&a);
printf("%d",a);
#endif
}


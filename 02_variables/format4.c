#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,i;
printf("enter value of a");
scanf("%d",&a);
b=(a%10);c=(a/10);d=(c%10);e=(c/10);f=(e%10);g=(e/10);
i=(b*1000+d*100+f*10+g);
printf("%d",i);
return 0;
}

//Write a program to find the product of two integers without using * operator.

#include<stdio.h>
int main()
{
int a,b,product=0,i=1;
printf("enter the value of two integers");
scanf("%d%d",&a,&b);
while(i<=b)
{
product =product+a;
i++;
}
printf("product :%d",product);
return 0;
}

//Write a program to find the factorial of a given number.
//N! = n * n-1 * n-2 * …. 2 * 1

#include<stdio.h>
int main()
{
int i=1,n,product=0;
printf("enter the value of n\n");
scanf("%d",&n);
while(i<=n)
{
product=n-1;
if(product>=n)
product=product*i;
i++;
}
printf("product :%d\n",product);
return 0;
}

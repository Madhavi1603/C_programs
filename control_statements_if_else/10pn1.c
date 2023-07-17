//write a program to read 2 numbers and print the biggest of two numbers
 
#include<stdio.h>
int main()
{
int a,b;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is biggest of the given number ",a);
else
printf("%d is biggest of the given number ",b);
return 0;
}


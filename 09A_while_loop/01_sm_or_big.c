//1)Read a set of numbers (number of inputs is input) and print if each given number is smaller or bigger than the previous number. For first number there will not be any output as there is no previous number.

#include<stdio.h>
int main()
{
int i=0,n;
int a,big;
printf("enter n numbers");
scanf("%d",&n);
while(i<n)
{
scanf("%d",&a);
if(i==0)
big=a;
else 
{
big=big>a?big:a;
if(big==a)
printf("%d is biggest than the previous",a);
else
printf("%d is smaller than the previous",a);
}
i++;
}
return 0;
}


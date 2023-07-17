// Read an integer as inputs and printf if the given number is even or odd

#include<stdio.h>
int main()
{
int a;
printf("enter a numbers");
scanf("%d",&a);
if(a%2==0)
printf("%d is even number",a);
else
printf("%d is odd number ",a);
return 0;
}


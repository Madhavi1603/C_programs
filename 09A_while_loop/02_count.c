//Read a set of n numbers only in ascending order. While reading the numbers, if the user enters a bigger number than previous number, then count it and continue to the next number. If the number is smaller than previous number, then do not count it, and continue to read the next number.

#include<stdio.h>
int main()
{
int i=1,c=0,n;
printf("enter the value of n\n");
scanf("%d",&n);
while(i<=n)
{
int a,value;
printf("enter the value of a\n");
scanf("%d",&a);
if(i==1)
value = a;
else
{
if(a>value)
c = c+1;
value = a;
}
i++;
}
printf("count value:%d\n",c);
return 0;
}

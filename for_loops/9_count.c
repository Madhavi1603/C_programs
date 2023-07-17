#include<stdio.h>
int main()
{
int num,count=0,rem;
printf("enter the numbers");
scanf("%d",&num);
do
{
rem=num%10;
count++;
num=num/10;
}
while(num>0);
printf("no of digits:%d",count);
}


//for one type of mobile sevice,if cost is 250/- up to 100 calls and 1.25/- for call made over and above 100 calls write a program to read numbers of calls  made and computer and print the bil

#include<stdio.h>
int main()
{
int c;
float b;
printf("enter the number of calls ");
scanf("%d",&c);
if(c<=100)
{
b=250;
printf("the bill amount :%f",b);
}
else if(c>100)
{
b=c*1.25;
printf("the bill is:%f",b);
}
return 0;
}


 //if sale price and profit of n items is given as inputs, find the cost price of 1 item

#include<stdio.h>
int main()
{
int sp,p,n,cp,cp1;
printf("enter sp p n values");
scanf("%d%d%d",&sp,&p,&n);
cp=sp-p;
cp1=cp/n;
printf("cost price of 1 item:%d",cp1);
return 0;
} 

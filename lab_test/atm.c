#include<stdio.h>
int main()
{
int a,b,b1,c,c1,d,d1,e,e1,f;
printf("enter the amount to withdraw");
scanf("%d",&a);
b=a/2000; b1=a%2000; c=b1/500; c1=b1%500;
d=c1/200; d1=c1%200; e=d1/100; e1=d1%100;
f=e1/50;
printf("no of 2000 notes:%d\n",b);
printf("no of 500 notes:%d\n",c);
printf("no of 200 notes:%d\n",d);
printf("no of 100 notes:%d\n",e);
printf("no of 50  notes:%d\n",f);
return 0;
}

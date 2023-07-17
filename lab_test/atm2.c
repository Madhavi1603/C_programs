#include<stdio.h>
int main()
{
int a,b,b1,c,c1,d,d1,e,e1,f;
printf("enter the amount to withdraw");
scanf("%d",&a);
if(b=(a/2000))
{
b1=a%2000;
printf("no of 2000 notes:%d",b);
}
else if(c=(b1/500))
{
c1=b1%500;
printf("no of 500 notes :%d\n",c);
}
else if(d=(c1/200))
{
d1=c1%500;
printf("no of 200 notes :%d\n",d);
}
else if(e=(d1/100))
{
e1=d1%500;
printf("no of 100 notes :%d\n",e);
}
else if(f=(e1/50))
{
printf("no of 50 notes :%d\n",f);
}
return 0;
}
 

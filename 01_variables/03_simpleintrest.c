// calculate the simple intrest

#include<stdio.h>
int main()
{
int p,n;
float r,si,m;
printf("enter principle,time in months and rate of intrest");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;
si=p*m*r/100;
printf("%f",si);
return 0;
}

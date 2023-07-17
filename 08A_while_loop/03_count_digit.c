#include<stdio.h>
int main()
{
int n,q,q1,c=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
q=n/10;
c++;
q1=q;
}
n++;
printf("%d",c);
return 0;
}

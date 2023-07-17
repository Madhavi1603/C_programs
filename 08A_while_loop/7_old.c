#include<stdio.h>
int main()
{
int i=1,n,d,m,y;
printf("enter n numbers");
scanf("%d",&n);
while(i<=n)
{
int d1,m1,y1;
printf("enter the date");
scanf("%d-%d-%d",&d1,&m1,&y1);
if(i==0)
{
d=d1;m=m1;y=y1;
}
else if(y>y1)
{
y=y1;m=m1;d=d1;
}
else if(m>m1&&y==y1)
{
y=y1;m=m1;d=d1;
}
else if(d>d1&&m==m1)
{
y=y1;m=m1;d=d1;
}
i++;
}
printf(" oldest date :%d-%d-%d",d,m,y);
}

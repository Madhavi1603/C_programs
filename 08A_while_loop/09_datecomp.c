//Repeat the date comparison program for n times. Read 2 dates n times, every time print which date is old.

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n numbers");
scanf("%d",&n);
while(i<=n)
{
int d1,m1,y1,d2,m2,y2;
printf("enter date of birth of first person \n");
scanf("%d-%d-%d",&d1,&m1,&y1);
printf("enter date of birth pf second person \n");
scanf("%d-%d-%d",&d2,&m2,&y2);
if(y1>y2)
printf("person 2 is older than person 1\n");
else if(y1==y2)
{
if(m1>m2)
printf("person 2 is older than person 1\n");
else if(m1==m2)
{
if(d1>d2)
printf("person 2 is older than person 1\n");
else if(d1==d2)
printf("both  persons born on same day ,same month and same year\n");
else 
printf("person 1 is older than person 2\n");
}
else
printf("person 1 is older than person 2\n");
}
else
printf("person 1 is older than person 2\n");
i++;
}
return 0;
}

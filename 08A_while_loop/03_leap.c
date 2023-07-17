//Read n number of dates, and print each date belongs to leap year or not.

#include<stdio.h>
int main()
{
int i=1,n;
printf(" enter n number");
scanf("%d",&n);
while(i<=n)
{
int d,m,y;
printf("enter date");
scanf("%d-%d-%d",&d,&m,&y);
if(y%400==0)
{
printf("%d-%d-%d leap year \n",d,m,y);
}
else if(y%100==0)
{
printf("%d-%d-%d not a leap year\n ",d,m,y);
}
else if(y%4==0)
{
printf("%d-%d-%d leap year \n",d,m,y);
}
else
{
printf("%d-%d-%d not a leap year \n",d,m,y);
}
i++;
}
return 0;
}

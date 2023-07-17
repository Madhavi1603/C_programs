//Read n number of dates, and print  the date back in below format:eg., if one of the dates given is 3-4-2000, output should be 3 April 2000.

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n number");
scanf("%d",&n);
while(i<=n)
{
int d,m,y;
printf("enter data\n");
scanf("%d-%d-%d",&d,&m,&y);
switch(m)
{
case 1:printf("%d january %d\n",d,y);
       break;
case 2:printf("%d february %d\n",d,y);
       break;
case 3:printf("%d march %d\n",d,y);
       break;
case 4:printf("%d april %d\n",d,y);
       break;
case 5:printf("%d may %d\n",d,y);
       break;
case 6:printf("%d june %d\n",d,y);
       break;
case 7:printf("%d july %d\n",d,y);
       break;
case 8:printf("%d august %d\n",d,y);
       break;
case 9:printf("%d september %d\n",d,y);
       break;
case 10:printf("%d october %d\n",d,y);
       break;
case 11:printf("%d november %d\n",d,y);
       break;
case 12:printf("%d december %d\n",d,y);
       break;
default:printf("invalid number");
i++;
}
}
return 0;
}




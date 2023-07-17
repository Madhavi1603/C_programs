#include<stdio.h>
int main()
{
int d,m,y,x;
printf("enter day,month and year\n");
scanf("%d-%d-%d",&d,&m,&y);
x=(y>=1900&&y<=2200&&m>=1&&m<=12&&d>=1&&d<=31);
switch(x)
{
case 1:if(d==29)
       {
       if(m==2)
       {
       if(y%100!=0&&y%4==0||y%400==0)
       printf("valid date\n");
       else
       printf("invalid date\n");
       }
       }   
       else if(m==2)
       {
       if(d>=1&&d<=28)
       printf("valid date\n");
       else
       printf("invalid date\n");
       }
       else if(m==4||m==6||m==9||m==11)
       {
       if(d>=1&&d<=30)
       printf("valid date\n");
       else
       printf("invalid date\n");
       }
       else  if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
       {
       if(d>=1&&d<=31)
       printf("valid date\n");
       else
       printf("invalid date\n");
       }
       break;
case 0:printf("invalid date\n");
       break;
default:printf("invalid date\n");
}
return 0;
}

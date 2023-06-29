// Extend the percentage marks program to print the grade of the student as per below division , using switch statement.
//80 - 100        : Honours
//60 - 79         : First Division
//50 - 59         : Second Division
//40 - 49         : Third Division
//0 - 39          : Fail

#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,s6,t;
float p;
printf("enter marks of 6 subjects");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t=s1+s2+s3+s4+s5+s6;
p=((float)t/600)*100;
switch((int)p)
{
case 80 ... 100://if(p>=80&&p>=100)
             printf("honours:%.2f",p);
             break;
case 60 ... 79://if(p>=60&&p<50)
            printf("first division:%.2f",p);
            break;
case 50 ... 59://if(p>=50&&p<60)
            printf("second division:%.2f",p);
            break;
case 40 ... 49://if(p>=40&&p<50)
            printf("third division :%.2f",p);
            break;
case 0 ... 39://if(p>=0&&p<40)
           printf("fail:%.2f",p);
            break;
}
return 0;
}

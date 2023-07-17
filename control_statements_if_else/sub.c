#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,s6,T;
float  per;
printf("enter the 6 subject marks");
T=s1+s2+s3+s4+s5+s6;
scanf("%d",&T);
per=(T*100)/600;
scanf("%f",&per);
if(per>=80 && per<=100)
printf(" grade of the student is honour");
else if(per>=60 && per<80)
printf(" grade of the student is first division");
else if(per>=50 && per<60)
printf("grade of the student is second division ");
else if(per>=40 && per<50)
printf("grade of the student is third division ");
else if(per>=0 && per<40)
printf("grade of the student is fail ");
else
printf("fail");
return 0;
} 


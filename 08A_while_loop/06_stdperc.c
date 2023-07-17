// read the 6 subject scores of n students, calculate their percentage, and print the grade of each student based on % using below slabs

#include<stdio.h>
int main()
{
int i=1,n;
printf("enter n number");
scanf("%d",&n);
while(i<n)
{
int s1,s2,s3,s4,s5,s6,t;
float  per;
printf("enter the 6 subject marks\n");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t=s1+s2+s3+s4+s5+s6;
per=((float)t/600)*100;
if(per>=80 && per<=100)
printf("%f grade of the student is honour\n", per);
else if(per>=60 && per<80)
printf("%f grade of the student is first division\n",per);
else if(per>=50 && per<60)
printf("%f grade of the student is second division\n ",per);
else if(per>=40 && per<50)
printf("%f grade of the student is third division\n ",per);
else if(per>=0 && per<40)
printf("%f grade of the student is fail\n ",per);
i++;
}
return 0;
} 
 

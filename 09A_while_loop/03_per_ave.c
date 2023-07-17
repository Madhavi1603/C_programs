//read the 6 subject scores of n students, calculate their percentage, and print the topper percentage. Print the average class percentage.

#include<stdio.h>
int main()
{
int i=1,n,sum=0,avg,topper;
printf("enter n numbers");
scanf("%d",&n);
while(i<=n)
{
int s1,s2,s3,s4,s5,s6,t;
float  per;
printf("enter the 6 subject marks");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t=s1+s2+s3+s4+s5+s6;
per=((float)t/600)*100;
if(i==1)
topper=per;
else
{
if(per>topper)
topper=per;
}
sum=sum+per;
i++;
}
printf("topper :%d\n",topper);
avg =sum/n;
printf("average percentage %d\n",avg);
return 0;
}


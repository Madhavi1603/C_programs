//Read the marks of n students and count how many of them scored above 80% and print the count.

#include<stdio.h>
int main()
{
int i=1,n,c=0;
printf(" enter n numbers");
scanf("%d",&n);
while(i<=n)
{
int s1,s2,s3,s4,s5,s6,t,per1=80;
float  per;
printf("enter the 6 subject marks\n");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
t=s1+s2+s3+s4+s5+s6;
per=((float)t/600)*100;
printf("%f",per);
if(per>per1)
{
c++;
per1=per;
}
i++;
}
printf("count value:%d\n",c);
return 0;
}

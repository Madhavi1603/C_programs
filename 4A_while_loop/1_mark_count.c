//Read 6 subject marks of n students and count how many of them scored above 80% and print the count.

#include<stdio.h>
int main()
{
int i=1,n,c=0;
float per,per1=80;
printf("enter the n value");
scanf("%d",&n);
while(i<=n)
{
int j=1,m=6,s,t=0;
while(j<=m)
{
printf("enter the marks of subjects\n");
scanf("%d",&s);
t=t+s;
j++;
}
per=((float)t/600)*100;
printf("per:%f\n",per);
if(per>per1)
{
c++;
}
i++;
}
printf("count value:%d",c);
}

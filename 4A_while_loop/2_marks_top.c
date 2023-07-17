// Read m subject marks of n students ( take number of subjects as input for every student, and accordingly read the marks and calculate percentage ) and print who is the topper.

#include<stdio.h>
int main()
{
int i=1,n,c=0,m;
float per,topper;
printf("enter the n value :");
scanf("%d",&n);
printf("enter the subjects :");
scanf("%d",&m);
while(i<=n)
{
int j=1,s,t=0;
while(j<=m)
{
printf("enter the marks of subjects :");
scanf("%d",&s);
t=t+s;
j++;
}
per=((float)t/m);
printf("per:%f\n",per);
if(i==1)
topper=per;
else 
topper=topper>per?topper:per;
i++;
}
printf("topper:%f",topper);
}

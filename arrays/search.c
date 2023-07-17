#include<stdio.h>
int main()
{
int a[6];
int i,search,count=0;
//printf("enter size of array:");
//scanf("%d",&n);
printf("enter an array elements:");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
printf("enter search element:");
scanf("%d",&search);
for(i=0;i<6;i++)
{
if(a[i]==search)
count++;
}
if(count!=0)
{
printf("search element in given array");
}
else
{
printf("search element is not in given array");
}
}


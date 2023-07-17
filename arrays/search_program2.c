#include<stdio.h>
int main()
{
int a[6];
int i,search1,search2,count1=0,count2=0;
//printf("enter size of array:");
//scanf("%d",&n);
printf("enter an array elements:");
for(i=0;i<6;i++)
scanf("%d",&a[i]);
printf("enter two search elements:");
scanf("%d%d",&search1,&search2);
for(i=0;i<6;i++)
{
if(a[i]==search1)
count1++;
if(a[i]==search2)
count2++;
}
if(count1!=0)
printf("%d in given array\n",search1);
else
printf("%d is not in given array\n",search1);
if(count2!=0)
printf("%d in given array\n",search2);
else
printf("%d is not in given array\n",search2);
}


#include<stdio.h>
int main()
{
int arr[5],i,sum=0;
for(i=0;i<5;i++)
{
printf("enter a value for arr[ ]:",i);
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum=%d\n",sum);
}

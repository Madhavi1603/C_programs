#include<stdio.h>
int main()
{
int arr[10],i,even=0,odd=0;
printf("enter a value for array:");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("even numbers\n");
for(i=0;i<10;i++)
{
if(arr[i]%2==0)
printf("%d\t\n",arr[i]);
}
printf("odd numbers\n");
for(i=0;i<10;i++)
{
if(arr[i]%2!=0)
printf("%d\n",arr[i]);
}
}

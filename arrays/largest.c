/*#include<stdio.h>
int main()
{
int i,arr[10];//={2,5,4,7,9,12,15,3,6,10};
int large;
for(i=0;i<10;i++)
{
printf("enter the elements of array arr[%d]:",i);
scanf("%d",&arr[i]);
}
large=arr[0];
for(i=1;i<10;i++)
{
if(arr[i]>large)
large=arr[i];
}
printf("largest=%d\n",large);
}*/

/*
#include<stdio.h>
int main()
{
int i,arr[10];//={2,5,4,7,9,12,15,3,6,10};
int small;
printf("enter the elements of array arr");
for(i=0;i<10;i++)
{
//printf("enter the elements of array arr[%d]:",i);
scanf("%d",&arr[i]);
}
small=arr[0];
for(i=1;i<10;i++)
{
if(arr[i]<small)
small=arr[i];
}
printf("smallest=%d\n",small);
}
*/


#include<stdio.h>
int main()
{
int i,arr[10];//={2,5,4,7,9,12,15,3,6,10};
int small,large;
printf("enter the elements of array arr");
for(i=0;i<10;i++)
{
//printf("enter the elements of array arr[%d]:",i);
scanf("%d",&arr[i]);
}
small=large=arr[0];
for(i=1;i<10;i++)
{
if(arr[i]<small)
small=arr[i];
if(arr[i]>large)
large=arr[i];
}
printf("smallest=%d\n largest=%d\n",small,large);
}


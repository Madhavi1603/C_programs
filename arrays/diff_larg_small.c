#include<stdio.h>
int main()
{
int  a[6];
int i,diff,large,small;
//printf("enter size of array:");
//scanf("%d",&n);
printf("enter an array elements:");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
for(i=1;i<6;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("largest=%d\nsmallest=%d\n",large,small);
diff=large-small;
printf("difference of largest and smallest number:%d\n",diff);
}

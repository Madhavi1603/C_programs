/*#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},b[10];
int i,j;
printf("the copied elements:");
for(i=0,j=0;i<10;i++,j++)
{
b[j]=a[i];
printf("%d\t",b[j]);
}
}*/


#include<stdio.h>
int main()
{
int a[10],b[10];
int i,j;
printf("enter the elements of a: ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the copied elements:");
for(i=0,j=0;i<10;i++,j++)
{
b[j]=a[i];
printf("%d\t",b[j]);
}
}
                  

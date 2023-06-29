#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int n,i;
printf("enter number of elements :");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("the elements of the array are:");
for(i=0;i<n;i++)
printf("%d",ptr[i]);
if(ptr==NULL)
{
printf("memory successfully allocated \n");
exit(0);//program terminates when exit(0):is executed
}
else
{
printf("memory successfully allocated  using malloc\n");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
printf("the elements of the array are:");
for(i=0;i<n;i++)
{
printf("%d",ptr[i]);
}
}
}


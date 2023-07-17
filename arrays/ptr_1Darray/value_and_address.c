#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++)
{
printf("value of arr[%d]=%d\n",i,arr[i]);
printf("address of arr[%d]=%p\n",i,&arr[i]);
}
}

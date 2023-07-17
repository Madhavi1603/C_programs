#include<stdio.h>
union num
{
int i;
int l;
float f;
double d;
};
int main()
{
union num arr[2];
int i;
for(i=0;i<2;i++)
{
printf("enter i,l,f,d:");
scanf("%d%d%f%lf",&arr[i].i,&arr[i].l,&arr[i].f,&arr[i].d);
}
for(i=0;i<2;i++)
{
printf("%d\n%d\n%f\n%lf\n",arr[i].i,arr[i].l,arr[i].f,arr[i].d);
printf("size of aunion %ld\n",sizeof(arr[i]));
}
}

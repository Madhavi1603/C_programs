/*#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter 3 values:");
scanf("%d%d%d",&a,&b,&c);
int *p1=&a,*p2=&b,*p3=&c;
max=*p1>*p2?(*p1>*p3?*p1:*p3):(*p2>*p3?*p2:*p3);
printf("max of 3 numbers =%d",max);
}*/

#include<stdio.h>
int max(int *,int *,int *);
int main()
{
int a,b,c;
printf("enter 3 values:");
scanf("%d%d%d",&a,&b,&c);
printf("max of 3 pointers=%d",max(&a,&b,&c));
}
int max(int *p1,int *p2,int *p3)
{
int max;
max=*p1>*p2?(*p1>*p3?*p1:*p3):(*p2>*p3?*p2:*p3);
return max;
}  

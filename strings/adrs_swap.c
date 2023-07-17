#include<stdio.h>
#include<string.h>
void swap(int**,int**);
int main()
{
int a,b,*x,*y;
x=&a;
y=&b;
printf("value of x=%u value of y=%u\n",x,y);
printf("enter 2 values a and b\n");
scanf("%d%d",x,y);
swap(&x,&y);
printf("a=%d,b=%d\n",a,b);
printf("x=%u,y=%u\n",x,y);
}
void swap(int **p1,int**p2)
{
int temp,temp1;
temp=**p1;
**p1=**p2;
**p2=temp;

temp1=*p1;
*p1=*p2;
*p2=temp1;
}


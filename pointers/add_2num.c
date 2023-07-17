#include<stdio.h>
int add(int *,int *);
int main()
{
int a,b;
printf("enter 2 values:");
scanf("%d%d",&a,&b);
printf("sum of 2 pointers=%d",add(&a,&b));
}
int add(int *x,int *y)
{
int sum;
sum=*x+*y;
return sum;
}


/*#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter 2 values:");
scanf("%d%d",&a,&b);
int *p=&a,*q=&b;
sum=*p+*q;
printf("sum of 2 pointers=%d",sum);
}*/

k#include<stdio.h>
struct add
{
int a,b;
int *p;
};                  
int main()
{
int result;
struct add s;
printf("enter two values");
scanf("%d%d",&s.a,&s.b);
result=s.a+s.b;
s.p=&result;
printf("%d+%d=%d",s.a,s.b,*s.p);
}




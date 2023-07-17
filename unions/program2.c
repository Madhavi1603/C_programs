#include<stdio.h>
union my
{
int a;
float b;
char c;
double d;
};
int main()
{
union my u;
u.a=100;
u.b=20.60;
u.c='m';
u.d=29.800;
printf("%d\n%f\n%c\n%lf\n",u.a,u.b,u.c,u.d);
printf("size of union :%ld",sizeof(u));
}

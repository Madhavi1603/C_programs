#include<stdio.h>
union my
{
int a;
double b;
};
int main()
{
union my u;
u.a=100;
printf("%d\n",u.a);
u.b=20.60;
printf("%lf\n",u.b);
printf("size of union :%d\n",sizeof(u));
}

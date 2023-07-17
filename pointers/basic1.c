#include<stdio.h>
int main()
{
int a=2,b=3;
int *p,*q;
p=&a;
q=&b;
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",*p);
printf("%d\n",*q);
printf("%p\n",p);
printf("%p\n",q);
printf("%p\n",&a);
printf("%p\n",&b);
printf("%p\n",&p);
printf("%p\n",&q);
printf("%x\n",a);
printf("%x\n",b);
//printf("%x\n",p);
//printf("%x\n",q);
}

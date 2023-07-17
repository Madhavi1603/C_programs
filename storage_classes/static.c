#include<stdio.h>
void incr();
int main()
{
incr();
incr();
incr();
}
void incr()
{
static int x=5;
x=x+1;
printf("%d\n",x);
}

